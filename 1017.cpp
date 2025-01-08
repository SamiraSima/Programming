
   // Below is C/C++ code for input/output
#include<stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
       char n;
	// For getting input from input.txt file
	freopen("input.txt", "r", stdin);
     scanf("%c",&n);
     printf("%c",n);
	// Printing the Output to output.txt file
	freopen("output.txt", "w", stdout);

#endif
	return 0;
}


