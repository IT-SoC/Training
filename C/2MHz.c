/*
2.
Explain the program operation principle and speed for the following two programs.
Make C program example and verify it.

    [function declaration)]	int square (int A);
    [function Call)]	int A;
    		A = square (A);

    [function declaration)]	void sqaure (int *A);
    [function Call)]	int A;
    		square (&A);
*/
//what second it is when we convert from 2Mhz.
// Important : Should not use Calculator!
// Answer :

//Convert 1Mhz to Khz and Hz.
//Important : Do not write Arabic number. Write in English.
// Answer :
#include <stdio.h>
#include <windows.h>

int square (int A)
{
  return A*A;
}

int main (void)
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
/*void square (int *A)
{
  int Answer;
  Answer = (*A)*(*A);
  printf("A square is %d\n", Answer);
  return ;
}


int main(void)
{
  int A;
  __int64 freq, start, end;
  printf("write A : \n");
  scanf("%d", &A);
  QueryPerformanceFrequency((LARGE_INTEGER*)(&freq));
  QueryPerformanceCounter((LARGE_INTEGER*)&start);
  square (&A);
  QueryPerformanceCounter((LARGE_INTEGER*)&end);
  printf("time interval = %f(ms)\n", (double)(end-start)/freq);
}
*/
