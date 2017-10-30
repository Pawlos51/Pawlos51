#include <stdio.h>

	int main()
{
	int a ;
	int b ;
	int c ;
	int d ;	
 
	printf("podaj a\n");
	scanf("%d",&a);
	printf("podaj b\n");
	scanf("%d", &b);
	printf("podaj c\n");
	scanf("%d", &c);
	printf("podaj d\n");
	scanf("%d", &d);

	printf("suma: %d\n", a+b+c+d);
	printf("średnia: %.3f\n", ((double)a+(double)b+(double)c+(double)d)/(double)4);


	if((a<b)&&(a<c)&&(a<d))
{
	printf("najmniejsza liczba do kwadratu równa się %d\n", a*a); 
}
	if((b<a)&&(b<c)&&(b<d))
{
	printf("najmniejsza liczba do kwadratu równa się %d\n", b*b); 
}
	if((c<a)&&(c<b)&&(c<d))
{
	printf("najmniejsza liczba do kwadratu równa się %d\n", c*c); 
}
	if((d<a)&&(d<b)&&(d<c))
{
	printf("najmniejsz liczba do kwadratu równa się %d\n", d*d);
}

return 0;

} 

