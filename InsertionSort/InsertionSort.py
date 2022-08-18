#Insertion Sort Python Implementation
a = [4, 1, 2, 9, 8, 5, 7, 6, 3]
print("Array Before Insertion Sort:")
for i in range(len(a)):
	print(a[i], end=" ")

for i in range(1,len(a)):
	key = a[i]
	j = i-1
	while(j>=0 and a[j]>key):
		a[j+1] = a[j]
		j=j-1
	a[j+1] = key

print("Array after Insertion Sort: ")
for i in range(len(a)):
	print(a[i], end=" ")

