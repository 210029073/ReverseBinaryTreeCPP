#include "AddTwoNumbersRec.h"

int add2numbers(int sum, int target) {
	if (sum <= target) {
		return add2numbers(sum + target, target);
	}

	return sum;
}