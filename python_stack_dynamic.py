
# Stack-Dynamic Array in Python
size = int(input("Enter size: "))
arr = [0] * size

for i in range(size):
    arr[i] = i + 1
    print(arr[i], end=" ")
