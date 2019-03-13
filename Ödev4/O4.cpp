#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jeton,say[11]= {0},i,j,k,hazne,tablo[12][12]= {{0}};
    char a;
    srand(time(NULL));
    printf("Jeton sayisi:");
    scanf("%d",&jeton);
    for(i=1; i<=jeton; i++)
    {
        printf("%d. jetonu atmak icin bir tus ",i);
        a=getchar();
        scanf("%c",&a);
        hazne=1+rand()%10;
        printf("------>  %d.hazneye\n",hazne);
        say[hazne]++;
    }
    for(i=1; i<=10; i++)
    {
        if(i<10)
            printf("\n %d. haznedeki jeton sayisi:  %d",i,say[i]);
        if(i>9)
            printf("\n%d. haznedeki jeton sayisi:  %d",i,say[i]);
    }
printf("\n");
    for(i=9; i>0; i--)//satir
    {

        printf("\n%d|",i);
        for(j=1; j<=10; j++)//sutun
        {
            if(say[j]>0){
                for(k=say[j];k>0;k--)
                    tablo[k][j]=1;
            }
            if(tablo[i][j]==1)
                printf("   O");
            else printf("    ");

        }
    printf("\n-------------------------------------------------");
    }
    printf("\n     ");
    for(j=1; j<=10; j++)//hazne numaralari
        printf("%d   ",j);



    return 0;
}
