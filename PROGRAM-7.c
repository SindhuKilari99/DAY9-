#include <stdio.h>
int main()
{
//declare the variable
int n=0x1c;
int n1=0x55;
	//Set the register SSPSTAT value and bit CKE, P and S bit are cleared (0), without disturbing the other bits.
	n&=~((1<<3)|(1<<4)|(1<<6));
	printf("%x",n);
        //Find out the value of UA, BF, SMP bits in SSPSTAT register.
	printf("%x %x %x",(n1>>7)&1,(n1>>1)&1,(n1>>0)&1);
  }
