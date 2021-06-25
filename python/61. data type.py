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

print()
b1 = bin(97)
b2 = bin(98)
ret1 = b1 + b2
print(ret1)
a = int(b1,2)
b = int(b2,2)
ret2 = a + b
print(ret2)
print(bin(ret2))

print()
bnum = 0b11110000; bstr = '0b11110000'
onum = 0o360; ostr = '0o360'
hnum = 0xf0; hstr = '0xf0'
b1 = int(bnum); b2 = int(bstr,2); print(b1); print(b2)
o1 = int(onum); o2 = int(ostr,8); print(o1); print(o2)
h1 = int(hnum); h2 = int(hstr,16); print(h1); print(h2)

print()
abs1 = abs(-3)
abs2 = abs(-5.2)
abs3 = abs(3+4j)
print(abs1)
print(abs2)
print(abs3)

print()
ret1 = round(1118); print(ret1)
ret2 = round(16.554); print(ret2)
ret3 = round(1118,-1); print(ret3)
ret4 = round(16.554,2); print(ret4)

print()
idata1 = int(-5.4); print(idata1)
idata2 = int(1.78e1); print(idata2)
idata3 = int(171.56); print(idata3)

print()
fdata = float(10)
print(fdata)
