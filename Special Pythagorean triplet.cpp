#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for (int a = 0; a <= 1000; a++)
    {
        for (int b = a + 1; b <= 1000; b++)
        {
            for (int c = b + 1; c <= 1000; c++)
            {
                if (((a * a + b * b == c * c) && ((a + b + c) == 1000)))
                {
                    cout << "A: " << a << " B: " << b << " C" << c << endl;
                    break;
                }
            }
        }
    }
}
