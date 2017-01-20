#include<iostream>

/*

Hamming sayi = https://tr.wikipedia.org/wiki/Hamming_say%C4%B1lar%C4%B1


*/

using namespace std;
int hammingSayilariBul(int,int);
int main()
{
	int N,temp;
	while(true)
	{
		cout<<"Sorgulamak istediginiz degeri giriniz :";
		cin>>N;
		temp = N;
		hammingSayilariBul(N,temp);
	}
}

int hammingSayilariBul(int N,int temp)
{
	if(N==1)
	{
	cout<<temp<<" Hamming Sayidir"<<endl;
	}
	else if(N%2==0)
	{
	return hammingSayilariBul(N/2,temp);
	}
	else if(N%3==0)
	{
	return hammingSayilariBul(N/3,temp);
	}
	else if(N%5==0)
	{
	return hammingSayilariBul(N/5,temp);
	}
	else
	cout<<temp<<" Hamming Sayi degildir"<<endl;

}
