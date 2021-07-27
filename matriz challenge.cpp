#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sizeA, sizeB, start, end, mat[20][20], maior = 0, line, colum, smaior = 0;

    cout << "\n Informe o tamanho da linha da matriz:";
    cin >> sizeA;
    cout << "\n Informe o tamanho da coluna da matriz:";
    cin >> sizeB;

    do
    {
        cout << "\n Informe o inicio do intevalo de prenchimento:";
        cin >> start;
        cout << "\n Informe o final do intervalo:";
        cin >> end;
    } while (start >= end);

    for (int i = 0; i < sizeA; i++)
    {
        cout << endl;
        for (int j = 0; j < sizeB; j++)
        {
            mat[i][j] = rand() % end - start;
            cout << setw(4) << mat[i][j];

            if (mat[i][j] > maior)
            {
                smaior = maior;
                maior = mat[i][j];
                line = i + 1, colum = j + 1;
            }
        }
    }

    cout << "\n O maior valor da matriz :" << maior;
    cout << "\n O segundo maior :" << smaior;
    cout << "\n O maior valor esta na linha :" << line;
    cout << "\n o maior valor esta na coluna :" << colum