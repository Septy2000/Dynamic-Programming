# Time complexity: O(2^n)
# Space complexity: O(n)

def fib(n):
    if n <= 2: return 1
    return fib(n - 1) + fib(n - 2);

# Time complexity: O(n)
# Space complexity: O(n)

def fib_memo(n, map={}):
    if n in map: return map[n]
    if n <= 2: return 1
    map[n] = fib_memo(n - 1, map) + fib_memo(n - 2, map)
    return map[n]

print(fib_memo(50))