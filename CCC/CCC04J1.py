import math
tiles = int(input())

if math.sqrt(tiles) * math.sqrt(tiles)==tiles:
    print("The largest square has side length",str(int(math.sqrt(tiles)))+".")
else:
    print("The largest square has side length",str(int(tiles/4))+".")
    