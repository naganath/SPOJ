decrypted_msg = ''
while True:
    col = int(input())
    if col == 0:
        break
    given_msg = input()
    given_msg = [given_msg[x:x+col] for x in range(0,len(given_msg),col)]
    for i in range(len(given_msg)):
        if i == 0:
            decrypted_msg = decrypted_msg + given_msg[i][0]
        elif (i % 2) == 0:
            decrypted_msg = decrypted_msg + given_msg[i][0]
        else:
            decrypted_msg = decrypted_msg + given_msg[i][-1]
    print(decrypted_msg)
