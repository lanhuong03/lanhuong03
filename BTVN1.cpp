#include<iostream>
using namespace std;
void nhap (int a[], int &n)
{
    do
    {
        cout<<"\nNhap so phan tu: ";
        cin>>n;
        if(n <= 0 )
        {
            cout<<"\nSo phan tu khong hop le";
        }
    }while(n <= 0 );
    for(int i = 0; i < n; i++)
    {
        cout<<"\nNhap a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<endl;
}
void xuat(int a[], int n)
{
  cout<<"Cac phan tu trong mang là:";
    for(int i = 0; i < n; i++)
    {
        cout<<"\n"<<a[i];
    }
}
void sxtd(int a[], int n)
{
   int tg, i, j;
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            tg = a[i];
            a[i] = a[j];
            a[j] = tg;
         }
      }
   }
   cout<<"\nCac phan tu sau khi duoc sap xep tang dan:";
   for (i = 0; i < n; i++)
      cout<<"\n"<<a[i];
} 
void sxtdchan(int a[], int n)
{
   int tg, i, j;
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            tg = a[i];
            a[i] = a[j];
            a[j] = tg;
         }
      }
   }
   cout<<"\nCac phan tu chan sau khi duoc sap xep tang dan:";
   for (i = 0; i < n; i++)
      if(a[i] %2 == 0)
	  { 
	  	cout<<"\n"<<a[i];
	  }
}
void sxgdle(int a[], int n)
{
   int tg, i, j;
   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] < a[j])
         {
            tg = a[i];
            a[i] = a[j];
            a[j] = tg;
         }
      }
   }
   cout<<"\nCac phan tu le sau khi duoc sap xep giam dan:";
   for (i = 0; i < n; i++)
      if(a[i] %2 != 0)
	  { 
	  	cout<<"\n"<<a[i];
	  }
} 
void xoasnmoi(int a[],int n,int b)
{   
    cout<<"\nNhap so nguyen b:";
    cin>>b;
	for (int i = 0; i < n; i++) 
	{
	if( b == a[i])
    {
           a[i]=a[i+1];
           n--;
           i--;
        }
        } 
	xuat(a,n);	  
}        
int main()
{
    int n,b;
    int a[100];
    nhap(a, n);
    xuat(a, n);
    sxtd(a,n);
    sxtdchan(a,n);
    sxgdle(a,n);
    xoasnmoi(a,n,b);
}
