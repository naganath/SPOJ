sum_list = []
num_list = []
while True:
    num_list = input().split()
    if (num_list[0] == '-1') and (num_list[-1] == '-1'):
        break
    for i in range(int(num_list[0]),(int(num_list[-1])+1)):
        dig_list = list(map(int,str(i)))
        sum_list.append(sum(dig_list))
    print(sum(sum_list))
