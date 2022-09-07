#include<stdio.h>
#include<unistd.h>
 //实现两个进程同时打印文字
int main()
{
  pid_t pid;
  int i;
  pid = fork();
  if(pid < 0)
  {
    perror("fork");
  }
  if(pid == 0) //子进程
  {
    for(i=0;i<20;i++)
    {
      printf("child\n");
      sleep(1); 
    }
    
  }
  else//父进程
  {
    for(i=0;i<20;i++)
    {
      printf("parent\n");
      sleep(1);
    }
  }
    printf("end\n");
}

