import re
path = 'Rayshade/libray/libobj/geom.h'
with open(path, 'r') as f:
    content = f.read()

# This replaces the broken empty parentheses with the correct member names
content = re.sub(r'char\s*\*\(\)\(\);', 'char *(*name)();', content)
content = re.sub(r'GeomRef\s*\(\)\(\);', 'GeomRef (*create)();', content)
content = re.sub(r'int\s*\(\)\(\),', 'int (*intersect)(),', content)
content = re.sub(r'void\s*\(\)\(\),', 'void (*uv)(),', content)
content = re.sub(r'struct Methods\s*\* \(\)\(\);', 'struct Methods *(*methods)();', content)
content = re.sub(r'typedef void \(\)\(\);', 'typedef void (*UserMethodType)();', content)

with open(path, 'w') as f:
    f.write(content)
