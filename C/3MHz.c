/*
3.
Describe the principle of operation / speed of program operation / size of the program, etc.,
when using a function that outputs squared or not using a function,
and verify the example by making it a C program


  [function declaration]	int test (int A);
  [function Call ]	int B[1000];
    		for(int i=0; i<1000; i++)
		  B[i] = squre (double(i));

  			int A, B, C;
    		for(int i=0; i<1000; i++)
		  B[i] = i * i;
*/
//what second it is when we convert from 1Mhz not 3Mhz(Gotcha!).
// Important : Do not write Arabic number. Write in English.
// Answer :
#include <stdio.h>
#include <windows.h>

int square (int A)
{
  return A*A;
}

int main(void)
{
  int A;
  printf("write a A : \n");
  scanf("%d", &A);
  __int64 freq, start, end;
  QueryPerformanceFrequency((LARGE_INTEGER*)(&freq));
  QueryPerformanceCounter((LARGE_INTEGER*)&start);
  A = square(A);
  QueryPerformanceCounter((LARGE_INTEGER*)&end);
  printf("time interval = %f(ms)\n", (double)(end-start)/freq);
  printf("A square is : %d ", A);
  return 0;
}
