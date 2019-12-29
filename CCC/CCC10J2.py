a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())

nikkyDistance = (a - b) + (s - a - b)
if c == 21:
    byronDistance = (c-d)
else:
    byronDistance = (c - d) + (s - c - d)

if nikkyDistance > byronDistance:
    print("Nikky")
elif byronDistance > nikkyDistance:
    print("Byron")
elif byronDistance == nikkyDistance:
    print("Tied")