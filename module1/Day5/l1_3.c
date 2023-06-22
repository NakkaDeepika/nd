// compute total seconds

#include<stdio.h>
#include<string.h>
int main()
{
    char tm[8];
    printf("Enter time : "); scanf("%s",tm);
    char *token = strtok(tm,":");
    int sp[3];
    int i=0;
    while (token != NULL) {
        sp[i]=atoi(token);
        i++;
        token = strtok(NULL, ":");
    }
    int tot_sec = sp[0]*3600 + sp[1]*60 + sp[2];
    printf("Total seconds : %d\n",tot_sec);
    return 0;
}
