num = []
T = int(input())
while T > 0:
    n = int(input())
    if n > 0:
        num.append(n)
    T = T - 1
print(sum(num))
