#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;
class HangHoa{
	public:
	char TenH[30];
	double DonGia;
	int SL;//So Luong
	public:
		void NHAP(){
			cout<<"\nNhap Ten Hang:  ";fflush(stdin);gets(TenH);
			cout<<"\nNhap Don Gia:  ";cin>>DonGia;
			cout<<"\Nhap So Luong Hang: "; cin>>SL;
		}
		void XUAT(){
			cout<<TenH<<"   "<<DonGia<<"    "<<SL;
		}
		float ThanhTien(){
			int T ;
			T =(double)DonGia*SL;
			cout<<T;
		}
};
class Phieu{
	public:
		char MP[20];//Ma Phieu
		char TenKH[30];//Ten Khanh Hang
		int ngay,thang,nam;
		int n;
		HangHoa h[100];
		public:
			void NHAP(){
				cout<<"\nNhap Ma Phieu:  ";fflush(stdin);gets(MP);
				cout<<"\nNhap Ten Khanh Hang:  ";fflush(stdin);gets(TenKH);
				cout<<"\nNgay Lap:  ";
				cout<<"\nNgay: ";cin>>ngay;
				cout<<"\nThang: ";cin>>thang;
				cout<<"\nNam: ";cin>>nam;
				cout<<"\nNhap N so luong hang hoa muon nhap  ";cin>>n;
				for(int i=0;i<n;i++)
				{
					h[i].NHAP();
				}
			}
			void XUAT(){
				cout<<"Ma Phieu : "<<MP<<"            "<<"Khanh Hang : "<<TenKH<<endl;
				cout<<"Ngay Lap : "<<ngay<<"/"<<thang<<"/"<<nam;
				for(int i=0;i<n;i++)
				{
					h[i].XUAT();
				}
			}
			float Tong(){
				double tong=0;
				for(int i=0;i<n;i++)
				{
					cout<<"Thanh Tien : "<<tong+=T;
				}
			}
};

int main(){
	Phieu p;
	p.NHAP();
	p.XUAT();
	return 0;
}
