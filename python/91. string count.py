txt = 'A lot of things occur each day, every day'
word_count1 = txt.count('o')
word_count2 = txt.count('day')
word_count3 = txt.count(' ')
print(word_count1)
print(word_count2)
print(word_count3)
offset1 = txt.find('e')
offset2 = txt.find('day')
offset3 = txt.find('day',30)
print(offset1)
print(offset2)
print(offset3)
url = 'http://www.naver.com/news/today=20160831'
log = 'name:홍길동 age:17 sex:남자 nation:조선'
print(url)
ret1 = url.split('/')
print(ret1)

ret2 = log.split()
print(ret2)
for data in ret2:
    d1, d2 = data.split(':')
    print('%s -> %s' %(d1,d2))

loglist=['2016/07/26 10:12:11', '200', 'OK', '이 또한 지나가리라']
bond = ';'
log = bond.join(loglist)
print(log)

txt = 'My password is 1234'
ret1 = txt.replace('1', '0')
ret2 = txt.replace('1', 'python')
print(ret1)
print(ret2)

txt = '매일 많은 일들이 일어납니다.'
ret3 = txt.replace('매일', '항상')
ret4 = ret3.replace('일','사건')
print(ret3)
print(ret4)
