#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
  char name[20];
  int age;
};

void printPerson(struct person p){
  // print each field in the struct
  printf("name = %s\n", p.name);
  printf("age = %d\n", p.age);
}
// constructor
struct person *createPerson(char *name, int age){
  struct person *newPerson = malloc(sizeof(struct person));
  strcpy(newPerson->name, name);
  newPerson->age = age;
  return newPerson;
}

int main(){
  // initialize three person structs in three different ways
  struct person p1 = {"Alice", 50};
  printPerson(p1);

  struct person p2;
  strcpy(p2.name, "Bob");
  p2.age = 37;
  printPerson(p2);

  struct person *p3 = createPerson("Clark", 21);
  printPerson(*p3);
  return 0;
}
