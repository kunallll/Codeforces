n = int(input())
x = list(map(int, input().strip().split()))
y = list(map(int, input().strip().split()))

x.extend(y)

xDict = [0]*(n + 1)

for i in x:
    xDict[i] += 1

flag = 1

for i in range (1, n+1):
    if xDict[i] == 0:
        print("Oh, my keyboard!")
        flag = 0
        break
    
if flag == 1:
    print ("I become the guy.")

