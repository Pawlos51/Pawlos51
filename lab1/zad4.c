#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;

	printf("podaj a\n");
	scanf("%d" ,&a);
	printf("podaj b\n");
	scanf("%d" , &b);
	printf("podaj c\n");
	scanf("%d" ,&c);
	printf("podaj d\n");
	scanf("%d" ,&d);

	e=0;

	if((a<b)&&(a<c)&&(a<d)&&(a>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n" ,a);
}
	if((b<a)&&(b<c)&&(b<d)&&(b>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", b);
}
	if((c<a)&&(c<b)&&(c<d)&&(c>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", c);
}
	if((d<a)&&(d<b)&&(d<c)&&(d>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", d);
}
	if((a<e)&&(b<e)&&(c<e)&&(d<e))
{
	printf("brak najmniejszej liczby dodatniej:\n");
}
	if(((a<=e)&&(b<c)&&(b<d))||((c<=e)&&(b<a)&&(b<d))||((d<=e)&&(b<a)&&(b<c))&&(b>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", b);
}
	if(((b<=e)&&(a<c)&&(a<d))||((c<=e)&&(a<b)&&(a<d))||((d<=e)&&(a<b)&&(a<c))&&(a>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", a);
}
	if(((a<=e)&&(c<b)&&(c<d))||((b<=e)&&(c<a)&&(c<d))||((d<=e)&&(c<a)&&(c<b))&&(c>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", c);
}
	if(((a<=e)&&(d<b)&&(d<c))||((b<=e)&&(d<a)&&(d<c))||((c<=e)&&(d<a)&&(d<b))&&(d>=e))
{
	printf("najmniejsza liczba dodatnia: %d\n", d);
}


return 0;
}
