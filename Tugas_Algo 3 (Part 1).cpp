#include <iostream>
using namespace std;

int main(){
	int NIM, nim;
	string status;
	
	cout<<"Masukkan NIM pertama : ";
	cin>>nim;
	cout<<"Masukkan NIM kedua : ";
	cin>>NIM;
	if((NIM>=60)&& (nim>=60))
	{
		status = "Lulus";
	}

	else
	{
		status = "Gagal";
	}
	cout<<"Status Anda :  "<<status;






return 0;
}
