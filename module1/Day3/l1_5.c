// L1_5. Write a program to find both smallest and largest digits in given n numbers
// For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5

#include <stdio.h>

int max(int r,int largest)
{
    if(r>largest)
        return r;
    return largest;
}

int min(int r,int largest)
{
    if(r<largest)
        return r;
    return largest;
}

// Function to the largest and smallest digit of a number
void Digits(int n)
{
	int largest = 0;
	int smallest = 9;

    int len = 0; 
    
	while (n) {
		int r = n % 10;

		// Find the largest digit
		largest = max(r, largest);

		// Find the smallest digit
		smallest = min(r, smallest);

		n = n / 10;
		len++;
	}
	if(len==1)
	{
	    printf("Not Applicable\n");
	}
	else
	    printf("%d %d\n",smallest, largest);
}

// Driver code
int main()
{
	int t;
    printf("Enter the value of t : "); scanf("%d",&t);
    printf("\n");
	// Function call
	for(int i=0; i<t; i++)
	{
	    int n;
	    printf("value of n%d : ",i+1); scanf("%d",&n);
	    Digits(n);   
	}

	return 0;
}
