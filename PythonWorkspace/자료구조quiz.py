from random import *

#이게 나의 풀이
lst = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]


print("-- 당첨자 발표 --")
shuffle(lst)
print("치킨 당첨자 : ", lst[19])
lst.pop(lst[19])
shuffle(lst)
print("커피 당첨자 : ", sample(lst, 3))
print("-- 축하합니다 --")

#이게 강의 풀이
users = range(1,21) # 1부터 20까지 숫자를 생성
# print(type(users)) #range 로 나옴
users = list(users)
# print(type(users)) # list로 나옴

# 아하 한 번에 4명 뽑기!
winners = sample(users, 4)
print("-- 당첨자 발표 --")
print("치킨 당첨자 : {0}".format(winners[0]) )
print("커피 당첨자 : {0}".format(winners[1:]) )
print("-- 축하합니다 --")
