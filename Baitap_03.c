#include<stdio.h>
#include<conio.h>

main()
{
	
	int num1, num2;
		
	printf("Nhap so num1 = ");
	
	scanf("%d", &num1);
	
	printf("Nhap so num2 = ");
	
	scanf("%d", &num2);
	
	printf("Tong = %d\n", num1 + num2);
	
	printf("Hieu = %d\n", num1 - num2);
	
	printf("Tich = %d\n", num1 * num2);
	
	printf("Thuong = %f\n", (float)num1/(float)num2);
	
	getch();
	
}
