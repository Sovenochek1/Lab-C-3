#include <stdio.h>  
#include <stdlib.h>


  
double Pi,s1,s2,n;
void main ()
{
    n=0; s1=0; s2=0;
    do
    {
        ++n;
        s1=(s2+4/(2*n-1));
        n++;
        s2=(s1-4/(2*n-1));
    }
    while (n<500);
    Pi=(s1+s2)/2;
    printf ("\nChislo Pi=%1.9f",Pi);
}