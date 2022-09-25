

numrows = 5

triangle = []

triangle.append([])
triangle[0].append(1)

for i in range(1,numrows):
	triangle.append([])
	triangle[i].append(1)
	for j in range(1,i):
		triangle[i].append((triangle[i-1][j-1]+triangle[i-1][j]))
	triangle[i].append(1)

for i in range(numrows):
	print(triangle[i])




