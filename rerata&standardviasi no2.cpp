#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

class HitungStatistik {
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
float rata();
float STD();
private:
long sqrt(int n) { return(n*n); }
int n; 
int A[20]; 
};

istream& operator>>(istream& in, HitungStatistik& a)
{
cout << "Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++)
{
cout << "Masukkan data ke- : " << i+1 << " = ";
cin >> a.A[i];
}
return in;
}

float HitungStatistik::rata()
{
float total=0;
for (int i = 0; i<n; i++) total = total + A[i];
return(total/n);
}

float HitungStatistik::STD ()
{ float rerata = rata();
float jumlah=0.0;
for (int i = 0; i<n; i++)
jumlah = jumlah + sqrt(A[i] - rerata);
return(sqrt (jumlah/(n-1)));
}

ostream& operator<<(ostream& out, HitungStatistik& a) {
cout << "Rata-rata dari " << a.n;
cout<< " bilangan adalah : " << a.rata() << endl;
cout << "Standar deviasi= " << a.STD();
return out;
}

int main() {
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}

