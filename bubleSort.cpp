#include<iostream>
#include<stdlib.h>
#include<conio.h>

void bublesort(int [],int );

using namespace std;

int main()

{
	
	int uzunluk;
	
	
	cout<<"dizinin toplam eleman sayisini giriniz : ";
	cin>>uzunluk;
	
	int dizi[uzunluk];
	
	for(int i=0;i<uzunluk;i++)
	{
		cout<<i+1<<".eleman = ";
		cin>>dizi[i];
		
	}
	


  bublesort(dizi,uzunluk);

  getch ();
  return 0;
  
  }
  
  
  void bublesort(int dizi[],int uzunluk)
  {
  	
     int count,j,k;
     
    for(count=0;count<uzunluk-1;count++)
  	
  	for(j=0;j<uzunluk-1-count;j++)
  	
  	{
  		
  		if(dizi[j]>dizi[j+1])
  		
  		swap(dizi[j],dizi[j+1]);
  		
  	}
    
  	
  	for(int j=0;j<uzunluk;j++)
  	
  	   cout<<j+1<<".eleman -> "<<dizi[j]<<endl;
  	
  	
  }
  
  
  

