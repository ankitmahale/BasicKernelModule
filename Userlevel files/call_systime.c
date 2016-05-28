#include<stdio.h>
#include<unistd.h>
#include<linux/unistd.h>
#include<linux/time.h>

int main() {
  struct timespec time;
  int ret = syscall(326, &time);
if(ret==0)
  {  printf("Successfully returned the System call\n");
 printf("Time in nanoseconds: %ld\n", time.tv_nsec);
  }
  else
  {  printf("System call failed to return\n");
  }
 
  return 0;
}



