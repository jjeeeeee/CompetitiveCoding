n = int(input())
sequence = map(int, input().split())

stack = []

for number in sequence:
    while stack and stack[-1] <= number:
        number = number * 2 if stack[-1] == number else number
        stack.pop()
    stack.append(number)

print(stack[0])
