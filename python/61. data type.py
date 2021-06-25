numdata = 57
strdata = '파이썬'
listdata = [1,2,3]
dictdata = {'a':1, 'b':2}

def func():
    print('안녕하세요')

print(type(numdata))
print(type(strdata))
print(type(listdata))
print(type(dictdata))
print(type(func))

print()
a = 11113
b = 23
ret = a % b
print('<%d>를 <%d>로 나누면 <%d>가 나머지로 남습니다.' %(a,b,ret))
ret1, ret2 = divmod(a,b)
print('<%d>를 <%d>로 나누면 몫이 <%d>, 나머지가 <%d>가 나머지로 남습니다.' %(a,b,ret1,ret2))

print()
h1 = hex(97); print(h1)
h2 = hex(98); print(h2)
ret1 = h1 + h2
print(ret1)
a = int(h1,16); print(a)
b = int(h2, 16); print(b)
ret2 = a + b
print(hex(ret2))
