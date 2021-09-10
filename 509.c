509. Fibonacci Number

Runtime:      0 ms
Memory Usage: 5.4 MB

int fib(int n){
    if (n == 0)
        return n;
    int a = 0, b = 1, result = 1;
    for(int i = 1; i < n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}
