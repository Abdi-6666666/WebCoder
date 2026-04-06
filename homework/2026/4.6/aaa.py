import math
n = int(input())
a = list(map(int, input().split()))
m = int(input())
flag = 0
for i in range(m):
    if m in a:
        print("Yes")
        flag = 1
        break
if flag == 0:    
    print("No")