#include <stdio.h>
int main()
{
	int k=0;	
	int a;
	int b;
	a=12; b=24;
	if (a>b) {
		for (int i=a; i>0; i--) {
			if ((a%i==0)&&(b%i==0)) {
				printf ("%d", i);
				k++;
				if (k==1) break;
				}
			}
						
		}
	else  {
		for (int i=b; i>0; i--) {
			if ((a%i==0)&&(b%i==0)) {
				printf ("%d", i);
				k++;
				if (k==1) break;
				}
			}
						
		}
		
	return 0;
}
