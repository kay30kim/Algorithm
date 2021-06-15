scope = [1,2,3,4,5]
for x in scope:
    print(x)
str = 'abcedf'
for c in str:
    print(c)
list = [1,2,3,4,5]
for c in list:
    print(c)
print()
ascii_codes = {'a':97, 'b':98, 'c':99}
for p in ascii_codes:
    print(p)
print()
for z in range(10):
    print(z)

print()
scope = [1,2,3,4,5]
for x in scope:
    print(x)
    if x<3:
        continue
        print(x)
    else:
        print('end')
        break

print()
scope = [1,2,3]
for x in scope:
    print(x)
else:
    print('Perfect')

print()
x = 0
while  x<10:
    x = x+1
    if x<3:
        continue
    print(x)
    if x>7:
        break

val =None
print(val)
condition=1;
if condition == 1:
    val = [1,2,3]
else:
    val = 'I love Python'
print(val)
