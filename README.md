# Fibonacci Sequence Generator

My Goal is to implement one or more algorithms, which calculate the fibonacci sequence or the n-th digit of this sequence.

## Textbook Algorithm

While researching I found the following _TextBook Algorithm_ Online.

```c
# naive fibonacci 
iterations = 0
def fib(n):
    global iterations
    
    if n == 0:
        return 0
    elif n == 1:
        iterations+=1
        return 1
    else:
        iterations+=1
        return fib(n-1) + fib(n-2)

print("sum:", fib(40)) # sum: 102334155
print("total iterations", iterations)  # total iterations 267914295
```

Mentioned in the article is, that this algorithm gets slower the bigger N.

Because 