#include <stdio.h>

int main()
{
    double valores[6], media, somamedia, positivos;
    
    for(int i = 0; i < 6; i++){
        scanf("%lf",&valores[i]);
    }
    for(int i = 0; i < 6; i++){
        if(valores[i] > 0){
            positivos++;
            somamedia = somamedia + valores[i];
        }
    }
    media = somamedia/positivos;
    printf("%.0lf valores positivos\n%.1lf\n", positivos, media);
    return 0;
}
