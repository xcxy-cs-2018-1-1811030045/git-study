
#include <stdio.h>
#include "add_minus.h"
#include "multi_div.h"
 
 int main(void)
 {
	int rst;

     printf("Hello Cacu!\n");
	
	rst = add(3,2);
	printf("3 + 2 = %d\n",rst);

	rst = minus(3,2);
	printf("3 - 2 = %d\n",rst);

	rst = multi(3,2);
	printf("3 * 2 = %d\n",rst);

	rst = div(6,2);
	printf("6 / 2 = %d\n",rst);

     return 0;
 }
