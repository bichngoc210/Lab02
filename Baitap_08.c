#include<stdio.h>
#include<conio.h>

main()
{
	int so_nguyen;
	float so_thuc_float;
	double so_thuc_double;
	char ky_tu;
	printf("/*======== Kich thuoc cua cac kieu du lieu ========*/\n");
	printf("\n");
	
	printf("Kieu int: %d byte\n", sizeof(int));
	printf("So nguyen: ");
	scanf("%d/", &so_nguyen);
	printf("\n");
	
	printf("Kieu float: %d byte\n", sizeof(float));
	printf("So thuc kieu float: ");
	scanf("%f/n", &so_thuc_float);
	printf("\n");
	
	printf("Kieu double: %d byte\n", sizeof(double));
	printf("So thuc kieu double: ");
	scanf("%lf/n", &so_thuc_double);
	printf("\n");
	
	printf("Kieu char: %d byte\n", sizeof(char));
	printf("Ky tu: ");
	scanf("%c/n", &ky_tu);
	printf("\n");
	
	printf("Kieu long int: %d byte\n", sizeof(long int));
	printf("\n");
	
	printf("Kieu long double: %d byte\n", sizeof(long double));
	printf("\n");
	
	printf("/*=================================================*/\n");
	printf("Bam mot phim bat ky de dong chuong trinh!\n");
	
	getch();	
}
