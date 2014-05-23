op = {'^':3,'/':2,'*':2,'+':1,'-':1,'(':0}
stack = []
post = ""
T = int(input())
while T > 0:
    exp = input()
    for ch in exp:
        if ch == '(':
            stack.append(ch)
        if ch in op:
            if ((ch != ')') and (op(ch)>op(stack[-1]))):
                stack.append(ch)
            elif ((ch == ')') and (op(ch)<=op(stack[-1]))):
                stack.pop()
        else:
            post = post + ch
    for char in stack:
        post = post + stack.pop()
    print(post)
    T = T - 1
        
