#include <stdio.h>

int main() {

	int a[100];
	int n, i, k, sel;

	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	
	k = 0;
	while (k < n && a[k] != 0)
		k++;

	if (k < n) {

		sel = 1; 

		
		while (k + sel < n && a[k + sel] == 0)
			sel++;

		sel--; 

		

		if (sel > 0) {
			for (i = k + 1; i <= n - sel - 1; i++)
				a[i] = a[i + sel];

			n = n - sel; 
		}
	}

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);


	return 0;
}
