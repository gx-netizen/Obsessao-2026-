#include <iostream>
#include <stdio.h>

/* peimeira atividade Prática no laboratório*/

main()
{
int x;
float a,r=0,m=0;
for (x=1;x<=10;x++)
{
	printf("digete sua altura em metros:");
	scanf ("%f",& a);
		
	r=r+a;
	if(a>m)
	{
		m=a;
	}
	}
	printf("a altura media e de:%f e o mas alto e:%f",r/10, m);
}
