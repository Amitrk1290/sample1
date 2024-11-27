#include<reg51.h>
void main()
{
	unsigned int i;
	P3= 0*00;
	while(1)
	{
		P3=~P3;
		for(i=0;i<100;i++);
	}
}