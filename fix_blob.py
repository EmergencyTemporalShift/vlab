import re
path = 'Rayshade/libray/libobj/blob.c'
with open(path, 'r') as f:
    content = f.read()

# This replaces the registration block with one that uses 
# (void *) to bypass the strict incompatible pointer check
patterns = {
    r'iBlobMethods->methods\s*=\s*[^;]*;': 'iBlobMethods->methods = (Methods * (*)()) (void *)BlobMethods;',
    r'iBlobMethods->name\s*=\s*[^;]*;': 'iBlobMethods->name = (char * (*)()) (void *)BlobName;',
    r'iBlobMethods->intersect\s*=\s*\(int \(\*\)\(\)\)\s*\([^;]*\);': 'iBlobMethods->intersect = (int (*)()) (void *)BlobIntersect;',
    r'iBlobMethods->normal\s*=\s*\(int \(\*\)\(\)\)\s*\([^;]*\);': 'iBlobMethods->normal = (int (*)()) (void *)BlobNormal;',
    r'iBlobMethods->bounds\s*=\s*[^;]*;': 'iBlobMethods->bounds = (void (*)()) (void *)BlobBounds;',
    r'iBlobMethods->stats\s*=\s*[^;]*;': 'iBlobMethods->stats = (void (*)()) (void *)BlobStats;'
}

for pattern, replacement in patterns.items():
    content = re.sub(pattern, replacement, content)

with open(path, 'w') as f:
    f.write(content)
