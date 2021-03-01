add = "http://naver.com"
index = add.index(".")
len = index-7
print(add[7:10] + str(len) + str(add.count("e"))+"!") 
#만약에 daum.net일경우 오류남. 아예 url을 슬라이스 했어야 함.

##정답
url = "http://naver.com"
my_str = url.replace("http://", "")
my_str = my_str[:my_str.index(".")]
password = my_str[:3] + str(len(my_str)) + str(my_str.count("e")) + "!"
print("{0} 의 비밀번호는 {1} 입니다.".format(url, password)) 