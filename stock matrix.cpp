#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mat[5][5], line, colum, valor, f = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = rand() % 400;
            cout << setw(4) << mat[i][j];
        }
    }

    do
    {
        cout << "\nInforme a linha para retirda do estoque:";
        cin >> line;
        cout << "\n Informe a coluna para retidada do estoque:";
        cin >> colum;
        cout << "\n Informe o valo para retirada do estoque:";
        cin >> valor;

        for (int i = 0; i < 5; i++)
        {
            cout << endl;
            for (int j = 0; j < 5; j++)
            {

                if (i == line - 1 && j == colum - 1)
                {
                    mat[i][j] = mat[i][j] - valor;

                    if (mat[i][j] <= 0)
                        f = 1;
                }
                cout << setw(4) << mat[i][j];
            }
        }

    } while (f == 0);
}