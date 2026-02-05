#include <stdio.h>
#include <stdlib.h>

int sumArr(int ary[], int len){
  // TODO: sum the entries in the array using pointer notation
  return 0; 
}

int main(int argc, char *argv[]){
  int ary[argc-1];
  for (int i = 1; i < argc; i++){
    ary[i-1] = atoi(argv[i]);
  }
  int sum = sumArr(ary,argc-1);
  printf("sum = %d\n", sum);
  return 0;
}
