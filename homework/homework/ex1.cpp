#include <iostream>
using namespace std;

int luaChon = 0;

void ShowTopMenu()
{
	cout <<" Xin chao, vui long chon chuc nang: " << endl;
	cout <<" 1. Nhap SV: " << endl;
	cout <<" 2. Xuat thong tin SV: " << endl;
	cout <<" 3. Thoat" << endl;
	
	cout <<"Lua chon cua ban: ";
	cin >>luaChon;
}

void clearScreen()
{
	system("clsc");
}

void inputSinhVien()
{
	char mssv[10];
	cout <<"MSSV: ";
	cin >>mssv;
}

void main()
{
	ShowTopMenu();

	clearScreen();
	switch (luaChon)
	{
	case 1:
		inputSinhVien();
		break;
	case 2:
		cout <<"Display screen Output SV" <<endl;
		break;
	case 3:
		cout <<"Exit" <<endl;
		break;
	}

	system("pause");
}
void appearScreen()
{
	system("apscr");
}
void main appear()
{
	ShowTopMenu();

	appearScreen();
	if(luaChon == 0)
	{
		cout <<"ShowTopMenu";
	}
	else
	{
		cout <<"Don't ShowTopMenu";
	}

	system("pause");
}



