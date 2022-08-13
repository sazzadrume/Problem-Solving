r, c = map(int ,input().split(" "))

if r == 1 or r == 15:
	print("black")
elif r == 2:
	if c == 1 or c == 15:
		print("black")
	else:
		print("white")
elif r == 3:
	if c == 2 or c == 14:
		print("white")
	else:
		print("black")
elif r == 4:
	if c == 1 or c == 3 or c == 13 or c == 15:
		print("black")
	else:
		print("white")
elif r == 5:
	if c == 2 or c == 4 or c == 12 or c == 14:
		print("white")
	else:
		print("black")
elif r == 6:
	if c == 1 or c == 3 or c == 5 or c == 11 or c == 13 or c == 15:
		print("white")
	else:
		print("black")
elif r == 7:
	if c == 2 or c == 4 or c == 6 or c == 10 or c == 12 or c == 14:
		print("white")
	else:
		print("black")
elif r == 8:
	if c % 2 == 0:
		print("white")
	else:
		print("black")
elif r == 9:
	if c == 2 or c == 4 or c == 6 or c == 10 or c == 12 or c == 14:
		print("white")
	else:
		print("black")
elif r == 10:
	if c == 1 or c == 3 or c == 5 or c == 11 or c == 13 or c == 15:
		print("black")
	else:
		print("white")
elif r == 11:
	if c == 2 or c == 4 or c == 12 or c == 14:
		print("white")
	else:
		print("black")
elif r == 12:
	if c == 1 or c == 3 or c == 13 or c == 15:
		print("white")
	else:
		print("black")
elif r == 13:
	if c == 2 or c == 14:
		print("white")
	else:
		print("black")
elif r == 14:
	if c == 1 or c == 15:
		print("black")
	else:
		print("white")