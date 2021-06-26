"""
def getPrime(x):
    if x%2 == 0:
        return

    for i in range(3,int(x/2),2):
        print(i)
        print(x)
        if x%i==0:
            print('enter')
            break
    else:
        print('return')
        return x

listdata = [117,119,1113,11113,11119]
ret = filter(getPrime,listdata)
print(list(ret))
"""
listdata= [9.96, 1.27, 5.07, 6.45, 8.38, 9.29, 4.93, 7.73, 3.71, 0.93]
maxval = max(listdata)
minval = min(listdata)
print(maxval)
print(minval)

txt = 'Alotogthingsocrcureachday'
maxval = max(txt)
minval = min(txt)
print(maxval)
print(minval)

maxval = max(2+3,2*3,2**3,3**2)
minval = min('abz','a12')
print(maxval)
print(minval)

a = 107
b = a & 0x0f
print(b)

a = 107
b = (a>>4)&0x0f
print(b)

txt1 = 'A tale that was not right'
txt2 = '이 또한 지나가리라.'
print(txt1[5])
print(txt2[-2])
