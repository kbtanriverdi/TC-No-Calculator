a=""
def check():
    firstTen=0
    oddNum=0
    evenNum=0
    for i in range(9):
        firstTen += int(a[i])
        if i%2==0:
            oddNum += int(a[i])
        else:
            evenNum += int(a[i])
    if str(oddNum*7+evenNum*9)[len(str(oddNum*7+evenNum*9))-1]==a[-2] and str(oddNum*8)[len(str(oddNum*8))-1]==a[-1]:
        print(f"{a} is a valid TC No")
        return
    else:
        print(f"{a} is not a valid TC No")
    return

while True:
    try:
        a=str(input("Enter an 11 digit TC No: "))
        if len(a)==11:
            check()
        else:
            continue
    except:
        break
