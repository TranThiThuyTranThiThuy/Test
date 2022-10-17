#include<iostream>
#include <math.h>
#include<string>
using namespace std;
struct thisinh
{
	double masv;
	float DToan;
	float DLy;
	float DHoa;
};
int main()
{
	struct thisinh sv[100];
	int i, n;
	cout <<  " Nhap vao luong so sinh vien :  ";
	cin >> n;
	string ten;
	string diachi;
	
	for (i = 0; i < n; i++)
	{
		cout << "--------------------"<< endl;
		cout << "Nhap vao ma sinh vien  " << i+1  << " : ";
		cin >> sv[i].masv;
		cout << "Nhap vao diem toan sinh vien " << i+1  << " : ";
	    cin >> sv[i].DToan;
		cout << "Nhap vao diem ly sinh vien " << i+1  << ": ";
		cin >> sv[i].DLy;
		cout << "Nhap vao diem hoa sinh vien " << i+1  << " : ";
		cin >> sv[i].DHoa;
		cin.ignore();
		cout << "Nhap vao ten sinh vien  " << i + 1 << " : ";
		getline(cin, ten);
		cout << "Nhap vao dia chi sinh vien " << i + 1 << " : ";
		getline(cin, diachi);
	}
	for (i = 0; i < n; i++)
	{
		cout << "**********************"<< endl;
		cout << "**********************" << endl;
		cout <<" Ma So Sinh Vien " << i+1 << " : " << sv[i].masv << endl;
		cout <<" Diem toan : " << sv[i].DToan<< endl ;
		cout << " Diem ly  : " << sv[i].DLy << endl;
		cout << " Diem hoa : " << sv[i].DHoa<< endl ;
		cout << " Ten sinh vien : " << i + 1<< ten <<endl;
		cout << " Dia chi sinh vien " << i + 1 << ":  "<< diachi << endl;
	}
	return 0;
}

		
