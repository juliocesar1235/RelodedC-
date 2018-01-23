#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    char cTienda;
    int iNumero;
    char cClave;

    do
    {
        cout << "Inserte F si tu tienda es Frelic o insete I si tu tienda es Ideal" << endl;
        cin >> cTienda;

        if (cTienda == 'F')
		{
				cout << "Inserte la clave de la tarjeta" << endl;
				cin >> cClave;
				switch (cClave)
			{
				case 'A' : cout << "El precio es $8.00" << endl;
					break;
				case 'C' : cout << "El precio es $11.00" << endl;
					break;
				case 'F' : cout << "El precio es $15.50" << endl;
					break;
				case 'G' : cout << "El precio es $18.00" << endl;
					break;
					default:
					cout << "Error";
            }
		}

         else if (cTienda == 'I')
		{
			cout << "Inserte el número de la tarjeta" << endl;
			cin >> iNumero;
			if (iNumero == 185)
			{
				cout << "El precio es $12.50" << endl;
			}
			else if (iNumero == 265 )
			{
				cout << "El precio es $16.00" << endl;
			}
			else if (iNumero == 435)
			{
				cout << "El precio es $20.00" << endl;
		    }
			else if (iNumero == 525)
		    {
				cout << "El precio es $24.50" << endl;
			}
			else
			{
				cout << "Error" << endl;
			}
		}
    } while (cTienda != 'F' || cTienda != 'I');
}
