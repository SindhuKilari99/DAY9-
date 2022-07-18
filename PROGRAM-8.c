#include <stdio.h>
int main()
{
  //Declare two variables.
	int n=0x1a;
	int n1=0x23;
	//Do right shift for the hex vaue with bit position 2.
	n=n>>2;
	//check the n value is equal to 0x06.
	if(n==0x06)
	{
		n1|=((1<<7)|(1<<6)|(1<<3));
		printf("%x",n1);//printing the output.
	}
}
