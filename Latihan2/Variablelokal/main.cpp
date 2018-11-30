#include <iostream>

using namespace std;

void hitung()
{
int total = 1;
total *= 5;
cout << "nilai total pada lain() = " << total << endl;
}

int main()
{
int total = 2;
total++;
hitung();
cout << "nilai total pada main() = " << total << endl;
}
