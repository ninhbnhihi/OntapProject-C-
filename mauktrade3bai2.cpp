#include<stdio.h>
#include<string.h>
#include"iostream"
using namespace std;
class Xe{
	public:
		char Mau[15];//Mau Son
		char BS[20];//Bien So Xe VD29B-D9 6789
		char NoiDK[20];
		int NamDK;
		public:
			Xe(){
				strcpy(Mau,"Do");
				strcpy(BS,"29B-D9 6789");
				strcpy(NoiDK,"HaNoi");
				NamDK=2017;
			}
			Xe(char *a,char *b,char *c,int d)
			{
				strcpy(Mau,a);
				strpcy(BS,b);
				strcpy(NoiDK,c);
				NamDK=d;
			}
			~Xe()
			{
			}
			void NHAP(){
				cout<<"\nNhap Mau Xe  ";fflush(stdin);gets(Mau);
				cout<<"\nNhap Bien So Xe  "; fflush(stdin);gets(BS);
				cout<<"\nNhap Noi Dang Ky Xe ";fflush(stdin);gets(NoiDK);
				cout<<"\nNhap Nam Dang Ky xe ";cin>>NamDk;
			}
			void XUAT(){
				cout<<Mau<<"\t"<<BS<<"\t"<<NoiDk<<"\t"<<NamDK<<endl;
			}
};
class ChuSoHuu:public Xe{
	public:
		char Ten[30];//Ten CHu So huu Xe
		int CMT;//Chung Minh Thu
	public:
		ChuSoHuu():Xe(){
			strcpy(Ten,"Ninh");
			CMT=0789;
		}
		ChuSoHuu(char *d, int u,char *a,char *b,char *c,int d):Xe(){
			strcpy(Ten,d);
			CMT=u;
		}
		~ChuSoHuu(){
		}
		void NHAP(){
			cout<<"\nNhap Ten Chu So Huu ";fflush(stdin);gets(Ten);
			cout<<"\nNhap So Chung Minh Thu ";cin>>CMT;
			Xe::NHAP();
		}
		void XUAT(){
			cout<<Ten<<"\t"<<CMT<<endl;
			Xe::XUAT();
		}
};
int main(){
	ChuSoHuu cs,n,l("Ninh",0373,"Do",123,"BN",2015);
	n.XUAT();
	l.XUAT();
	int k;
	cout<<"\nNhap Vao Danh Sach K Chu So Huu  "; cin>>k;
	for(int i=0;i<k;i++)
	{
		cs[i].NHAP();
	}
	cout<<"\n------Danh Sach Day Du cac Chu So Huu-----"<<endl;
	for(int i=0;i<k;i++)
	{
		cs[i].XUAT();
	}
	cout<<"\n---DS CSH Noi Dang Ky o Ha Noi  "<<endl;
	for(int i=0;i<n;i++)
	{
		if(strcmp(cs[i].NoiDK,"HaNoi")==0)
		{
			cs[i].XUAT();
		}
	}
}

