import math
tot_app = 0
K_more = 0
temp_list = []
for i in range(10):
    tot_app = int(input())
    K_more = int(input())
    temp_list.append(math.ceil((tot_app-K_more)/2))
    temp_list.append(tot_app-temp_list[0])
    print(temp_list[-1])
    print(temp_list[0])
    temp_list = []
