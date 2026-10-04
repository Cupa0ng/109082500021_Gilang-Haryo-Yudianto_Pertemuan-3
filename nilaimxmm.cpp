#include <iostream>
using namespace std;

int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
 
int cariMinimum()
{
    int i;
    int min = arrA[0];

    for (i = 1; i < 10; i++)
    {
        if (arrA[i] < min)
        {
            min = arrA[i];
        }
    }
    return min;
}
 
int cariMaksimum()
{
    int i;
    int max = arrA[0];

    for (i = 1; i < 10; i++)
    {
        if (arrA[i] > max)
        {
            max = arrA[i];
        }
    }
    return max;
}
 
void hitungRataRata()
{
    int i;
    int total = 0;
    float rata;

    for (i = 0; i < 10; i++)
    {
        total = total + arrA[i];
    }

    rata = (float)total / 10;
    cout << "Nilai rata-rata = " << rata << endl;
}

int main()
{
    int pilihan;
    int i;

    do
    {
        cout << endl;
        cout << "--- Menu Program Array ---" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata - rata" << endl; 
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Isi array: ";
            for (i = 0; i < 10; i++)
            {
                cout << arrA[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            cout << "nilai maksimum = " << cariMaksimum() << endl;
            break;
        case 3:
            cout << "nilai minimum = " << cariMinimum() << endl;
            break;
        case 4:
            hitungRataRata();
            break;
        default:
            cout << "tidak sesuai" << endl;
        }

    } while (pilihan != 0);

    return 0;
}

