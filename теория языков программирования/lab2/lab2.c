#include <stdio.h>

#define S  0 /* S */
#define A  1 /* A */
#define B  2 /* B */
#define F  3 /* F */
#define H  4 /* {S,F} */
#define W  5 /* {} */

#define P  1 /* + */
#define M  0 /* - */

#define a 0 /* a */
#define b 1 /* b */

struct action
{
	int sos; /* состояние */
	int out; /* вывод */
};

int main()
{
	int table[2][6];
	table[a][S] = B;
	table[b][S] = A;
	table[a][A] = H;
	table[b][A] = W;
	table[a][B] = W;
	table[b][B] = H;
	table[a][F] = W;
	table[b][F] = W;
	table[a][W] = W;
	table[b][W] = W;
	table[a][H] = B;
	table[b][H] = A;

	int output[6];
	output[S] = M;
	output[A] = M;
	output[B] = M;
	output[F] = P;
	output[W] = M;
	output[H] = P;


	int input[]={b,a,a,b};
	int n = 4, i;
	int isos = S;
 
	for( i=0; i<n; ++i)
	{
		isos=table[input[i]][isos];
	}

	printf("%d\n", output[isos]);
	return 0;
}
