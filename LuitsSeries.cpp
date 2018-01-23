#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, NI, DI,valor;
    double suma;
    suma = 0.0;


    cin >> n;
    cin >> NI;
    cin >> DI;

    for (int counter = 1; counter <=n; counter++)
        {
            valor = counter;
            suma = suma + NI/DI;
            cout << NI << "/" << DI;
            NI = NI + 1;

            if (counter < n)
            {
                cout << " + ";
            }

            if (fmod(DI,2) == 0)
                {
                    DI = DI + 3;
                }
                else if (fmod(DI,2) != 0)
                    {
                        DI = DI +1;
                    }

        }

        if (valor == n)
                {
                    cout << " = " << suma << endl;
                }

    return 0;
}
