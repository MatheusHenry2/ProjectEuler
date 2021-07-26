#include <iostream>
#include <iomanip>
using namespace std;

int soma = 0;

int fib(int n)
{
    if (n <= 2)
        return 1;
    if (n - 1 + n - 2 > 4000000)
        return 0;
    if (n % 2 == 0)
        soma = soma + n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << "Fibonacci" << fib(n) << endl;
    cout << "Pair sum:" << soma << endl;
}
