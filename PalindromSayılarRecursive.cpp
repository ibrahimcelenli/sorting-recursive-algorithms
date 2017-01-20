#include<iostream>

// palindrom = https://tr.wikipedia.org/wiki/Palindrom

void polindromBul(int,int,int,int);

using namespace std;

int main ()
{
	int N,tersi=0,temp;
	cout<<"Hangi sayiya kadar polinom sayilari gormek istiyorsunuz ? \n";
	cin>>N;
	polindromBul(1,N,tersi,temp);
}

void polindromBul(int sayi,int N,int tersi,int temp)
{
	temp=sayi;
	if(sayi <= N)
	{
	   while(sayi!=0)
       {
        	tersi = tersi * 10 + (sayi % 10);
            sayi = sayi/ 10;
       }
       if(temp == tersi)
       {
       		cout<<tersi<<endl;
	   }
       return polindromBul(temp+1,N,0,0);
    }
}
