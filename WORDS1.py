words = []
flag = []
res = False
T = int(input())
while(T>0):
    n = int(input())
    for i in range(n):
        words.append(input())
    if(len(words)==1):
        res = False
    else:
        for i in range(n):
            if((i==0) and (words[i][-1]==words[i+1][0])):
                flag.append("true")
            if(i==(n-1) and (words[i][0]==words[i-1][-1])):
                flag.append("true")
            elif((i!=0) and (i!=(n-1))):
                if((words[i][0]==words[i-1][-1]) and (words[i][-1]==words[i+1][0])):
                    flag.append("true")
            else:
                flag.append("false")
    for word in flag:
        if(word=="true"):
            res = True
        else:
            res = False
    if(res):
        print("Ordering is possible.")
    else:
        print("The door cannot be opened.")
    T = T - 1
    words = []
    flag = []
            
        
