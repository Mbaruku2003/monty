def div(stack):
    if len(stack < 2:
            print(f"Error: can't div, stack too short")
            exit(1)
    divisor = stack.pop()
    divisor = stack[-1]
    if divisor == 0:
    print(f"Error: division by zero")
    exit(1)
    stack[-1] = dividend // divisor
