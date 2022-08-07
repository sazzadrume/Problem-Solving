a = int(input())
ans = 0
if a < 6:
	print(0)
elif a % 10 != 0:
	print(1)
else:
	ans += a/5 + a/25 + a/125
	print(ans)

