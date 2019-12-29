a = str(input())
b = str(input())
c = str(input())
d = str(input())
e = str(input())
f = str(input())

aList = [str(a), str(b), str(c), str(d), str(e), str(f)]

if aList.count('W') == 5 or aList.count('W') == 6:
	print("1")
elif aList.count('W') == 3 or aList.count('W') == 4:
	print("2")
elif aList.count('W') == 1 or aList.count('W') == 2:
	print("3")
else:
	print("-1")