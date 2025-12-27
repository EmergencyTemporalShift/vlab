#!/bin/bash
DIR="Rayshade/libray/libobj"

# Loop through all .c files in the directory
for file in $DIR/*.c; do
    # Skip box.c since we manually fixed it
    if [[ "$file" == *"/box.c" ]]; then
        echo "Skipping $file..."
        continue
    fi

    echo "Processing $file..."

    # A. Convert K&R headers to ANSI
    # Handles: func(a, b) Vector *a; Ray *b; { ... }
    # This sed script looks for function definitions and moves types inside
    sed -i 's/int \([A-Za-z0-9]*\)(\([^)]*\))/\nint \1(\2)/g' "$file"
    
    # B. Add explicit casts for Method Registration
    # Prevents "incompatible pointer type" errors in GCC 14
    sed -i 's/->intersect = /->intersect = (int (*)())/g' "$file"
    sed -i 's/->normal = /->normal = (int (*)())/g' "$file"
    sed -i 's/->enter = /->enter = (int (*)())/g' "$file"
    sed -i 's/->bounds = /->bounds = (void (*)())/g' "$file"
    sed -i 's/->stats = /->stats = (void (*)())/g' "$file"
    sed -i 's/->uv = /->uv = (void (*)())/g' "$file"

    # C. Fix "mindist/maxdist" pointer dereferencing
    # Since we changed prototypes to Float *, we must dereference for comparisons
    sed -i 's/ < mindist/ < *mindist/g' "$file"
    sed -i 's/ < maxdist/ < *maxdist/g' "$file"
    sed -i 's/ > maxdist/ > *maxdist/g' "$file"
    
    # D. Clean up potential double-casts if script is re-run
    sed -i 's/(int (\*)())(int (\*)())/(int (\*)())/g' "$file"
    sed -i 's/(void (\*)())(void (\*)())/(void (\*)())/g' "$file"
done

echo "Cleaning up header files..."
# Standardize headers to allow empty parameter lists to be treated as generic
sed -i 's/extern int \(.*\)();/extern int \1();/g' $DIR/*.h

echo "Fixing specific pointer logic in intersection routines..."
for shape in cone cylinder sphere torus disc hf; do
    target="$DIR/$shape.c"
    if [ -f "$target" ]; then
        sed -i 's/\*mindist = dist/ *mindist = dist/g' "$target"
        sed -i 's/\*maxdist = dist/ *maxdist = dist/g' "$target"
    fi
done
