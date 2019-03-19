from collections import defaultdict
d = defaultdict(lambda: 0)

input()
for i in list(map(int, input().split())):
    d[i] += 1
input()

for i in list(map(int, input().split())):
    if i in d:
        print(d[i], end = ' ')
    else:
        print(0, end = ' ')
