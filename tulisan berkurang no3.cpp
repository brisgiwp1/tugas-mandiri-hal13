#include <iostream>
using namespace std;

int main()
{
	string tulisan;
	cout<<"Masukkan Tulisan : ";
	cin>>tulisan;
	cout<<endl;
	int x=tulisan.length()-1;
	for(x;x>=0;x--)
	{
		for(int y=0;y<=x;y++){
			cout<<tulisan[y];
		}
		cout<<endl;
	}
	return 0;
}
