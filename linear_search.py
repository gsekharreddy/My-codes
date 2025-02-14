n = int(input('Enter the size of the array: '))
a = []

for i in range(n):
    val = input(f'Enter value for position {i}: ')
    a.append(val)

s = input('Enter the element to search: ')
found = False
for i in range(n):
    if a[i] == s:
        print(f'The element "{a[i]}" found at position {i}.')
        found = True
        break
    

if not found:
    print(f'Element "{s}" not found in the array.')