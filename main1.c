#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void)
{
     char *locale = setlocale (LC_ALL, "");
	 int i, n, e, r; 
     printf("������� ����������� ����������� �������: \n ");
     scanf("%d",&n);
     e=3*n;
     for (i=1; n<=e; i++) n=n+1/n;
         r=i;
     printf ("���������� ������� �������� ����� %d ���\n", r);
     system ("pause");
     return 0;
}