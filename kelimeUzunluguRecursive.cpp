
#include<stdio.h>
#include<iostream>
int uzunluk(char kelime[],int sayac);
using namespace std;
int main()
{
	int sayac = 0;
	char str[100];
	cout<<"Kelime Giriniz :";
	cin>>str;
	cout<<"Kelimenin Uzunlugu : "<<uzunluk(str,sayac);
    return 0;
}
int uzunluk(char kelime[],int sayac)
{
	sayac++;
	if(kelime[sayac]=='\0')
	{
		return sayac;
	}
	else
	{
		return uzunluk(kelime,sayac);
	}
}

