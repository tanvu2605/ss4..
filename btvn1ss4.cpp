#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number%3==0 && number%5==0)
    {
        printf("%d chia het cho ca 3 và 5",number);
    }
    else printf("so do ko chia het cho ca 3 va 5");
}
