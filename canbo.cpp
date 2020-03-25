#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>


struct ngaysinh{
	int ngay;
	int thang;
	int nam;
};
struct canbo{
	char hoten[30];
	char sbd[30];
	ngaysinh ns;
	char gioitinh[4];
	char chucvu[30];
	float heso;
};

void nhapn(int &n)
{
	do
	{
			cout<<"nhap so luong can bo (3<=n<=50): ";
			cin>>n;
	}
	while(n<3 || n>50);
}
void nhap(struct canbo cb[],int n)
{
	
	cout<<"\nthong tin can nhap cua can bo la:";
	for(int i=0;i<n;i++)
	{
		cout<<"\nCan bo thu "<<i<<endl;
		cout<<"ma can bo: ";
		fflush(stdin);
		gets(cb[i].sbd);
		cout<<"ho va ten: ";
		fflush(stdin);
		gets(cb[i].hoten);
		cout<<"chuc vu: ";
		fflush(stdin);
		gets(cb[i].chucvu);
		cout<<"ngay sinh\n";
		cout<<"ngay "; cin>>cb[i].ns.ngay;
		cout<<"thang "; cin>>cb[i].ns.thang;
		cout<<"nam "; cin>>cb[i].ns.nam;
		cout<<"gioi tinh: ";
		fflush(stdin);
		gets(cb[i].gioitinh);
		cout<<"he so luong:";
		cin>>cb[i].heso;
	}
}

void hienthi(struct canbo cb[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n\nCan bo thu"<<i<<endl;
		cout<<"ma can bo: ";	
		puts(cb[i].sbd);
		cout<<"ho va ten: ";
		puts(cb[i].hoten);
		cout<<"chuc vu: ";		
		puts(cb[i].chucvu);
		cout<<"ngay sinh\n";
		cout<<"ngay " <<cb[i].ns.ngay;
		cout<<"thang " <<cb[i].ns.thang;
		cout<<"nam " <<cb[i].ns.nam;
		cout<<"\ngioi tinh: ";
		puts(cb[i].gioitinh);
		cout<<"he so luong: "<<cb[i].heso;
	}
}

void hoanvi(struct canbo &x,struct canbo &y)
{
	struct canbo tg;
	tg=x;
	x=y;
	y=tg;
}

void sapxep(struct canbo cb[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		if(cb[i].ns.nam<cb[j].ns.nam)
		{
			hoanvi(cb[i],cb[j]);
		}
	}
}
void tim(struct canbo cb[],int n)
{
	char ten[30];
	int dem=0;
	cout<<"\n\nmoi nhap ten can tim: ";
	fflush(stdin);
	gets(ten);
	for(int i=0;i<n;i++)
	{
		if(strcmp(cb[i].hoten,ten)==0)
		{
			dem++;
		}
	}
	if(dem>0)
		cout<<"co ten nguoi can tim ";
	else
		cout<<"khong co ten nguoi can tim ";
}

void tongluong(struct canbo cb[],int &n)
{
    long tong;
	for(int i=0;i<n;i++)
	{
		tong=(float)cb[i].heso*1150000;
			cout<<"\ncan bo thu"<<i<<" co luong la:"<<tong;
	}


}
int main()
{
	struct canbo cb[40];
	int n;
	nhapn(n);
	nhap(cb,n);
	cout<<"\n-----danh sach sau khi nhap la-------- ";
	hienthi(cb,n);
	sapxep(cb,n);
	cout<<"\n-----danh sach sau khi sap xep la----- ";
	hienthi(cb,n);
	tim(cb,n);
	cout<<"\n-----danh sach tong luong tat ca can bo la-------";
	tongluong(cb,n);
	hienthi(cb,n);
	return 0;
}


