#include <stdio.h>

#define FOR($Ty, $Container) \
	for($Ty* it = ($Container).data; \
		it != ($Container).data + ($Container).size; \
		++it)

#define FOR_REVERSE($Ty, $Container) \
	for($Ty* it = ($Container).data + ($Container).size - 1; \
		it != ($Container).data - 1; \
		--it)

#define FOR_ITER($Ty, $IterBegin, $IterEnd) \
	for($Ty* it = ($IterBegin); \
		it != ($IterEnd); \
		++it)

#define FOR_ITER_REVERSE($Ty, $IterBegin, $IterEnd) \
	for($Ty* it = ($IterBegin); \
		it != ($IterEnd) - 1; \
		--it)

int main() {
	return 0;
}
