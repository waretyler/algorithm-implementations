#include<stdio.h>

/** Performs insertion sort on a[] and array of length 'len'
 */
void insertion_sort(int a[], int len)
{
  // sort through an array
  int j;
  for (j = 1; j < len; j = j + 1)
  {
    // current element we are moving
    int current = a[j];

    int i = j - 1;
    while (i >= 0 && a[i] > current) 
    {
      // Shift elements forward if they are greater than current element
      a[i+1] = a[i];
      i = i - 1;
    }

    // Put current element in the last spot we shifted from
    a[i + 1] = current;
  }

}

/** Helper that prints out an array
 */
void print_array(char msg[], int a[], int len) {

  int i;
  printf("%s", msg);
  for (i = 0; i < len; i = i + 1)
  {
    printf("%d ", a[i]);
  }

  printf("\n");
}

/** Create an array and sort it!
 */
int main() 
{
  int a[] = {1, 3, 1000, -20, 0};
  int len = sizeof(a)/sizeof(a[0]);

  print_array("Before sort: ", a, len);
  insertion_sort(a, len);
  print_array("After sort: ", a, len);

  return 0;
}


