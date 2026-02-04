#include <stdio.h>
#include <stdlib.h>

void printAry(int ary[]);

int main(){
  
  int ary[10];
  for (int i = 0; i < 10; i++){
    ary[i] = 2*i+1;
  }
  printAry(ary); // should print all the elements of our array
}

void printAry(int ary[]){
  // TODO: print the value of each element in the array
  
}
