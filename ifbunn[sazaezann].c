#include <stdio.h>

int main(void)
{
    int Sazae,Namihei,Masuo;
    
    Sazae = 24; 
    Namihei = 54;
    Masuo = 28;
    
    if(Sazae == 24)
        printf("サザエさんは24歳です\n");
    if(Namihei  !=20)
        printf("波平さんは20歳ではありません\n");
    if(Namihei >= 20)
        printf("波平さんは20歳以上です\n");
    if(Masuo < 30)
        printf("マスオは30歳未満です\n");
        
    if(Namihei > Sazae)
        printf("波平はサザエより年上です\n");
    if(Masuo > Sazae)
        printf("マスオはサザエより年上です\n");

    return 0;
}
