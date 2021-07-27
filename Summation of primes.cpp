#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, j, primo, soma = 0;

    for (n = 1; n <= 2000000; n++)
    {
        cout << n << endl;
        primo = 0;
        for (j = 1; j <= n; j++)
        {
            if (n % j == 0)
                primo++;
        }
        if (primo <= 2)
            soma = soma + n;
    }

    cout << "A soma dos primos ate  2 milhao " << soma;
}
