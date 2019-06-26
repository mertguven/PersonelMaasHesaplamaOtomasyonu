#include <stdio.h>
#include <stdlib.h>

char *strcpy(char *dest, const char *source);
int main()
{
    int calisan[100];
    char devam_mi;
    float toplam_net=0,toplam_gelir=0;
    float aylik_net,en_yuksek_aylik_net=0,en_yuksek_aylik_net2=0;
    float gelir_vergisi=0,en_yuksek_gelir_vergisi=0,en_yuksek_gelir_vergisi2=0;
    long long int tc;
    long long int en_buyuk_tc=0,en_buyuk_tc2=0;

    int kullanici=0;
    char calisan1[100];
    char ad_soyad[50];
    char en_buyuk_ad_soyad[50],en_buyuk_ad_soyad2[50];
    float toplam_brut2=0;
    int ikibintl_alti=0;
    int evli_olan=0,evli_olmayan=0;
    int es_calisan=0,es_calismayan=0;
    int g_v_o_c_s_15=0,g_v_o_c_s_20=0,g_v_o_c_s_27=0,g_v_o_c_s_35=0;
    int b_y_c_s_o=0,cocugu_olan=0,b_y_c_s_3_f_o=0,engelli_calisan=0;
    float en_yuksek_brut=0,en_yuksek_toplam_brut=0,en_yuksek_toplam_brut2=0;

    do
    {

        float toplam_brut=0;
        int engelli_vergi_indirimi=0;
        int es_icin_aile_yardimi=0,cocuk_icin_aile_yardimi=0;
        float aylik_brut=0;
        int banknot_sayisi_200=0,banknot_sayisi_100=0,banknot_sayisi_50=0,banknot_sayisi_20=0,banknot_sayisi_10=0,banknot_sayisi_5=0,banknot_sayisi_1=0,banknot_sayisi_050=0,banknot_sayisi_025=0,banknot_sayisi_010=0,banknot_sayisi_005=0,banknot_sayisi_001=0;

        printf("  TC KIMLIK NUMARASI:");
        scanf("%lld",&tc);
        fflush(stdin);
        printf("  AD VE SOYAD:");
        gets(ad_soyad);
        printf("  AYLIK BRUT UCRETI (TL):");
        scanf("%f",&aylik_brut);
        if (aylik_brut<1777.50)
        {
            aylik_brut = 1777.50;
        }
        printf("  MEDENI DURUMU (e/E/b/B):");
        scanf("%s",&calisan1[0]);
        if(calisan1[0] == 'b' || calisan1[0] == 'B')
        {
            evli_olmayan++;
        }
        if (calisan1[0] == 'e' || calisan1[0] == 'E')
        {
            evli_olan++;
            printf("  ES CALISIYOR MU (e/E/h/H):");
            scanf("%s",&calisan1[1]);
            if(calisan1[1] == 'e' || calisan1[1] == 'E')
            {
                es_calisan++;
            }
            if(calisan1[1] == 'h' || calisan1[1] == 'H')
            {
                es_calismayan++;
            }
            while(calisan1[1] != 'e' && calisan1[1] != 'E' && calisan1[1] != 'h' && calisan1[1] != 'H')
            {
                printf("  !!!FARKLI BIR HARF GIRDINIZ!!!\n");
                printf("  ES CALISIYOR MU (e/E/h/H):");
                scanf("%s",&calisan1[1]);
            }
        }
        while(calisan1[0] != 'e' && calisan1[0] != 'E' && calisan1[0] != 'b' && calisan1[0] != 'B')
        {
            printf("  !!!FARKLI BIR HARF GIRDINIZ!!!\n");
            printf("  MEDENI DURUMU (e/E/b/B):");
            scanf("%s",&calisan1[0]);
        }
        printf("  BAKMAKLA YUKUMLU COCUK SAYISI:");
        scanf("%d",&calisan[1]);
        if(calisan[1] > 3)
        {
            b_y_c_s_3_f_o++;
        }
        if(calisan[1] != 0)
        {
            cocugu_olan++;
            b_y_c_s_o += calisan[1];
        }
        calisan[2] = 0;
        calisan[3] = 0;
        if (calisan[1] > 0)
        {
            printf("  YASI 6'DAN BUYUK OLAN COCUKLARIN SAYISI:");
            scanf("%d",&calisan[2]);
            printf("  YASI 6'DAN KUCUK OLAN COCUKLARIN SAYISI:");
            scanf("%d",&calisan[3]);
        }

        while (calisan[1] != calisan[2] + calisan[3])
        {
            printf("  !!!FAZLA VEYA EKSIK COCUK SAYISI GIRDINIZ!!!\n");
            printf("  YASI 6'DAN BUYUK OLAN COCUKLARIN SAYISI:");
            scanf("%d",&calisan[2]);
            printf("  YASI 6'DAN KUCUK OLAN COCUKLARIN SAYISI:");
            scanf("%d",&calisan[3]);
        }
        printf("  Engel durumu (v/V/y/Y):");
        scanf("%s",&calisan1[2]);
        while (calisan1[2] != 'v' && calisan1[2] != 'V' && calisan1[2] != 'y' && calisan1[2] != 'Y')
        {
            printf("  !!!FARKLI BIR HARF GIRDINIZ!!!\n");
            printf("  Engel durumu (v/V/y/Y):");
            scanf("%s",&calisan1[2]);
        }
        if(calisan1[2] == 'v' || calisan1[2] == 'V')
        {
            engelli_calisan++;
            printf("  Engellilik orani:");
            scanf("%d",&calisan[4]);
            while (calisan[4]<0 || calisan[4]>100)
            {
                printf("  !!!YANLIS ORAN GIRDINIZ!!!\n");
                printf("  Engellilik orani:");
                scanf("%d",&calisan[4]);
            }
        }

        printf("\n************************************************************************************************************************\n\n");
        printf("\t\t+TC KIMLIK NUMARASI: \t\t\t%lld\n",tc);
        printf("\t\t+AD SOYAD: \t\t\t\t%s\n",ad_soyad);
        printf("\t\t+AYLIK BRUT UCRETI (TL): \t\t%.2fTL\n",aylik_brut);
        if(calisan1[1] == 'h' || calisan1[1] == 'H')
            {
                es_icin_aile_yardimi = es_icin_aile_yardimi + 220;
            }
        else {es_icin_aile_yardimi = es_icin_aile_yardimi + 0;}
        if (calisan[1] > 0)
        {
            cocuk_icin_aile_yardimi = cocuk_icin_aile_yardimi + (calisan[2] * 45);
            cocuk_icin_aile_yardimi = cocuk_icin_aile_yardimi + (calisan[3] * 25);
            printf("\t\t+COCUK ICIN AILE YARDIMI ODENEGI (TL):  %dTL\n",cocuk_icin_aile_yardimi);
        }
        else
        {
            printf("\t\t+COCUK ICIN AILE YARDIMI ODENEGI (TL):  0TL\n");
        }
        toplam_brut = toplam_brut + aylik_brut + es_icin_aile_yardimi + cocuk_icin_aile_yardimi;
        printf("\t\t+AYLIK TOPLAM BRUT UCRETI (TL): \t%.2fTL\n",toplam_brut);
        toplam_brut2 += toplam_brut;

        //ENGELLI VERGI INDIRIMI KISMI...
        if(calisan[4]>=0 && calisan[4]<40)
        {
            engelli_vergi_indirimi = 0;
        }
        if(calisan[4]>=80)
        {
            engelli_vergi_indirimi = 900;
        }
        if(calisan[4]>=60 && calisan[4]<80)
        {
            engelli_vergi_indirimi = 470;
        }
        if(calisan[4]>=40 && calisan[4]<60)
        {
            engelli_vergi_indirimi = 210;
        }
        switch(calisan1[2])
        {
            case 'y' : engelli_vergi_indirimi = 0;
            case 'Y' : engelli_vergi_indirimi = 0;
        }
        toplam_brut = toplam_brut - engelli_vergi_indirimi;
        //GELIR VERGISI KESITISI KISMI...
        if(toplam_brut<2000)
        {
            g_v_o_c_s_15++;
            gelir_vergisi = (toplam_brut*15)/100;
        }
        if(toplam_brut>=2000 && toplam_brut<5000)
        {
            g_v_o_c_s_20++;
            gelir_vergisi = (toplam_brut*20)/100;
        }
        if(toplam_brut>=5000 && toplam_brut<10000)
        {
            g_v_o_c_s_27++;
            gelir_vergisi = (toplam_brut*27)/100;
        }
        if(toplam_brut>=10000)
        {
            g_v_o_c_s_35++;
            gelir_vergisi = (toplam_brut*35)/100;
        }
        toplam_brut = aylik_brut + es_icin_aile_yardimi + cocuk_icin_aile_yardimi;
        aylik_net = toplam_brut - gelir_vergisi;
        //BANKNOT HESAPLAMA
        for (aylik_net;aylik_net>=200;aylik_net=aylik_net-200)
        {

            banknot_sayisi_200++;
        }
        for (aylik_net;aylik_net>=100;aylik_net=aylik_net-100)
        {

            banknot_sayisi_100++;
        }
        for (aylik_net;aylik_net>=50;aylik_net=aylik_net-50)
        {

            banknot_sayisi_50++;
        }
        for (aylik_net;aylik_net>=20;aylik_net=aylik_net-20)
        {

            banknot_sayisi_20++;
        }
        for (aylik_net;aylik_net>=10;aylik_net=aylik_net-10)
        {

            banknot_sayisi_10++;
        }
        for (aylik_net;aylik_net>=5;aylik_net=aylik_net-5)
        {

            banknot_sayisi_5++;
        }
        for (aylik_net;aylik_net>=1;aylik_net=aylik_net-1)
        {

            banknot_sayisi_1++;
        }
        for (aylik_net;aylik_net>=0.50;aylik_net=aylik_net-0.50)
        {

            banknot_sayisi_050++;
        }
        for (aylik_net;aylik_net>=0.25;aylik_net=aylik_net-0.25)
        {

            banknot_sayisi_025++;
        }
        for (aylik_net;aylik_net>=0.10;aylik_net=aylik_net-0.10)
        {

            banknot_sayisi_010++;
        }
        for (aylik_net;aylik_net>=0.05;aylik_net=aylik_net-0.05)
        {

            banknot_sayisi_005++;
        }
        for (aylik_net;aylik_net>=0.01;aylik_net=aylik_net-0.01)
        {

            banknot_sayisi_001++;
        }

        printf("\t\t+BANKNOT TURLERI: \t\t\t200TLx%d 100TLx%d 50TLx%d 20TLx%d 10TLx%d 5TLx%d\n",banknot_sayisi_200,banknot_sayisi_100,banknot_sayisi_50,banknot_sayisi_20,banknot_sayisi_10,banknot_sayisi_5);
        printf("\t\t+MADENI TURLERI: \t\t\t1TLx%d 50KRSx%d 25KRSx%d 10KRSx%d 5KRSx%d 1KRSx%d\n",banknot_sayisi_1,banknot_sayisi_050,banknot_sayisi_025,banknot_sayisi_010,banknot_sayisi_005,banknot_sayisi_001);
        aylik_net = toplam_brut - gelir_vergisi;
        toplam_net = toplam_net + aylik_net;
        printf("\t\t+ENGELLI VERGI INDIRIMI: \t\t%dTL\n",engelli_vergi_indirimi);
        printf("\t\t+GELIR VERGISI KESINTISI: \t\t%.2fTL\n",gelir_vergisi);
        printf("\t\t+AYLIK NET UCRET: \t\t\t%.2fTL\n",aylik_net);
        toplam_net += aylik_net;
        toplam_gelir += gelir_vergisi;

        if(aylik_net<2000)
        {
            ikibintl_alti++;
        }
        if(toplam_brut > en_yuksek_brut)
        {
            en_yuksek_brut = toplam_brut;
            en_buyuk_tc = tc;
            strcpy(en_buyuk_ad_soyad,ad_soyad);
            en_yuksek_toplam_brut = toplam_brut;
            en_yuksek_gelir_vergisi = gelir_vergisi;
            en_yuksek_aylik_net = aylik_net;

        }
        if(aylik_net > en_yuksek_aylik_net2)
        {
            en_yuksek_aylik_net2 = aylik_net;
            en_buyuk_tc2 = tc;
            strcpy(en_buyuk_ad_soyad2,ad_soyad);
            en_yuksek_toplam_brut2 = toplam_brut;
            en_yuksek_gelir_vergisi2 = gelir_vergisi;
            en_yuksek_aylik_net2 = aylik_net;

        }

        printf("\n************************************************************************************************************************\n");

        printf("BASKA CALISAN VAR MI?(e/E/h/H):");
        do
        {
            scanf("%c",&devam_mi);
        }while(devam_mi == '\n');
        printf("\n************************************************************************************************************************\n");
        kullanici++;

	} while( devam_mi == 'E' || devam_mi == 'e' );
    int banknot_sayisi_200=0,banknot_sayisi_100=0,banknot_sayisi_50=0,banknot_sayisi_20=0,banknot_sayisi_10=0,banknot_sayisi_5=0,banknot_sayisi_1=0,banknot_sayisi_050=0,banknot_sayisi_025=0,banknot_sayisi_010=0,banknot_sayisi_005=0,banknot_sayisi_001=0;
    if( devam_mi == 'h' || devam_mi == 'H' )
    {
        printf("\t\t\t\t++++++++++++++++++++  ISTATISTIK  ++++++++++++++++++++\n\n");
        toplam_net = toplam_net/2;
        printf("  TUM CALISANLARA ODENEN AYLIK TOPLAM NET UCRET: \t\t\t  %.2fTL\n",toplam_net);
        printf("  DEVLETE AKTARILAN AYLIK TOPLAM GELIR VERGISI TUTARI: \t\t\t  %.2fTL\n",toplam_gelir);
        printf("  TUM CALISANLARIN AYLIK TOPLAM BRUT VE NET UCRETLERININ ORTALAMASI:      %.2fTL BRUT ve %.2fTL NET\n",toplam_brut2/kullanici,toplam_net/kullanici);
        for (toplam_net;toplam_net>=200;toplam_net=toplam_net-200)
        {

            banknot_sayisi_200++;
        }
        for (toplam_net;toplam_net>=100;toplam_net=toplam_net-100)
        {

            banknot_sayisi_100++;
        }
        for (toplam_net;toplam_net>=50;toplam_net=toplam_net-50)
        {

            banknot_sayisi_50++;
        }
        for (toplam_net;toplam_net>=20;toplam_net=toplam_net-20)
        {

            banknot_sayisi_20++;
        }
        for (toplam_net;toplam_net>=10;toplam_net=toplam_net-10)
        {

            banknot_sayisi_10++;
        }
        for (toplam_net;toplam_net>=5;toplam_net=toplam_net-5)
        {

            banknot_sayisi_5++;
        }
        for (toplam_net;toplam_net>=1;toplam_net=toplam_net-1)
        {

            banknot_sayisi_1++;
        }
        for (toplam_net;toplam_net>=0.50;toplam_net=toplam_net-0.50)
        {

            banknot_sayisi_050++;
        }
        for (toplam_net;toplam_net>=0.25;toplam_net=toplam_net-0.25)
        {

            banknot_sayisi_025++;
        }
        for (toplam_net;toplam_net>=0.10;toplam_net=toplam_net-0.10)
        {

            banknot_sayisi_010++;
        }
        for (toplam_net;toplam_net>=0.05;toplam_net=toplam_net-0.05)
        {

            banknot_sayisi_005++;
        }
        for (toplam_net;toplam_net>=0.01;toplam_net=toplam_net-0.01)
        {

            banknot_sayisi_001++;
        }
        printf("  DEVLETIN BUTUN CALISANLAR ICIN ODEYECEGI BANKNOT TURLERI: \t\t  200TLx%d 100TLx%d 50TLx%d 20TLx%d 10TLx%d 5TLx%d\n",banknot_sayisi_200,banknot_sayisi_100,banknot_sayisi_50,banknot_sayisi_20,banknot_sayisi_10,banknot_sayisi_5);
        printf("  DEVLETIN BUTUN CALISANLAR ICIN ODEYECEGI MADENI TURLERI: \t\t  1TLx%d 50KRSx%d 25KRSx%d 10KRSx%d 5KRSx%d 1KRSx%d\n",banknot_sayisi_1,banknot_sayisi_050,banknot_sayisi_025,banknot_sayisi_010,banknot_sayisi_005,banknot_sayisi_001);
        printf("  AYLIK NET UCRETI 2000TL ALTI OLANLARIN SAYISI: \t\t\t  %d\n",ikibintl_alti);
        printf("  GELIR VERGISI ORANI KISI SAYISI(15,20,27,35): \t\t\t  %d %d %d %d\n",g_v_o_c_s_15,g_v_o_c_s_20,g_v_o_c_s_27,g_v_o_c_s_35);
        printf("  GELIR VERGISI ORANI YUZDESI(15,20,27,35): \t\t\t\t  %d %d %d %d\n",(g_v_o_c_s_15*100)/kullanici,(g_v_o_c_s_20*100)/kullanici,(g_v_o_c_s_27*100)/kullanici,(g_v_o_c_s_35*100)/kullanici);
        printf("  EVLI OLANLAR ILE BEKAR OLANLARIN YUZDESI(evli,bekar): \t\t  %d %d\n",(evli_olan*100)/kullanici,(evli_olmayan*100)/kullanici);
        printf("  ESLERIN CALISMA YUZDESI(calisan,calismayan): \t\t\t\t  %d %d\n",(es_calisan*100)/kullanici,(es_calismayan*100)/kullanici);
        if(cocugu_olan !=0)
        {
            printf("  CALISANLARIN BAKMAKLA YUKUMLU OLDUKLARI COCUK SAYISININ ORTALAMASI:     %d\n",b_y_c_s_o/cocugu_olan);
        }
        else
        {
            printf("  CALISANLARIN BAKMAKLA YUKUMLU OLDUKLARI COCUK SAYISININ ORTALAMASI:     0\n");
        }
        printf("  BAKMAKLA YUKUMLU OLDUGU COCUK SAYISI 3'TEN FAZLA  OLAN CALISAN SAYISI:  %d\n",b_y_c_s_3_f_o);
        printf("  ENGELLI CALISANLARIN SAYISI VE TUM CALISANLAR ICINDEKI YUZDESI: \t  %d %d\n",engelli_calisan,(engelli_calisan*100)/kullanici);

    }
    printf("\n************************************************************************************************************************\n\n");

    printf("\t\t\t++++++++++++++++++++  TOPLAM BRUT UCRETI EN YUKSEK OLAN  ++++++++++++++++++++\n\n");
    printf("\t\t\t\t+TC KIMLIK NUMARASI: \t\t\t%lld\n",en_buyuk_tc);
    fflush(stdin);
    printf("\t\t\t\t+AD SOYAD: \t\t\t\t%s\n",en_buyuk_ad_soyad);
    printf("\t\t\t\t+AYLIK TOPLAM BRUT UCRETI (TL): \t%.2fTL\n",en_yuksek_toplam_brut);
    printf("\t\t\t\t+GELIR VERGISI KESINTISI: \t\t%.2fTL\n",en_yuksek_gelir_vergisi);
    printf("\t\t\t\t+AYLIK NET UCRET: \t\t\t%.2fTL\n",en_yuksek_aylik_net);

    printf("\n************************************************************************************************************************\n\n");

    printf("\t\t\t++++++++++++++++++++  TOPLAM NET UCRETI EN YUKSEK OLAN  ++++++++++++++++++++\n\n");
    printf("\t\t\t\t+TC KIMLIK NUMARASI: \t\t\t%lld\n",en_buyuk_tc2);
    fflush(stdin);
    printf("\t\t\t\t+AD SOYAD: \t\t\t\t%s\n",en_buyuk_ad_soyad2);
    printf("\t\t\t\t+AYLIK TOPLAM BRUT UCRETI (TL): \t%.2fTL\n",en_yuksek_toplam_brut2);
    printf("\t\t\t\t+GELIR VERGISI KESINTISI: \t\t%.2fTL\n",en_yuksek_gelir_vergisi2);
    printf("\t\t\t\t+AYLIK NET UCRET: \t\t\t%.2fTL\n",en_yuksek_aylik_net2);

    printf("\n************************************************************************************************************************\n\n");

    return 0;
}
