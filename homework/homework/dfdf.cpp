/* Name : Nguyen Thi Ha Phuong
Bai tap: Viết chương trình quản lý Sinh viên. Biết mỗi Sinh Viên cần lưu trữ thông tin: Mã sinh viên, họ tên, năm sinh và điểm trung bình. Chương trình chính cần xây dựng các chức năng sau:
a.	Nhập danh sách n sinh viên 
b.	Xuất danh sách sinh viên ra màn hình
c.	Thêm vào chương trình chức năng xếp loại Sinh viên theo ĐTB đã nhập ở câu trên. Biết xếp loại như sau:
0<= ĐTB<5: Yếu ; 
5 <= ĐTB <6.5: trung bình;
6.5 <= ĐTB <8: khá; 
8 <= ĐTB <9: giỏi;
9 <= ĐTB <10: xuất sắc;

d.	Ghi thông tin sinh viên vào file DSSV.txt
e.	Đọc từ file DSSV.txt, lọc danh sách những sinh viên có cùng họ “Nguyen”, ghi thông tin sinh viên tìm được ra file mới có tên KetQua.txt.
(Sử dụng kiểu dữ liệu string, struct, file và pointer)
f.	Thêm vào chương trình chức năng xử lý chuỗi Họ Tên như sau:
•	Xóa bỏ các khoảng trắng đầu và cuối chuỗi
•	Xóa bỏ khoảng trắng thừa trong chuỗi
•	Chuyển chuỗi thành viết hoa đầu từ
g.	Thêm vào chương trình  chức năng sắp xếp danh sách sinh viên theo thứ tự tăng dần của họ tên rồi lưu kết quả sau khi sắp xếp vào file DSSV_Sort. Với danh sách sinh viên được đọc từ file DSSV.txt.
Crated date: 17/3/2018 


Xin chao, vui long chon chuc nang:
1. Nhap SV.
2. Xuat thong tin SV.
3. Thoat.

Chon: _

Ban dang nhap sinh vien.
Vui long nhap mssv:
Vui long nhap HT
*/
#include<iostream>
using namespace std;
#define MAX 100

int svCount = 0;

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
	for(int i =0; i < nNum; i++)
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

// Pass by reference  truyền tham chiếu.
// Pass by value = truyền tham trị
void increaseNum(int a)
{
	a = 30;
	cout <<"a = " <<a;
};

void increaseNumByRef(int *a)
{
	*a = 30;
};

void nhapSoLuongSinhVien()
{
	do {
		cout <<"please input the number of student:";
		cin>>svCount;
	} while(svCount < 1 || svCount > MAX);
}

void main()
{
	cout <<"So luong SV: " <<svCount <<endl;;
	nhapSoLuongSinhVien();
	cout <<"So luong SV: " <<svCount <<endl;

	SinhVien danhsach[MAX];
	nhapmangSV(danhsach, svCount);

	xuatmangSV(danhsach, svCount);
	system("pause");

	

}
