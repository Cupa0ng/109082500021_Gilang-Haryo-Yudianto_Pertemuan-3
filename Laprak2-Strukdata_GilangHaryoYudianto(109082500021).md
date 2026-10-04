# <h1 align="center">Modul 2  PENGENALAN BAHASA C++ (BAGIAN KEDUA) </h1>
<p align="center">Gilang Haryo Yudianto- 109082500021</p>

## Dasar Teori

### A. Array

Array adalah struktur data yang berisi kumpulan elemen sejenis di bawah satu nama variabel, di mana setiap anggotanya dapat diakses melalui nomor indeks yang selalu berawal dari angka 0.

Berdasarkan jumlah dimensinya, array terbagi menjadi bentuk satu dimensi yang berupa deretan larik tunggal, dua dimensi yang merepresentasikan tabel berbaris dan berkolom, serta multidimensi atau berdimensi banyak yang menggunakan lebih dari dua indeks

### B. Pointer dan Alamat Memori

Pointer adalah variabel khusus yang berfungsi menyimpan alamat memori dari variabel lain. Karena pointer juga merupakan sebuah variabel, ia memiliki ruang memori dan alamatnya sendiri, serta harus dideklarasikan sesuai dengan tipe data yang ditunjuknya (misalnya int *p_int untuk data integer). Melalui pointer, nilai dari variabel yang ditunjuk dapat diakses atau diubah menggunakan operator *

### C. Pointer dan Array

Pointer dan array memiliki keterkaitan yang sangat erat dalam pemrograman. Sebuah pointer dapat dikonfigurasi untuk menyimpan alamat memori dari elemen spesifik di dalam array. Misalnya, memberikan perintah pa = &a[0] akan mengarahkan pointer pa tepat ke posisi elemen pertama dari array a. Untuk mengakses atau mengambil nilai aktual dari data yang berada di alamat tersebut, kita cukup menggunakan operator dereferensi *.

### D. Pointer dan String

String adalah jenis data yang dipakai untuk mengolah teks atau kalimat. Pada bahasa C++, string terbentuk dari kumpulan karakter atau array yang diakhiri oleh karakter khusus null '\0' sebagai tanda batas akhir, dan ukurannya bisa ditentukan lewat deklarasi seperti char nama[50].

### E. Fungsi

Fungsi adalah sekumpulan instruksi terisolasi yang dibuat untuk menjalankan tugas tertentu guna menciptakan program yang lebih terstruktur, modular, dan efisien. Melalui penerapan fungsi, duplikasi kode dapat ditekan seminimal mungkin karena bagian program yang sama dapat dipanggil kembali tanpa harus menulisnya berulang kali.

### F. Prosedur

Prosedur dalam C++ adalah blok kode atau fungsi khusus berjenis void yang menjalankan tugas tertentu tanpa menyertakan nilai kembalian kepada pemanggilnya.

Struktur penulisannya diawali dengan kata kunci void, diikuti oleh nama prosedur serta daftar parameter opsional di dalam tanda kurung. Seluruh perintah yang ada di dalamnya akan otomatis dieksekusi begitu prosedur tersebut dipanggil dari fungsi utama (main) atau bagian program lainnya.

### G. Parameter Fungsi

Parameter dalam fungsi dibagi menjadi dua jenis, yaitu parameter formal yang dituliskan saat fungsi didefinisikan dan parameter aktual berupa nilai atau argumen yang dikirimkan ketika fungsi tersebut dipanggil. Parameter aktual sendiri dapat berbentuk variabel, konstanta, atau ungkapan.

Khusus pada bahasa C++, pengiriman parameter ke dalam fungsi dapat dilakukan melalui tiga metode utama, yakni pemanggilan dengan nilai (call by value), pemanggilan menggunakan pointer (call by pointer), serta pemanggilan lewat referensi (call by reference).

#### 1. Call by Value
Pada *call by value*, nilai dari parameter aktual disalin ke dalam parameter formal. 

#### 2. Call by Pointer
Pada *call by pointer*, alamat suatu variabel dilewatkan ke dalam fungsi menggunakan pointer. 

#### 3. Call by Reference
Pada *call by reference*, alamat suatu variabel dilewatkan ke dalam fungsi melalui parameter referensi. 

## Guided 

