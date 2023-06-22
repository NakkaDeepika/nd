// L1_4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

// Concepts to be used.
// - Loops
// - Operators

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char num[4];
    scanf("%s",num);
    char poss[4][3];
    int maxi;
    for(int i=0; i<4; i++)
    {
        int index=0;
        for(int j=0; j<4; j++)
        {
            if(j!=i)
            {
                poss[i][index]=num[j];
                index++;
            }
            poss[i][index]='\0';
        }
        if(i==0)
        {
            maxi = atoi(poss[i]);
        }
        else if(maxi<atoi(poss[i])){
            maxi = atoi(poss[i]);
        }
    }
    printf("%d",maxi);
    return 0;
}