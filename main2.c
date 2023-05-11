#include <stdio.h>
#include <stdlib.h>

int arama(int dizi[], int diziBoyutu, int arananEleman)
{
    int i;
    for (i = 0; i < diziBoyutu; i++)
        if (dizi[i] == arananEleman)
            return i;
    return -1;
}

int main(int argc, char *argv[]) {
	
	int diziBoyutu;
	int i;
	int arananEleman;
	
       printf("Dizi boyutunu girin: ");
       scanf("%d", &diziBoyutu);
	
	int dizi[diziBoyutu];
	
	for(i = 0; i <diziBoyutu; i++)
    {
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    
    printf("Dizide aramak istediginiz elemani giriniz: ");
    scanf("%d",&arananEleman);
    
    int sonuc = arama(dizi,diziBoyutu,arananEleman);
    
    if(sonuc == -1)
         printf("Aradiginiz eleman dizide bulunmamaktadir.");
    else
         printf("Aradiginiz eleman dizinizin %d. indexindedir.", sonuc);
			
	return 0;
}