### 1. Program Array 1

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[5];

    nilai[0] = 80;
    nilai[1] = 85;
    nilai[2] = 90;
    nilai[3] = 75;
    nilai[4] = 95;

    for (int i = 0; i < 5; i++) {
        cout << nilai[i] << endl;
    }

    return 0;
}

```
Program C++ ini memperlihatkan penggunaan dasar array satu dimensi bertipe int dengan lima elemen bernama nilai.Elemen-elemen array tersebut diisi secara manual dari indeks 0 sampai 4 dengan angka 80, 85, 90, 75, dan 95.Isi array kemudian dicetak ke layar secara berurutan ke bawah menggunakan perulangan for dari indeks awal hingga akhir, dengan hasil akhir berupa kelima nilai tersebut.Secara keseluruhan, program ini dibuat untuk menunjukkan proses deklarasi, pengisian nilai, dan penampilan data array menggunakan struktur perulangan pada C++
### 2. Program Array 2

```C++
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
    {80, 85, 90},
    {75, 80, 85},
    {90, 95, 100}
};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
Program ini menyajikan implementasi array dua dimensi pada C++ untuk merepresentasikan matriks berukuran 3x3, di mana sembilan elemen bertipe integer langsung diinisialisasi saat pendeklarasian variabel.

### 3. Program Array Banyak

```C++
#include <iostream>
using namespace std;

int main() {
    int data[2][2][2][2] = {
        {
            {
                {1, 2},
                {3, 4}
            },
            {
                {5, 6},
                {7, 8}
            }
        },
        {
            {
                {9, 10},
                {11, 12}
            },
            {
                {13, 14},
                {15, 16}
            }
        }
    };

    cout << data[0][0][0][0] << endl; // 1
    cout << data[1][1][1][1] << endl; // 16

    return 0;
}
```
Program C++ ini mendemonstrasikan implementasi array empat dimensi ([2][2][2][2]) yang berisi total 16 elemen integer berurutan dari 1 hingga 16 dalam inisialisasi bersarang.

Melalui penggunaan indeks bertingkat, program mengambil serta menampilkan nilai elemen pertama (data[0][0][0][0] yaitu 1) dan elemen terakhir (data[1][1][1][1] yaitu 16) ke layar, sehingga secara keseluruhan berfungsi untuk memperlihatkan tata cara deklarasi, pengisian, dan pengambilan data pada array berdimensi tinggi.

### 4. Program Pointer 1

```C++
#include <iostream>
using namespace std;

int main() {
    char a;
    int j;
    char arr[6];

    arr[3] = 'b';
    a = 'u';

    cout << a << endl;
    cout << &a << endl;
    cout << j << endl;
    cout << &j << endl;

    cout << &(arr[4]) << endl;

    return 0;
    
}
```
Program C++ ini mengilustrasikan konsep dasar alamat memori dan pointer melalui penggunaan operator alamat (&). Di dalam kode, terdapat deklarasi beberapa jenis variabel, yaitu a yang bertipe char, j yang bertipe int, serta sebuah array arr[6]. Operator & di sini berperan penting untuk mengambil lokasi atau alamat memori dari variabel-variabel tersebut, yang nantinya akan menjadi nilai yang disimpan oleh sebuah pointer.

### 5. Program Pointer 2

```C++
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;

    return 0;
}
```
Program ini adalah contoh dasar penggunaan pointer dalam bahasa C++ yang melibatkan variabel x dan y bertipe integer serta pointer px. Nilai 87 dimasukkan ke dalam x, lalu alamat memorinya diambil menggunakan operator & dan disimpan pada pointer px, sebelum akhirnya nilai tersebut diakses via operator * untuk disalin ke variabel y.

### 6. Program Pointer 3

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];

    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    for (i = 0; i < MAX; i++) {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }

    cout << "\ndata nilai siswa :\n";

    for (i = 0; i < MAX; i++)
        cout << "nilai k-" << i + 1 << "=" << nilai[i] << endl;

    cout << "\n nilai tahunan : \n";

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++)
            cout << nilai_tahun[i][j];
        cout << "\n";
    }

    return 0;
}
```
Program C++ ini mendemonstrasikan implementasi array satu dan dua dimensi menggunakan konstanta MAX bernilai 5, yang mencakup proses deklarasi, pengisian, hingga penampilan data.Dengan memanfaatkan array satu dimensi nilai[5] untuk menampung masukan nilai bertipe float dari pengguna dan menampilkannya secara berurutan. Selain itu, program juga mengelola array dua dimensi nilai_tahun[5][5] yang telah terinisialisasi sebelumnya, lalu menyajikannya dalam bentuk struktur matriks 5×5 melalui penerapan perulangan bersarang 


### 7. Program Pointer 4

```C++
#include <iostream>
using namespace std;

