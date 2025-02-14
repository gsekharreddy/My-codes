n=int(input('Enter the number of elements in the array : '))
a=[]
for i in range(n):
    val = input(f'Enter value for position {i}: ')
    a.append(val)
for i in range(len(a)):
    for j in range(len(a)-i-1):
        if (a[j] > a[j + 1]):
            a[j], a[j + 1] = a[j + 1], a[j]
print('The sorted array is : ',a)