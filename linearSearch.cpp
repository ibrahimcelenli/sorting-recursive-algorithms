#include<iostream>
#include<conio.h>

using namespace std;
void search(int list[],int n,int element);

int main(){
	
	int list[20];
	
	int n,element;
	cout<<"toplam eleman sayisini giriniz.";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		
		
		cout<<i<<".elemani giriniz = ";
		cin>> list[i];
		
	}
	
	cout<<"Aramak istediginiz lemani giriniz :";
	cin>> element;
	
	search(list,n,element);
	
	getch ();
	return 0;
}

void search(int list[], int n,int element){
	
	int i,flag = 0;
	
	for(i=0;i<n;i++)
	
	 if(list[i]==element)
{	 
	 cout<<"aranan kan"<<i<<". indiste bulundu"<<endl;
	 break;
	
}  else
    
      flag++;
      
    if(flag==n)
    
    cout<<"maalesef aranan kan bulunamadi."<<endl;
}


