acount = int(input())
bcount = str(input())

aPoints = bcount.count('A')
bPoints = bcount.count('B')

if aPoints > bPoints:
    print("A")
elif bPoints > aPoints:
    print("B")
else:
    print("Tie")