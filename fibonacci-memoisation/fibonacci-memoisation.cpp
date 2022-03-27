#include <iostream>
#include <map>
using namespace std;

// Time complexity: O(2^n)
// Space complexity: O(n)

int fib(int n) {
    if (n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

// Time complexity: O(n)
// Space complexity: O(n)

int fib_memo(int n, map<int, int> &memo) {
    if (memo.count(n)) return memo[n]; 
    if (n <= 2) return 1;
    memo.insert(pair<int, int>(n, fib_memo(n - 1, memo) + fib_memo(n - 2, memo)));
    return memo[n];
}

int main() {
    map<int, int> memo;
    cout << fib_memo(30, memo);

    return 0;
}