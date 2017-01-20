#include<iostream>
#include<stdlib.h>
#include<conio.h>

void insertionSort(int arr[], int n);


using namespace std;

int main()

{



   	
	int uzunluk;
	
	cout<<"Dizinin toplam eleman sayýsýný giriniz.";
	cin>>uzunluk;
	
	int Ar[uzunluk];
	
	for(int i=0;i<uzunluk;i++)
{
	cout<<i<<". eleman = ";
	cin>>Ar[i];
}

    insertionSort(Ar,uzunluk);
   
    	

	
	
	getch ();
	return 0;
	
}

void insertionSort(int arr[], int n)
{

int j,i,k,key;

for(i = 1; i < n; i++)
{

key = arr[i];

j = i - 1;

while(j >= 0 && arr[j] > key)
{ 

arr[j + 1] = arr[j];

j = j - 1;

}

arr[j + 1] = key;

}

	for(k=0;k<n;k++)
	
	cout<<arr[k]<<endl;



}


