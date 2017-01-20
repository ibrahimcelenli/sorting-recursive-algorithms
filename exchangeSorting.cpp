#include<iostream>
#include<stdlib.h>
#include<conio.h>

void Exchange_sort(int dizi[],int uzunluk);

using namespace std;


int main()

{


   	
	int uzunluk;
	
	cout<<"Dizinin toplam eleman sayisini giriniz.";
	cin>>uzunluk;
	
	int dizi[uzunluk];
	
	for(int i=0;i<uzunluk;i++)
{
	cout<<i<<". eleman = ";
	cin>>dizi[i];
}

    Exchange_sort(dizi,uzunluk);
   
    	




	
	
	getch ();
	return 0;
	
}


void Exchange_sort(int dizi[],int uzunluk)
{
	
	int i,j,k;
	
	for(i=0;i<uzunluk-1;i++)
	{
	  for(j=i+1;j<uzunluk;j++)
	  {
	  
	  if(dizi[i]>dizi[j])

      swap(dizi[i],dizi[j]);
      
      }

    }
	
	for(k=0;k<uzunluk;k++)
	
	cout<<dizi[k]<<endl;
	
}