int main() {
    char nama[] = "strukdat";

    cout << nama << endl;
    cout << nama[3] << endl;

    return 0;
}
```
Program C++ sederhana ini dirancang untuk mendemonstrasikan dasar-dasar penggunaan string melalui array karakter. Di dalamnya, sebuah array bernama nama diinisialisasi dengan kata "strukdat" untuk memperlihatkan cara deklarasi dan menampilkan teks secara utuh menggunakan perintah cout. Selain itu, program ini juga menunjukkan cara mengakses elemen spesifik berdasarkan indeksnya, yang dicontohkan melalui pemanggilan nama[3] untuk menampilkan karakter 'u' pada posisi indeks ke-3.

### 8. Program Fungsi

```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

int main() {
    int x, y, z;
    cout << "masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 =";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 =";
    cin >> z;
    cout << "nilai maksimumnya adalah = " << maks3(x, y, z);
    return 0;
}

int maks3(int a, int b, int c) {
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return (temp_max);
}
```
Program C++ ini mengilustrasikan penerapan fungsi pendukung maks3 dan fungsi utama main guna menentukan nilai terbesar dari tiga angka yang diinputkan pengguna melalui proses perbandingan bersyarat, lalu menampilkan hasilnya di layar untuk menunjukkan mekanisme penggunaan parameter serta nilai kembalian.

### 9. Program Procedure

```C++
#include <iostream>
using namespace std;

void tulis(int x);

int main() {
    int jum;
    cout << "jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

void tulis(int x) {
    for (int i = 0; i < x; i++)
        cout << "baris ke-" << i + 1 << endl;
}
```
Program C++ ini mendemonstrasikan penerapan prosedur atau fungsi void bernama tulis yang dipanggil di dalam program utama (main). Melalui program ini, pengguna dapat menginput jumlah baris tertentu yang kemudian diproses oleh prosedur tulis untuk mencetak teks "baris ke-n" secara berulang menggunakan perulangan for. Karena menggunakan tipe data void, fungsi pembantu tersebut hanya bertugas mengeksekusi perintah pencetakan teks tanpa mengembalikan nilai apa pun ke program utama. Secara keseluruhan, kode ini berfungsi sebagai media pembelajaran untuk memahami cara pembuatan dan pemanggilan prosedur, sekaligus memperjelas perbedaan mendasar antara fungsi yang memiliki nilai balik dengan prosedur yang tidak mengembalikan nilai dalam C++.


## Unguided 

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3 

```C++
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3];
    int hasil[3][3];
    int i, j, k;

    cout << "isi matriks 1:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "isi matriks 2:" << endl;
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
}
```
### Output Unguided 1 :

##### Output 1
![Output 1](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputmatrik3x3/outputmatrik3x3.png)

Program C++ ini dirancang untuk memproses tiga operasi dasar pada dua matriks berukuran 3×3, yaitu penjumlahan, pengurangan, dan perkalian. Pada awal proses, pengguna diminta menginput semua elemen untuk matriks A dan matriks B menggunakan bantuan perulangan for bersarang. Seluruh data elemen tersebut disimpan secara terstruktur di dalam memori program dengan memanfaatkan variabel berbentuk array dua dimensi.

Setelah tahap input selesai, program langsung mengeksekusi proses perhitungan. Operasi penjumlahan dan pengurangan dilakukan dengan cara menghitung elemen-elemen dari matriks A dan B yang berada pada posisi indeks yang sama. Sementara itu, operasi perkalian matriks diselesaikan menggunakan tiga perulangan for, di mana setiap elemen hasilnya diperoleh dari penjumlahan hasil kali antara elemen baris matriks A dan elemen kolom matriks B. Sebagai tahap akhir, hasil dari ketiga operasi numerik tersebut langsung ditampilkan ke layar dalam format bentuk matriks menggunakan perulangan for.


### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel 

```C++
#include <iostream>
using namespace std;

