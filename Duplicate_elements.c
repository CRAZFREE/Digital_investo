#include <stdio.h>
#include <stdlib.h>
void dulpicateValues(int arr[], int size);
int main()
{
	int x[] = { 1, 2, 3, 1, 3, 6, 6 };
  // int* x;
  // x=(int* ) calloc (5,sizeof(int));
  int arr_size = sizeof(x) / sizeof(x[0]);
  // for(int i=0;i<sizeof(x);i++){
  //   scanf("%d",&x[i]);
  // }
  dulpicateValues(x, arr_size);
	getchar();
	return 0;
}
void dulpicateValues(int arr[], int size)
{
	int i;
	printf("The repeating elements are: \n");
	for (i = 0; i < size; i++) {
    // printf("These are unaltered\n");
    if (arr[abs(arr[i])] >= 0){
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    }
		else
      // printf("This is the result");
      printf(" %d ", abs(arr[i]));
	}
}
