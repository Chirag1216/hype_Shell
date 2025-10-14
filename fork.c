#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
  printf("Hello there!\n");
  fork();
  printf("This is a fork\n");
}
