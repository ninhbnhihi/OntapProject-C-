#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>

using namespace std;

struct ngaysinh{
	int ngay;
	int thang;
	int nam;
};

struct sinhvien{
	ngaysinh ns;
	char sbd[30];
	char hoten[30];
	char gioitinh[4];
	char hokhau[30];
	float tongdiem;
};

void nhapn(int &n)
{
	do{
		cout<<"nhap so luong sinh vien (3<=n<=35):";
		cin>>n;
	}
	while(n<3 || n>35);
}

void nhap(struct sinhvien sv[],int n)
{
	cout<<"nhap danh sach thi sinh \n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nthi sinh thu "<<i<<"\n";
		cout<<"sbd: ";                      fflush(stdin);                gets(sv[i].sbd);
		cout<<"ho ten: ";                   fflush(stdin);                gets(sv[i].hoten);
		cout<<"ngay sinh: ";  cin>>sv[i].ns.ngay;
		cout<<"thang: ";      cin>>sv[i].ns.thang;
		cout<<"nam: ";        cin>>sv[i].ns.nam;
		cout<<"gioi tinh: ";	            fflush(stdin);             	  gets(sv[i].gioitinh);
		cout<<"ho khau: ";                  fflush(stdin);                gets(sv[i].hokhau);
		cout<<"tong diem: ";  cin>>sv[i].tongdiem;
	}
}

void hienthi(struct sinhvien sv[],int n)
{

	for(int i=0;i<n;i++)
	{
		cout<<"\n\n THI SINH ThU "<<i<<"\n";
		cout<<"sbd:";		puts(sv[i].sbd);
		cout<<"ho ten:";	puts(sv[i].hoten);
		cout<<"ngay sinh: "	<<sv[i].ns.ngay;
		cout<<"\nthang: "		<<sv[i].ns.thang;
		cout<<"\nnam:"		<<sv[i].ns.nam;
		cout<<"\ngioi tinh:";	puts(sv[i].gioitinh);
		cout<<"ho khau:";	puts(sv[i].hokhau);
		cout<<"tong diem:"	<<sv[i].tongdiem;
	}
}
void hienthinu(struct sinhvien sv[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if( strcmp(sv[i].gioitinh,"nu")==0 && sv[i].tongdiem>25)
			dem++;
	}
	if(dem>0)
	{
		cout<<"\nTHI SINH NU CO TONG DIEM >25 la:";
		for(int i=0;i<n;i++)
			{
				if( strcmp(sv[i].gioitinh,"nu")==0 && sv[i].tongdiem>25)
				cout<<sv[i].hoten<<endl;
			}
	}
	else{
		cout<<"\nkhong co thi sinh nu nao >25";
	}
}
void thi_sinh_Trung_tuyen(struct sinhvien sv[],int n,int &diemchuan)
{
	int dem1=0;
	cout<<"\nmoi nhap diem chuan:";cin>>diemchuan;
	for(int i=0;i<n;i++)
	{
		if(sv[i].tongdiem>=diemchuan)
			dem1++;
	}
	cout<<"\nSO LUONG THI SINH TRUNG TUYEN LA:"<<dem1;
	cout<<"\nthi sinh o gia lam ha noi la:";
		for(int i=0;i<n;i++)
		{
			if(sv[i].tongdiem>=diemchuan&& strcmp(sv[i].hokhau,"gia lam ha noi")==0)
			cout<<sv[i].hoten<<endl;
		}
}
void xoa(struct sinhvien sv[],int &n)
{
	for(int i=0;i<n;i++)
		{
		    if( strcmp (sv[i].sbd,"DCNA100125")==0)
			{
                for(int j=i;j<n-1;j++)
                    sv[j]=sv[j+1];
                    	n--;
		    }
		
		
		}


}
int main(){
	struct sinhvien sv[40];
	int n,diemchuan;
	nhapn(n);
	nhap(sv,n);
	cout<<"\n danh sach thi sinh vua nhap la:";
	hienthi(sv,n);
	hienthinu(sv,n);
	thi_sinh_Trung_tuyen(sv,n,diemchuan);
	xoa(sv,n);
	cout<<"\tDANH SACH SAU KHI XOA"<<endl;
	hienthi(sv,n);
	return 0;
}
