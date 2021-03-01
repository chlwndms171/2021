students = [1,2,3,4,5]
print(students)
students = [i+100 for i in students]
print(students)

student = ["Iron man", "Thor", "I am groot"]
stduent = [len(i) for i in students] #또는 i.upper
print(students)

for waiting_no in [0,1,2,3,4]:
    print("대기번호: {0}".format(waiting_no))