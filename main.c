

#include <stdio.h>
#include <stdlib.h>
int main()
{
int cn = 0;
int n=0,r=1;
while (r==1)
{
printf("\n Entre com um numero inteiro e positivo: ");
scanf("%d",&n);
if (n>=0)
{ cn=cn+1; }
printf("\n Mais numeros (sim=1 / nao=2:) ? ");
scanf("%d",&r);
}
printf("\n\n Quantidade de numeros digitados = %d \n\n",cn);
return 0;
}
