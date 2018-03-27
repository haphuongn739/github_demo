/*
Bai tap: Viết chương trình quản lý Sinh viên. Biết mỗi Sinh Viên cần lưu trữ thông tin: Mã sinh viên, họ tên, năm sinh và điểm trung bình. Chương trình chính cần xây dựng các chức năng sau:
a.	Nhập danh sách n sinh viên 
b.	Xuất danh sách sinh viên ra màn hình
c.	Thêm vào chương trình chức năng xếp loại Sinh viên theo ĐTB đã nhập ở câu trên. Biết xếp loại như sau:
0<= ĐTB<5: Yếu ; 
5 <= ĐTB <6.5: trung bình;
6.5 <= ĐTB <8: khá; 
8 <= ĐTB <9: giỏi;
9 <= ĐTB <10: xuất sắc;
*/
#include<iostream>
using namespace std;
#define MAX 100

struct SinhVien{
	int nMaSV;
	char cName[30];
	char cNamsinh[50];
	float fDTB;
};
void nhapSV(SinhVien &sv)
{
	cout <<" Please input code of student:";
	cin>>sv.nMaSV;
	cout <<" Please input name of student:";
	cin>>sv.cName;
	cout <<" Please input DOB of student:";
	cin>>sv.cNamsinh;
	cout <<" Please input medium score of student:";
	cin>>sv.fDTB;
}
void nhapmangSV(SinhVien danhsach[], int nNum)
{
	do{
		cout <<"please input the number of student:";
		cin>>nNum;
	}while(nNum<1||nNum>100);
	for(int i =0; i<nNum; i++)
	{
		nhapSV(danhsach[i]);
	}
}
void xuatSV(SinhVien &sv)
{
	cout<<"masosv:"<<sv.nMaSV<<endl;
	cout<<"name:"<<sv.cName<<endl;
	cout<<"namsinh:"<<sv.cNamsinh<<endl;
	cout<<"dtb:"<<sv.fDTB<<endl;
}
void xuatmangSV(SinhVien danhsach[], int nNum)
{
	for(int i =0; i<nNum; i++)
	{
		xuatSV(danhsach[i]);
	}
}
void main()
{
	SinhVien sv;
	int nNum;
	SinhVien danhsach[100];
	nhapmangSV(danhsach, nNum);
	xuatmangSV(danhsach, nNum);
}
