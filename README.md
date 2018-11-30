# Praktikum_7

# Latihan 1 (Program menukar nilai dari 2 buah variable)
```
-Mendeklarasikan nilai void tukar(int &a, int &b) sebagai rumus menukar nilai
-Mendekalarasikan variable int a,b; sebagai variable input
-Menukar nilai dengan kode: tukar(a,b);
-Menampilkan hasil nilai tukar kelayar dengan kode:  
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << endl;
    cout << "===SETELAH DITUKAR==="<< endl;
    cout << endl;

    tukar(a,b);

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

-Berikut kode lengkapnya:

#include <iostream>

using namespace std;

void tukar(int &a, int &b)
{
    a=10;
    b=20;
}
int main()
{
    int a,b;
    a=20;
    b=10;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << endl;
    cout << "===SETELAH DITUKAR==="<< endl;
    cout << endl;

    tukar(a,b);

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

    return 0;
}

```
-Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_7/blob/master/Flowlathan1.1.png)

-Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_7/blob/master/Latihan1.1.png)

# Latihan 2 (Program fungsi perkalian 2 buah bilangan bulat)
```
-Mendeklarasikan int operasi(int a, int b); sebagai inisialisasi integer
-Mendeklarasikan int a, b; sebagai variable input 
-Memasukka bilangan dengan kode :
    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
-Menghitung perkalian dengan kode :
 cout << a << " x " << b << " = ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {
            cout<<" + ";
        }
-Menampilkan hasil perkalian dua buah bilgan kelayar dengan kode :

    int a, b;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;

    operasi(a,b);

}

int operasi(int a, int b)
{
    cout << a << " x " << b << " = ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {


-Berikut kode lengkapnya:

#include <iostream>

using namespace std;

int operasi(int a, int b);

int main()
{
    int a, b;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;

    operasi(a,b);

}

int operasi(int a, int b)
{
    cout << a << " x " << b << " = ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {
            cout<<" + ";
        }
    }

}

```
-Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_7/blob/master/Flowlatihan1.2.png)

-Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_7/blob/master/Latihan1.2.png)