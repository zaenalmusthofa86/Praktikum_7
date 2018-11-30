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
