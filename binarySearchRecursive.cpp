
#include<iostream>
#include <time.h>	//srand metodunun çalýþabilmesi için gereklidir
#include <stdlib.h> //srand metodunun çalýþabilmesi için gereklidir
int sirala(int dizi[],int elemansayisi);
 int ikiliArama(int dizi[],int min,int max,int aranansayi);
using namespace std;
int main()
{
	int secim,aranansayi,pozisyon;
	int dizi[10];
	
	printf("10 elemanli (1-10) arasinda rastgele sayi uretilmistir.\n");
	 
  	srand (time(NULL));
	for (int i=0;i<10;i++)
	{
	    dizi[i] = rand() % 10 + 1;     //1-10 arasý sayý üret
	}
	sirala(dizi,10);
	for (int j=0;j<10;j++)
	{
	    cout<<j+1<<".Sayi : "<<dizi[j]<<endl;
	}
	while(true)
	{
		cout<<endl<<"Aramak istediginiz sayiyi giriniz :";
	 	cin>>aranansayi;
	 	pozisyon = ikiliArama(dizi,0,10,aranansayi);
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

int sirala(int dizi[],int elemansayisi)          //siralama islemini yapan alt fonksiyon
    {
    	int g;
        for(int i=0;i<elemansayisi-1;i++)
		{
			for(int j=i+1;j<elemansayisi;j++)
			{
				if(dizi[j]<dizi[i])
				{
					g=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=g;
				}
			}
		}
    }
 int ikiliArama(int dizi[],int min,int max,int aranansayi)
    {
        if(min <= max)
        {
          	int middle = (min + max)/2;
           	if(aranansayi == dizi[middle])
           	{
          		return middle;
			}
			else if(aranansayi < dizi[middle])
			{
				return ikiliArama(dizi,min,middle-1,aranansayi);
			}
			else if(aranansayi > dizi[middle])
			{
				return ikiliArama(dizi,middle+1,max,aranansayi);
			}
		}
		return -1;
    }
 
