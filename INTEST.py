num = []
res = 0
s = input().split()
s = list(map(int, s))
while s[0] > 0:
    if (int(input()) % s[-1]) == 0:
        res = res + 1
    s[0] = s[0] - 1
if res != 0:
    print(res)
else:
    print(0)
