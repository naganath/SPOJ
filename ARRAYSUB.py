s = ''
sub_array = []
n = int(input())
print()
a = input().split()
k = int(input())
if k == 1:
    print("".join(a))
else:
    for i in range(len(a) - (k - 1)):
        for j in range(k):
            sub_array.append(a[i+j])
        s = s + str(max(sub_array))
        sub_array = []
    print(int(s))
