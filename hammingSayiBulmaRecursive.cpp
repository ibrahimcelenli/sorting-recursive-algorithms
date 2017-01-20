#include<iostream>

/*

Hamming sayi = https://tr.wikipedia.org/wiki/Hamming_say%C4%B1lar%C4%B1


*/

using namespace std;
int hammingSayilariBul(int,int,int);
int main()
{
	int N;
	cout<<"N. sayiya kadar olan hamming sayilarini görmek icin N degerini giriniz :";
	cin>>N;
	hammingSayilariBul(1,N,1);
}

int hammingSayilariBul(int sayi,int N,int temp)
{
	if(sayi==N)
	{
		return -1;
	}
	if(sayi==1)
	{
	cout<<temp<<endl;
	}
	if(sayi%2==0)
	{
	return hammingSayilariBul(sayi/2,N,temp);
	}
	if(sayi%3==0)
	{
	return hammingSayilariBul(sayi/3,N,temp);
	}
	if(sayi%5==0)
	{
	return hammingSayilariBul(sayi/5,N,temp);
	}
	return hammingSayilariBul (temp+1,N,temp+1);

}
