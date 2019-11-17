a = int(input())

person = [[ ],[ ],[ ],[ ]]
cnt = 0
while(a > 0) :
    for i in range(0,3) :
        person[cnt][i] = input()
    cnt += 1
    a-=1
