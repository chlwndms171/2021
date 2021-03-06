cabinet = {3:"유재석", 100:"김태호"}
print(cabinet[3])
print(cabinet[100])

print(cabinet.get(3))
print(cabinet.get(100))

# print(cabinet[5]) = 에러
print(cabinet.get(5)) # != 에러
print(cabinet.get(5, "사용 가능")) 

print(3 in cabinet) #True
print(5 in cabinet) #False

cabinet1 = {"A-3":"유재석"}
print(cabinet["A-3"])

#새 손님
print(cabinet)
cabinet["C-20"] = "조세호"

# 간 손님
del cabinet["A-3"]  
print(cabinet)

# key 들만 출력
print(cabinet.keys())

# value 들만 출력
print(cabinet.values())

# key, value 쌍으로 출력
print(cabinet.items())

# 목욕탕 폐점
cabinet.clear()
