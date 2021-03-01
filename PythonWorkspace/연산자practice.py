print(1+1)
print(3-2)
print(5*2)
print(6/3)

print(2**3) # 2^3 = 8
print(5%3) # 나머지 구하기 2
print(5//3) # 몫 1
print(5/3)

print(not(1 != 3)) 

print((2 + 3) * 5)
number = 2 + 3 * 4
print(number)
number +=2 # = number + 2
print(number)
# %= *= /= -= 모두 가능

print(abs(-5)) #절댓값
print(pow(4,2))
print(max(5,12))
print(min(5,12))
print(round(3.14))

from math import *
print(floor(4.99))#내림
print(ceil(3.14)) #올림
print(sqrt(16)) #제곱근

from random import *
print(random()) #.0~1.0사이 임의의 값 생성
print(random()*10) #0.0~10.0사이의 임의의 값 생성
print(int(random()*10))  #정수로 나옴
print(int(random()*10)) #1부터 10이하의 임의의 값 생성

#로또값 추첨
print(int(random() * 45)+1) #1부터 45이하의 임의의 값 생성
print(randrange(1,46)) #1~46 미만의 임의의 값 생성
print(randint(1,45)) #1~45 이하의 임의의 값 생성