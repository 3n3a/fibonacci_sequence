#include <math.h>
#include <stdio.h>

int n_fibo(int n);

int main(void) {
	int i, limit;
	scanf("%d", &limit);
	for (i; i < limit + 1; ++i) {
		n_fibo(i);
	}
	return 0;
}

int n_fibo(int n) {
	
	//calculate phi and sqrt of 5
        double phi, sqrt5;
        sqrt5 = sqrt(5);
        phi = (sqrt5+1)/2;
        //printf("Phi: %.2lf\n", phi);

	//calculate negative phi and sqrt of 5
	double neg_phi;
	neg_phi = (1-sqrt5)/2;
	//printf("Neg Phi: %.2lf\n", neg_phi);

	//phi to the power of n
	double base, power, result_pwr;
	base = phi;
	power = n;
	result_pwr = pow(base, power);
	//printf("Phi to n: %.2lf\n", result_pwr);

	//negative phi to the power of n
	double base_neg, result_pwr_neg;
	base_neg = neg_phi;
	result_pwr_neg = pow(base_neg, power);
	//printf("neg Phi to n: %.2lf\n", result_pwr_neg);

	//printf("Result: %.0lf\n", (result_pwr - result_pwr_neg)/sqrt5);
	printf("%.0lf\n", (result_pwr - result_pwr_neg)/sqrt5);
}