void tukar(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Before:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukar(&a, &b, &c);

    cout << "\nAfter:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
```
### Output Unguided 2 :

##### Output 2
![Output 2](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputtukarnilai/Outputtukarnilai.png)

Program C++ ini menukar nilai tiga variabel (a, b, dan c) dengan memanfaatkan pointer. Fungsi tukar() menerima alamat ketiga variabel lewat parameter int *a, int *b, dan int *c, lalu memakai variabel temp sebagai penyimpan sementara selama proses pemindahan nilai. Urutannya: nilai a disalin ke b, nilai b ke c, dan nilai awal a yang tersimpan di temp diberikan ke c.

Saat dipanggil, fungsi diberi alamat variabel menggunakan operator &. Program mencetak nilai a, b, dan c sebelum dan sesudah pertukaran, sehingga terlihat bahwa perubahan terjadi langsung pada variabel aslinya. Mekanisme inilah yang disebut call by pointer.

### 3. Diketahui sebuah array 1 dimensi sebagai berikut :  arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata â€“ rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata â€“ rata! Buat program menggunakan menu switch-case seperti berikut ini : --- Menu Program Array --- 1. Tampilkan isi array 2. cari nilai maksimum 3. cari nilai minimum 4. Hitung nilai rata - rata 
```C++
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


```
### Output Unguided 3 :

##### Output 3
![Output 1](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputnilaimxmm/Outputnilaimxmm_menu1.png)
![Output 2](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputnilaimxmm/Outputnilaimxmm_menu2.png)
![Output 3](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputnilaimxmm/Outputnilaimxmm_menu3.png)
![Output 4](https://github.com/Cupa0ng/109082500021_Gilang-Haryo-Yudianto_Pertemuan-3/blob/main/Outputnilaimxmm/Outputnilaimxmm_menu4.png) 


Program C++ di atas merupakan program pengolahan data array yang menggunakan beberapa fungsi untuk mencari nilai maksimum, minimum, dan rata-rata dari sebuah array. Program menyediakan menu interaktif sehingga pengguna dapat memilih operasi yang ingin dilakukan.

Array arrA berisi 10 nilai, yaitu 11, 8, 5, 7, 12, 26, 3, 54, 33, 55.

cariMinimum() digunakan untuk mencari nilai terkecil dalam array.
cariMaksimum() digunakan untuk mencari nilai terbesar dalam array.
hitungRataRata() digunakan untuk menghitung nilai rata-rata seluruh elemen array.
switch-case digunakan untuk menjalankan menu berdasarkan pilihan pengguna.
do-while membuat menu terus ditampilkan sampai pengguna memilih menu 5 (Keluar).

Secara keseluruhan, program ini menerapkan konsep array, fungsi, perulangan, percabangan, dan menu interaktif dalam pemrograman C++.

## Kesimpulan
Modul 2 berfokus pada pengorganisasian data dan kode program yang terstruktur dalam C++ menggunakan empat konsep utama: array, pointer, fungsi, dan prosedur. Array berfungsi menyimpan sekumpulan elemen sejenis yang diakses menggunakan indeks berbasis nol, baik dalam bentuk satu dimensi maupun multidimensional. Di dalam memori, data tersebut disimpan berurutan, sehingga memori dapat dianalogikan sebagai array besar dengan alamat unik di setiap selnya. Dari prinsip ini, lahirlah konsep pointer, yaitu variabel khusus yang menyimpan alamat memori variabel lain. Akses alamat memori dilakukan dengan operator &, sedangkan pembacaan nilai di alamat tersebut menggunakan operator *.

modul ini juga membahas penggunaan fungsi (yang mengembalikan nilai) dan prosedur (fungsi void tanpa nilai balik). Dalam penerapannya, terdapat tiga metode pengiriman parameter: call by value (menyalin nilai saja tanpa mengubah variabel asli), serta call by pointer dan call by reference yang mampu memodifikasi variabel asli, di mana call by reference menawarkan penulisan kode yang lebih ringkas.


## Referensi
[1] Malik, D. S. (2010). *Data Structures Using C++* (2nd ed.). Boston: Cengage Learning.
<br>[2] Drozdek, A. (2013). *Data Structures and Algorithms in C++* (4th ed.). Boston: Cengage Learning.
<br>...

