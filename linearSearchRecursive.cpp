
#include<iostream>
#include <time.h>	//srand metodunun �al��abilmesi i�in gereklidir
#include <stdlib.h> //srand metodunun �al��abilmesi i�in gereklidir
int dogrusalArama(int list[], int elemansayisi, int aranansayi);
using namespace std;
int main()
{
	int secim,aranansayi,pozisyon;
	int dizi[10];
	
	printf("10 elemanli (1-10) arasinda rastgele sayi uretilmistir.\n");
	 
	srand (time(NULL));
	for (int i=0;i<10;i++)
	{
	    dizi[i] = rand() % 10 + 1;     //1-10 aras� say� �ret
	    cout<<i+1<<".Sayi : "<<dizi[i]<<endl;
	}
	while(true)
	{
		cout<<endl<<"Aramak istediginiz sayiyi giriniz :";
	 	cin>>aranansayi;
	 	pozisyon = dogrusalArama(dizi,0,aranansayi);
	 	if(pozisyon != -1)
	 	{
	 		cout<<pozisyon+1<<".Siradadir";
		}
		else
		{
			cout<<"Aradiginiz sayi dizide bulunmamaktadir.";
		}
	}
    return 0;
}

int dogrusalArama(int list[], int index, int aranansayi)
{
	if (index >= 10)
	{
		return -1;
	}
	else if(list[index] == aranansayi)
	{
		return index;
	}	
	else
	{
		return dogrusalArama(list, index + 1, aranansayi);
	}
	
	/* E�er aranan eleman birden fazla bulunuyorsa, taramaya sondan ba�lad��� i�in 
		dizinin sonundaki eleman�n s�ras�n� d�nd�recektir
	
	//index parametresi elemansayisi olarak de�i�tirilecek ve fonksiyon 0 de�ilde 10 de�eri ile �a��r�lacakt�r
	
	if (elemansayisi < 0)
	{
		return -1;
	}
	else if(list[elemansayisi] == aranansayi)
	{
		return elemansayisi;
	}	
	else
	{
		return dogrusalArama(list, elemansayisi - 1, aranansayi);
	}
	*/
}
