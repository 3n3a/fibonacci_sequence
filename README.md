# Fibonacci Sequence Generator

My Goal is to implement one or more algorithms, which calculate the fibonacci sequence or the n-th digit of this sequence.

## Textbook Algorithm

While researching I found the following _TextBook Algorithm_ Online.

```python
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

This is because of the recursive calling of itself, meaning to get for example the fibonacci number for n=20, the function had to iterate 17710 times. That's nowhere near peak efficiency :)

## Dynamic Programming

## Memoization Technique 

```python
# memoization fibonacci
iterations = 0
def memoize(f):
    memo = {}
    def helper(x):
        if x not in memo:            
            memo[x] = f(x)
        return memo[x]
    return helper

fib = memoize(fib)
print("sum:", fib(40)) # sum: 102334155
print("total iterations", iterations) # total iterations 40
```

Each new calculation of a fibonacci number is remembered and reused. Since I couldn't find an easy solution to implement this in c, I moved onto the next code sample below:

```python
iterations = 0
def fib(n):
    global iterations
    new, old = 1, 0
    for i in range(n):
            new, old = old, new + old
            iterations+=1 #keep track of how many times its run
    return old
print("sum:", fib(40)) #sum:102334155
print("total iterations:", iterations) #total iterations 40
```

This code snippet remembers the last two fibonacci numbers, since this is all, that's needed to calculate the next fibonacci number in the sequence.
After I got this implementation working in C it turns out, that it takes 1/780 th of the time it takes to run the textbook-algorithm-variant.

---

## Sources

* [Geeks for Geeks: Program for Fibo Number in Diff Languages](https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/)
* [Muthu: Fast Fibo Algo Explanation](https://muthu.co/fast-nth-fibonacci-number-algorithm/)