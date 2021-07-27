#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], uniao[0], tam = 0;

    cout << "Vetor A : " << endl;

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 21;
        cout << a[i] << " ";
    }

    cout << "\nVetor B : " << endl;

    for (int i = 0; i < 10; i++)
    {
        b[i] = rand() % 21;
        cout << b[i] << " ";
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                uniao[tam++];
                uniao[i] = a[i];
            }
        }
    }

    cout << "\nUniao" << endl;

    for (int i = 0; i < tam; i++)
        cout << uniao[i] << " ";
}
