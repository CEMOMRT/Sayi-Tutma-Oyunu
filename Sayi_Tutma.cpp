#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int tutulan,a;
	tutulan=rand()%20+1;
	do
	{
		printf("1-20 arasýnda bir sayý gir: ");
		scanf("%d",&a);
		if(tutulan<a)
		{
			printf("Girilen sayý küçük.\n");
		}
		else if(tutulan>a)
		{
			printf("Girilen sayý büyük.\n");
		}
	}while(tutulan!=a);
	printf("DOÐRU BÝLDÝNÝZ !");	
	getche();
}
