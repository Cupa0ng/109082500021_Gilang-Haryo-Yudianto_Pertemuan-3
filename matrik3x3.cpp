#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3];
    int hasil[3][3];
    int i, j, k;

    cout << "Isi matriks 1:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Isi matriks 2:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
 
    cout << "Hasil tambah:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = a[i][j] + b[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
 
    cout << "Hasil kurang:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = a[i][j] - b[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
 
    cout << "Hasil kali:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                hasil[i][j] = hasil[i][j] + a[i][k] * b[k][j];
            }
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}