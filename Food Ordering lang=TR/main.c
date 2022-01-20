#include <stdio.h>
#include <stdlib.h>
char isim[25];
char soyisim[14];

int main(int argc, char *argv[]) {

	int anayemek,siparissayisi,sayi,a;
    int icecek[8]={5,8,8,7,4,8,8,0};
	float toplam=0;
    char devam;
   
    int anyemek[7]={18,18,27,35,18,11,10};
    int anayemeksayi=0;
		printf("Lutfen isminizi giriniz:");
		gets(isim);
		printf("Lutfen soyisminizi giriniz:");
		gets(soyisim);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	hosgeldiniz();
    hosgeldiniz2();
   
   printf("======================================\n");
   printf("=Yagiz Pasha Lokantasi'na Hosgeldiniz=\n");
   printf("======================================\n\n\n\n\n");
  
  printf("Yemek  icin siparis sayinizi giriniz : ");
	   scanf("%d",&siparissayisi);




while (sayi<siparissayisi) {

   
	printf("=====================================================\n")   ;
	printf("=Siparis======YemekMenusu======================Fiyat=\n") ;  
	printf("=Numarasi============================================\n");
	printf("==========-------------------------------------------\n");
	   printf("[1]----------Adana Kebap Durum        --->     18 TL   \n") ;
       printf("[2]----------Urfa Kebap Durum         --->     18 TL  \n") ;
       printf("[3]----------Iskender 200gr Et        --->     27 Tl  \n") ;
       printf("[4]----------Iskender 300gr Et        --->     35 TL   \n") ;
       printf("[5]----------Yarim Ekmek Doner        --->     18 TL   \n") ;
       printf("[6]----------Yarim Ekmek Tavuk Doner  --->     11 TL  \n") ;
       printf("[7]----------Iskembe Corba            --->     10 TL \n\n\n") ;
   printf("Istediginiz urun icin siparis numarasi tuslayiniz\n")    ;
   scanf("%d",&anayemeksayi);
   toplam=anyemek[anayemeksayi-1]+toplam;
   sayi++;
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   printf("Tutar=%f \n\n\n\n",toplam);

}

  printf("\n\n\n");
  printf("===============\n");
  printf("===Icecekler===\n");
  printf("===============\n\n\n");  
 
  do {
 
  
  
       printf("[1]-----------Ayran  350 ml         --->    5  TL   \n") ;
       printf("[2]-----------Soguk Cay  333ml      --->    8  TL  \n") ;
       printf("[3]----------Gazoz   333ml         --->    8  Tl  \n") ;
       printf("[4]----------Maden Suyu   333ml    --->    7  TL   \n") ;
       printf("[5]----------Su   0.5L             --->    4  TL   \n") ;
       printf("[6]----------Coca-Cola 333ml       --->    8  TL  \n") ;
       printf("[7]----------Pepsi 333ml           --->    8  TL \n") ;
       printf("[8]----------Icecek yok\n\n");
   
   
   printf("Siparis numarasini giriniz : ");
   scanf("%d",&a);
   a--;
   toplam=toplam+icecek[a]; 
   printf("Toplam = %f \n",toplam);
   printf("Tekrar Icecek Almak Ister misiniz? (e/h)\n");
   scanf("%s",&devam);
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");


}
  while (devam=='e');
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 
  printf("Toplam: %f \n",toplam);
  float indirim=20;
  char ch;
  float indfiyat=0;
  
		if (toplam>=30){	
               
			    printf("Ogrencimisin?(e/h)\n");
                scanf("%s",&ch);  
	     
		 
				if	(ch=='e'||ch=='E')
				{
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			    printf("Ogrenciye toplam tutarin yuzde 20'si indirimli.\n\n");
				printf("Onceki Toplam Tutar= ====%.2f TL==== \n\n",toplam);
				indfiyat=(toplam*indirim)/100 ;
            	toplam=toplam-indfiyat;
            	
				}
                else printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
      }
      else printf("");
           
           
                      
hosgeldiniz();
siparisiletildi();

printf("=====Toplam Ucret = %.2f TL =====\n\n",toplam);

	return 0;

}

		void hosgeldiniz()
	{


		printf("Sayin ");
		printf(isim);
		printf(" ");
		printf(soyisim);
		printf(" ");
		
	}
	
	void hosgeldiniz2()
{
		printf("  hosgeldiniz.\n\n");	
}

void siparisiletildi()
{
	printf("siparisiniz hazirlanmak uzere iletilmistir\n\n");
}
	






