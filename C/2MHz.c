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

void order (int *A, int *B, int *C)
{
  int max, center, min;
  if (*A<*B)
    {
      if (*B<*C)
      {
        max=*C, center=*B, min=*A;
      }
      else if (*C<*A)
      {
        max=*B, center=*A, min=*C;
      }
      else
      {
        max=*B, center=*C, min=*A;
      }
    }
  else
    {
      if (*A<*C)
      {
        max=*C, center=*A, min=*B;
      }
      else if (*C<*B)
      {
        max=*A, center=*B, min=*C;
      }
      else
      {
        max=*A, center=*C, min=*B;
      }
    }

    printf("you want numbers is  %d %d %d .\n", max, center, min);

}

int test_func (int *A, int *B, int *C)
{
  __int64 freq, start, end;
  QueryPerformanceFrequency((LARGE_INTEGER*)(&freq));
  QueryPerformanceCounter((LARGE_INTEGER*)&start);
  order (A, B, C);
  QueryPerformanceCounter((LARGE_INTEGER*)&end);
  printf("time interval = %f(ms)\n", (double)(end-start)/freq);
  return 0;

}

int main(void)
{
  int A, B, C;
  printf("write 3 numbers. : \n");
  scanf("%d %d %d", &A, &B, &C);
  test_func (&A, &B, &C);
  return 0;

}
