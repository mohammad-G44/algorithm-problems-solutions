t = int(input())
for i in range(t):
    n = int(input())
    ans = 1
    while n > 3:
        n //= 4
        ans *= 2
    print(ans)
