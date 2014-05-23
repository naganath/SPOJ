T = int(input())
num = []
steps = 0
while T > 0:
    for i in range(3):
        num.append(int(input()))
    a = num[0]
    b = num[1]
    c = num[-1]
    if (a and b) < c:
        steps = -1
    if (a and b) == c:
        steps = 1
    if (a > b) and ((a - b) == c):
        steps = 2
    if (a < b) and ((b - a) == c):
        steps = 2
    a = 0
    b = 0
    c = 0
    num = []
    print(steps)
    T = T - 1
