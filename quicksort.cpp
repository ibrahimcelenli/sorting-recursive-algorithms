#include<iostream>
#include<stdlib.h>
#include<conio.h>

	int uzunluk;

void quickSort(int Arr[], int lower, int upper);

using namespace std;



int main()
{
	
	cout<<"Dizinin toplam eleman sayýsýný giriniz.";
	cin>>uzunluk;
	
	int Ar[uzunluk];
	
	for(int i=0;i<uzunluk;i++)
{
	cout<<i<<". eleman = ";
	cin>>Ar[i];
}

    quickSort(Ar,0,uzunluk-1);
    
    
    for(int k=0;k<uzunluk;k++)
	
	cout<< Ar[k] <<","; 
  
   


	
	getch ();
	return 0;
	
	
	
}




void quickSort(int Arr[], int lower, int upper)
{


{

int x = Arr[(lower + upper) / 2];

int i = lower; 
int j = upper;

do{

while(Arr[i] < x) i ++;

while(Arr[j] > x) j --;

if (i <= j)

{

swap(Arr[i], Arr[j]);

i ++; j --; 
}
}

while(i <= j);

if (j > lower)

quickSort(Arr, lower, j);

if (i < upper)

quickSort(Arr, i, upper);
}

 

}




   
    
  
 
    





	






