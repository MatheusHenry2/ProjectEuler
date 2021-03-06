#include <iostream>
#include <iomanip>
using namespace std;

int memo[50];

int fib(int n)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fib(n - 1) + fib(n - 2);

    return memo[n];
}

int main()
{
    for (int i = 0; i < 50; i++)
        memo[i] = -1;

    int n;

    cout << "\n Informe o valor N do fibonacci:";
    cin >> n;

    cout << "\n O fibonacci  de " << n << " e : " << fib(n) << endl;
}