from random import *

passenger = 0;
for i in range(1, 51):
    time = randrange(5, 51)
    if time >= 5 and time <=15:
        passenger += 1;
        isright = "o"
        print("[{0}] {1}번째 손님 (소요시간 : {2}분)".format(isright, i, time))
    else:
        isright = " "
        print("[{0}] {1}번째 손님 (소요시간 : {2}분)".format(isright, i, time))

print("총 탑승 승객 : {0}분".format(passenger))

# 답에서는 애초에 [o]이랑 [ ]을 isright 같은 변수로 지정하지 않고 
# 그냥 따로 작성함. print("[o] 어쩌구")랑 print("[ ] 어쩌구")