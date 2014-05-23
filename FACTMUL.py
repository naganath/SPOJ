import math
n = int(input())
f = 1
while n > 1:
    f = math.factorial(n) * f
    n = n - 1
m = f % 109546051211 
print(m)
