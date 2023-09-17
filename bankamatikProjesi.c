#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int secim,bakiye=7000,miktar,sifre=6969;
	
	printf("Lutfen sifre giriniz : "); scanf("%d",&sifre);
	

	
	
	
	while(sifre != 6969)
	{
		printf("Lutfen sifrenizi giriniz : "); scanf("%d",&sifre);
	}
	if(sifre != 6969)
	{
		printf("Sifrenizi yanlis girdiniz.");
	}
	
	do
	{
		printf("*****Bankamatik Uygulamasi*****\n");
		printf("1.Bakiye Kontrol\n");
		printf("2.Nakit Cekme\n ");
		printf("3.Nakit yatirma\n");
		printf("4.Cikis\n");
		
		
		printf("Lutfen secim yapiniz : ");
		scanf("%d",&secim);
		
			switch(secim)
	{
		case 1: printf("Bakiyeniz : %d\n\n",bakiye); break;
		
		case 2 : while(1)
		{
			printf("Cekmek istediginiz miktari giriniz : "); scanf("%d",&miktar);
		
		if(miktar>bakiye){
			printf("Hesapta bu kadar para yok.");
			
			
		}
		else{
			bakiye = bakiye-miktar; printf("Yeni bakiyeniz : %d\n",bakiye); break;
			return 0;
			
		}

		}
		break;
		
		
		
		
		
			
		case 3 : printf("Yatirmak istediginiz miktari giriniz :"); scanf("%d",&miktar); bakiye = bakiye+miktar; printf("Yeni bakiyeniz : %d\n",bakiye); break;
		
		case 4 : printf("Cikis yaptiniz..."); break;	
		
		default: printf("Lutfen gecerli bir sayi giriniz...\n");	
		
	}
	} 
	while(secim!=4);
	