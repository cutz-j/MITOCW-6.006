a = input()
b = input()
c = input()

answer = int(a)*int(b)*int(c)

arr = [0] * 10

for num in str(answer):
    arr[int(num)] += 1
    
for i in arr:
    print(i)