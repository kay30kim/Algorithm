msg = input('임이의 문장을 입력하세요 :')
if 'a' in msg:
    print('당신이 입력한 문장에는 a가 있습니다.')
else:
    print('당신이 입력한 문장에는 a가 없습니다.')
    
print('당신의 문장 길이는 <%d>입니다.'%len(msg))
txt1 = 'A'
txt2 = '안녕'
txt3 = 'Warcraft Three'
txt4 = '1234'
ret1 = txt1.isalpha()
ret2 = txt2.isalpha()
ret3 = txt3.isalpha()
ret4 = txt4.isalpha()
print(ret1)
print(ret2)
print(ret3)
print(ret4)
ret4 = txt4.isdigit()
print(ret4)
txt1 = '안녕하세요?'
txt2 = '3피오R2D2'
ret1 = txt1.isalnum()
ret2 = txt2.isalnum()
print(ret1)
print(ret2)
txt = 'A lot of Things occur each day.'
ret1 = txt.upper()
ret2 = txt.lower()
print(ret1)
print(ret2)
txt = ' 양쪽에 공백이 있는 문자열입니다. '
ret1 = txt.lstrip()
ret2 = txt.rstrip()
ret3 = txt.strip()
print('<' + txt +'>')
print('<'+ret1+'>')
print('<'+ret2+'>')
print('<'+ret3+'>')
numstr = input('숫자를 입력하세요:')
try:
    num = int(numstr)
    print('당신이 입력한 숫자는 정수 <%d>입니다.' %num)
except:
    try:
        num = float(numstr)
        print('당신이 입력한 숫자는 실수 <%f>입니다.'%num)
    except:
        print('+++숫자를 입력하세요+++')
    
num1 = 1234
num2 = 3.14
numstr1 = str(num1)
numstr2 = str(num2)
print('문자여 %s' %numstr1)
print(' 문자려 %s' %numstr2)
