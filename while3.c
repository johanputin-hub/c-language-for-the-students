#include <stdio.h>

int main()
{
    int dice = 1;

    while(dice <= 6)
    {
        if(dice < 6)
        {
            printf("NO, Yatzy.\n");
        }
        else{
            printf("It's yatzy.\n");
        }
        dice++;
    }
}
