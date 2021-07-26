#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long sum = 0, sump = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += pow(i, 2);
        sump += i;
    }

    cout << "Sum :" << sum << endl;
    cout << "Sump:" << pow(sump, 2) << endl;
    cout << "Difenca:" << pow(sump, 2) - sum;
}
