import math

n = int(input().strip())
arr = list(map(int, input().split()))

result = arr[0]
for x in arr[1:n]:
    result = math.lcm(result, x)

print(result)