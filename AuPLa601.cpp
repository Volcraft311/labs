/*
    AuPLa0601. Sastādīt C++ programmu, kurā lietotājs ievada veselu skaitļu masīvu.
    Skaitļu skaitu uzdod lietotājs. Pēc ievada jāizdrukā masīva lielākā elementa vērtība un visas atrašanās vietas.
    Visas atrašanās vietas jāsaglabā citā masīvā.
    Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
    Vladimirs Gadirovs vg26031
    09.10.2026
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ok = 1;
    do
    {
        int n;
        cout << "Ievadiet naturālu skaitli n, n > 0: ";
        cin >> n;

        while (n <= 0)
        {
            cout << "Kļūdaina vērtība. Jāievada n, n > 0: ";
            cin >> n;
        }

        int *massivs = new int[n];
        cout << "Ievadiet skaitli 1 : ";
        cin >> massivs[0];
        int max = massivs[0];

        for (int i = 1; i < n; i++)
        {
            cout << "Ievadiet skaitli " << i + 1 << " : ";
            cin >> massivs[i];
            if (massivs[i] >= max) max = massivs[i];
            
        }

        int skaits = 0;
        for (int i = 0; i < n; i++){
            if (massivs[i] == max) skaits++;
        }

        int *vietas = new int[skaits];
        int x = 0;
        for (int i = 0; i < n; i++){
            if(massivs[i] == max) {
                vietas[x] = i;
                x++;
            }
        }

        cout << "Max value : " << max << ", Vietas: { ";
        for (int i = 0; i < skaits - 1; i++){
            cout << vietas[i] << ", ";
        }
        cout << vietas[skaits - 1] << " }" << endl;

        delete[] massivs;
        delete[] vietas;
        cout << "Turpināt vai beigt? (1)/(0): ";
        cin >> ok;
    } while (ok == 1);
}

/*                  Testu plāns
    Ievads(n)       Massivs      Programmas vēlamā reakcija
        3            2,1,2          Max value : 2, Vietas [0, 2]
        5            3,4,6,4,6      Max value : 6, Vietas [2, 4]
        0               0           Kļūdaina vērtība. Jāievada n, n > 0
*/