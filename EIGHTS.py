T = int(input())

while T > 0:
    num = int(input())
    if num == 1:
        print(192)
    else:
        print(192+(250*(num-1)))
    T = T - 1
