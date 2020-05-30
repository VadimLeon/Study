numb = int(input())

arr = [57, 71, 87, 97, 99, 101, 103, 113, 114, 115, 128, 129, 131, 137, 147, 156, 163, 186]
count = [1] + [0] * numb

for i in range(57, numb + 1):
    for j in arr:
            count[i] += count[i - j]

print(count[numb])
