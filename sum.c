#include "sum.h"

int sum(int num){
	int res = 0;
	int i;
	for(i = 1 ; i <= num ; i++){
		res += i;
	}
	return res;
}

