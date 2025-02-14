def fibonacci(n):
    if n <= 0:
        return "Please enter a positive integer"
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib_series = [0, 1]
        for i in range(2, n):
            next_number = fib_series[-1] + fib_series[-2]
            fib_series.append(next_number)
        return fib_series

# Example usage:
n =  int(input('Enter the ')) # Number of terms
print(fibonacci(n ))
