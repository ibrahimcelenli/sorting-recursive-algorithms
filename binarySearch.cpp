#include<iostream>
#include<conio.h>

int bsearch(int list[],int n,int element,int bas,int son);

using namespace std;
int i;


int main()
{
	



	int list[20];
	int n,element,bas,son;
	
	cout<<"toplam eleman sayisini giriniz :";
	cin>>n;
	
	for(int i=0;i<n;i++)
{
	    
	    cout<<i<<". elemaný giriniz = ";
	    cin>>list[i];
}
	    
	cout<<"aramak istediginiz elemani giriniz :";
	cin>>element;
	
	 bas = 0;
	 son = n-1;
	
		 bsearch(list,n,element,bas,son);
	
	getch();
	return 0;




}


int bsearch(int list[],int n,int element,int bas,int son){
	
	
	while(bas <= son)
	{
		
		
		i = (bas+son)/2;
		
		if(list[i]==element)
	{	
		cout<<i+1<<endl;
		
		 return 1; }
		
		else if (list[i]>element)
		
		return bsearch(list,n,element,bas,i-1);
		
		else
		
		return bsearch(list,n,element,i+1,son);
	}
	
	return -1;
}

