#include <iostream>
using namespace std;
int main (){
	string Nama;
	string Kelas;
	int NIM ;
	int Semester;
	int IPK ;
	
	cout<<"PRAKTIKUM ALGORITMA 2026";
	cout<<"\n\nMasukkan Nama : "; cin>>Nama;
	getline(std::cin, Nama);
	cout<<"Masukkan NIM : " ; cin>> NIM ;
	cout<<"Masukkan Kelas : ";cin>> Kelas;
	cout<<"Semester : "; cin>> Semester;
	cout<<"IPK : "; cin>> IPK;
	
	cout<<"\nBIODATA MAHASISWA" ;
	cout<<"\n==================";
	cout<<"\nNama Mahasiswa : "<<Nama;
	cout<<"\nNim Mahasiswa : "<<NIM ;
	cout<<"\nKelas : "<<Kelas ;
	cout<<"\nSemester : "<<Semester;
	cout<<"\nIPK : "<<IPK;
	return 0;
}