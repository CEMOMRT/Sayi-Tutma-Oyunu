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
		printf("1-20 aras�nda bir say� gir: ");
		scanf("%d",&a);
		if(tutulan<a)
		{
			printf("Girilen say� k���k.\n");
		}
		else if(tutulan>a)
		{
			printf("Girilen say� b�y�k.\n");
		}
	}while(tutulan!=a);
	printf("DO�RU B�LD�N�Z !");	
	getche();
}
