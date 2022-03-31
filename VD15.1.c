#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	for(i=0;i<=20;i++)
	{
		printf("\nBinh Phuong cua %d la %d",i,binhPhuong(i));
	}
	getch();
}
	binhPhuong(int x)
	{
		int y ;
		y = pow(x,2);
		return (pow(x,2));
    }


