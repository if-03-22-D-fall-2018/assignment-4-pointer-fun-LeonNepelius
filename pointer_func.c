#include "stdio.h"



void print_integers(int int_value,int *int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d\n",int_value,*int_pointer);
}
int change_integers(int int_value,int *int_pointer)
{
  *int_pointer = 88;
  int_value = 24;
  return int_value;
}


int main(int argc, char const *argv[]) {
  int int_value;
  int_value = 72;
  int number = 45;
  int* int_pointer;
  //*int_pointer = 45; //with the * before the pointer you can insert a value
  int_pointer = &number; //with the & before the value you can get the pointer of the value
  print_integers(int_value,int_pointer);
  int_value = change_integers(int_value,int_pointer);
  print_integers(int_value,int_pointer);
  return 0;
}
