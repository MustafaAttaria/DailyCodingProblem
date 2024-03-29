/*598 You have n fair coins and you flip them all at the same time. Any that come up tails you set aside. The ones that come up heads you flip again. How many rounds do you expect to play before only one coin remains?

Write a function that, given n, returns the number of rounds you'd expect to play until one coin remains.*/

#include <bits/stdc++.h>

using namespace std;

int getRounds(int n);

int main() {
	printf("%d",getRounds(8));
	return 0;
}


//The fair coin probability is 50/50 so the half coin will get removed at every round
//Above assumption leads us to log2n solution to the problem
int getRounds(int n)
{
	return log2(n);
}
