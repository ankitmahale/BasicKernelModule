#include<stdio.h>
#include<unistd.h>
#include<linux/unistd.h>
#include<linux/time.h>

int main() {
 
  int ret = syscall(327);
  if(ret==0)
  {  printf("Successfully returned the System call");
  }
  else
  {  printf("System call failed to return\n");
  }

  
  return 0;
}
