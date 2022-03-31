#include <stdio.h>
main()
{
 int a, b, c;
 a = b = c = 0;
  printf("\nNhap so thu 1  : ");
 scanf("%d", &a);
 printf("\nNhap so thu 2 : ");
 scanf("%d", & b);
 c = adder(a, b);
 printf("\n\ngia tri cua a va b trong ham mani() : %d, % d", a, b);
 printf("\n\nc trong ham  main() is : %d", c);
 /* c gives the addition of a and b */
}
adder(int a, int b)
{
 int c;
 c = a + b;
 a *= a;
 b += 5;
 printf("\n\nGia tri cua a va b trong ham adder() : %d, %d ", a, b);
 printf("\nc Gia tri cua c trong ham : %d", c);
 return(c);
}
