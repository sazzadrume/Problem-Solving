tt = int(input())

for i in range(tt):
	n, m = map(int, input().split())

	mn = min(n, m)
	mx = max(n, m)

	ans = mn + mn + mx - 2

	if(n == 1 and m == 1):
		ans = 0

	print(ans)