#include <iostream>
#include<math.h>
using namespace std;
int main()
{
int n, k;
cout << "dati numarul dorit n: ";
cin >> n;
cout << "dati numarul dorit k: ";
cin >> k;
cout << "8.1.1 " << endl << " n*8 = " << n * 8<<endl;
cout << "8.1.2 " << endl << " n/4= " << n/4<<endl;
cout << "8.1.3 " << endl << " n*10 (pe biti)= " << n * ((1 << k) + 2) << endl;
cout << "8.2 " << endl;
if ((n & 1) == 0)
cout << " nr par";
else
cout << " nr impar ";
cout << endl << "8.3 ";
int x, y;
cout <<endl<< " se citesc cele doua numere x si y: ";
cin >> x >>y;
cout<<" Afisare bit y din x: "<< (x >> y & 1)<<endl;
cout << "8.4.1" << endl;
cout << " setare la valoarea 0: " << (x & (255 ^ (1 << y))) << endl;
cout << "8.4.2" << endl;
cout << " setare la valoarea 1: " << (x | (1 << y)) << endl;
cout << "8.4.3"<<endl;
cout << " se sterge bitul y: " << (x & ~(1 << y));
cout << endl << "8.4.4" << endl;
cout << " se complementeaza bitul y: " << (x ^ 1 << y)<<endl;
cout << "8.5.1 "<<endl;
int a, b;
cout << " a = ";
cin >> a;
cout << " b = ";
cin>> b;
a = a + b;
b = a - b;
a = a - b;
cout <<" "<< a << " " << b<<endl;
cout << "8.5.2" << endl;
a = a ^ b;

b = a ^ b;
a = a ^ b;
cout <<" "<< a << " " << b << endl;
cout << "8.6"<<endl;
if (n == (1 << k))
cout << " Este ";
else
cout << " Nu este ";
cout << endl << "8.7" << endl;
int m, p, q, r;
cout << " se citesc numerele m, p, q, r: ";
cin >> m >> p >> q >> r;
m = m % (int)pow(2, r);
p = p % (int)pow(2, q);
p = p << r;
m = m | p;
cout << " noua valoare a lui p este: " << p;
}
