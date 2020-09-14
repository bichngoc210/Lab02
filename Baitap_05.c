#include<stdio.h>
#include<conio.h>

main()
{
	
	float top, bottom, height;
		
	
	printf("Day nho cua hinh thang la: ");
	scanf("%f/n", &top);
	
	printf("Day lon cua hinh thang la: ");
	scanf("%f/n", &bottom);
	
	printf("Chieu cao cua hinh thang la: ");
	scanf("%f/n", &height);
	
	printf("Dien tich cua hinh thang la: %f", (top+bottom)*height/2);
		
	getch();	
}
