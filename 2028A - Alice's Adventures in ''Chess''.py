def solve():
    [n, a, b] = list(map(int, input().split()))
    s = str(input())
    x, y = 0, 0
    for __ in range(100):
        for c in s:
            if c == 'N':
                y += 1
            elif c == 'E':
                x += 1
            elif c == 'S':
                y -= 1
            else:
                x -= 1
            if x == a and y == b:
                print("YES")
                return
    print("NO")
 
t = int(input())
 
for _ in range(t):
    solve()
