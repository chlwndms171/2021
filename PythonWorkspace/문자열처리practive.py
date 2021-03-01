####탈출문자
print("백문이 불여일견\n줄바꿈 하는 법")

print("저는 \"나도코딩\"입니다.")

print("c:\\Users\\최주은\\Desktop\\PythonWorkspace") #\\는 \ 하나로 처리됨

print("RedApple\rPine") # \r은 커서를 맨 앞으로 이동시킴

print("Redd\bApple") #\b는 백스페이스 (한 글자 삭제)

print("Red\tApple") #\t = 탭



####문자열 포맷
#방법 4
age = 20
color = "빨간"
print(f"나는 {age}살이며, {color}색을 좋아해요.")

#방법 3
print("나는 {age}살이며, {color}색을 좋아해요." .format(age = 20, color="빨간"))

#방법 2
print("나는 {}살입니다." .format(20))
print("나는 {}색과 {}색을 좋아해요.".format("파란", "빨간"))
print("나는 {1}색과 {0}색을 좋아해요.".format("파란", "빨간"))

#방법 1
print("나는 %d살입니다." % 20)
print("나는 %s을 좋아해요." % "파이썬")
print("Apple 은 %c로 시작해요." %"A")

####문자열처리함수
python = "Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())
print(len(python))

index = python.index("n")
print(index)
index = python.index("n", index+1)
print(index)
print(python.find("Java")) #찾는 값이 없으면 -1 반환
#print(python.index("Java")) #찾는 값이 없을 때는 에러 반환

print(python.count("n"))


####슬라이싱
jumin = "990210-1234567"
print("성별 : "+ jumin[7])
print("연 : "+ jumin[0:1])
print("생년월일 : "+jumin[:6])
print("뒤 7자리 : "+jumin[7:])
print("뒤 7자리 (다른방법)" + jumin[-7:]) #맨 뒤 7번째부터 7자리

####문자열
sentence= '나는 소년입니다'
print(sentence)
sentence2 = "파이썬은 쉬워요"
print(sentence2)
sentence3 = """
나는 소년이고, 
파이썬은 쉬워요
"""
print(sentence3)
