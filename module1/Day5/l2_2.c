//Rotate String

#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "abcdxyz";
    int len = strlen(str);
    int choice,k;

    choose:
    printf("Choose below options to rotate\nRight : 1\nLeft : 2\n");
    scanf("%d",&choice);
    printf("Enter how many rotations : "); scanf("%d",&k);
    
    if(choice==1)
        //Right Rotation
        for(int r=1; r<=k; r++)
            for(int i=len-1; i>=1; i--)
            {
                char temp = str[i];
                str[i] = str[i-1];
                str[i-1] = temp;
            }
    else if(choice==2)
        //Left Rotation
        for(int r=1; r<=k; r++)
            for(int i=0; i<len-1; i++)
            {
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
            }
    else goto choose;
    printf("%s",str);
    return 0;
}