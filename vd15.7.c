#include <stdio.h>
void main()
{
 int x, y, *px, *py;
 /* Luu tru dia chi cua x trong px */
 px = &x;
 /* Luu tru dia chi cua y trong py */
 py = &y;
 x = 15; y = 20;
 printf("x = %d, y = %d \n", x, y);
 swap (px, py);
 /* truyen dia chi cua x va y */
 printf("\n After interchanging x = %d, y = %d\n",x,y);
}
swap(int *u, int *v)
/* chap nhan cac gia tri cua px va py thanh u va v */
{
 int temp;
 temp = *u;
 *u = *v;
 *v = temp;
 return;
}
