#include<iostream>
#include<stdlib.h>
#include<conio.h>

void selectionSort(int arr[], int n);


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

    selectionSort(Ar,uzunluk);
   
    	

	
	
	getch ();
	return 0;
	
}

void selectionSort(int arr[], int n)
{
        int min;
   
     for(int i=0;i<n-1;i++)
 {      
           min = i;
           
      for(int j=i+1; j<n;j++)
      
      {
       if(arr[min]>arr[j])
     
            min = j;
      }
            
           swap(arr[i],arr[min]);
           
   }
   
   
   	for(int k=0;k<n;k++)
	
	cout<<arr[k]<<endl;
   
   }



