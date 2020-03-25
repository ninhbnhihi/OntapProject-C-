#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class DATE{
	int D;
	int M;
	int Y;
	public:
		friend class HANG;
};

class HANG{
	char Mahang[50];
	char Tenhang[50];
	DATE Ngaysx;
	public:
		void NHAP()
		{
			cout<<"\nmoi nhap ma hang: "; fflush(stdin); gets(Mahang);
			cout<<"\nmoi nhap ten hang: "; fflush(stdin); gets(Tenhang);
			cout<<"\nmoi nhap ngay: "; cin>>Ngaysx.D;
			cout<<"\nmoi nhap thang: "; cin>>Ngaysx.M;
			cout<<"\nmoi nhap nam: "; cin>>Ngaysx.Y;
		}
		void XUAT(){
			cout<<Mahang<<"\t"<<Tenhang<<"\t"<<Ngaysx.D<<"\t"<<Ngaysx.M<<"\t"<<Ngaysx.Y<<endl;
		}
};
int main(){
	HANG h[100];
	int n;
	for(int i=0;i<n;i++)
	{
		h[i].NHAP();
	}
	for(int i=0;i<n;i++)
	{
		if(h.Ngaysx.Y==2017)
		{
			h[i].XUAT();
		}
		else	cout<<"khong co mat hang nao dc ban trong nam 2017 ";
	}
}
