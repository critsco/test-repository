#include<stdio.h>

int main() {
	int money, result;
	int bill[5] = {1000, 500, 200, 100, 50};
	int coin[4] = {20, 10, 5, 1};
	int centavo[4] = {.25, .10, .5, .1};

	//Enter the amount to be denominated
	printf("Enter an amount: ");
	scanf("%d", &money);

	//Prints out the bill denominations
	for (int i = 0; i <= 5; i++) {
		if (money / bill[i] >= 0) {
			result = money / bill[i];
			printf("%d P%d bill", result, bill[i]);
			money = money % bill[i];
		}
	}

	return 0;
}
