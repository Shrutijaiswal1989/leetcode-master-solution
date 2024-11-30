class Solution {
 public:
  int tribonacci(int n) {
    int fib{},fib0{0},fib1{1},fib2{1};
    if(n==1)
    return 1;
    if(n==2)
    return 1;
    for(int i=3;i<=n;i++)
    {
        fib=fib0+fib1+fib2;
        fib0=fib1;
        fib1=fib2;
        fib2=fib;
    }
    return fib;
  }
};