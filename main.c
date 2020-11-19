#include <stdio.h>
#include "add-source.h"
#include "print-source.h"

int main(){
	int f = Add(6,7);
	PrintAdd(6,7);
	printf("6+7=%d\n",f);
	return 0;
}