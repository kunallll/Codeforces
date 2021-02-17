n1 = input()
n2 = input()

num = ""

for i in range(0, len(n1)):
    if n1[i] == n2[i]:
        num += "0"
    else:
        num += "1"

print(num)