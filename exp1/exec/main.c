#include <unistd.h>
int main()
{
  char *const argv[] = {"ls", "-a", NULL};
  char *const envp[] = {"PATH=/bin:/usr/bin", "TERM=console", NULL};
  if(fork()==0) execl("/bin/ls", "ls", "-a", NULL);
  //带p的，可以使用环境变量PATH，无需写全路径
  else if(fork()==0)execlp("ls", "ls", "-a", NULL);
  // 带e的，需要自己组装环境变量
  else if(fork()==0)execle("/bin/ls", "ls", "-a", NULL, envp);
  else if(fork()==0)execv("/bin/ls", argv);
  // 带p的，可以使用环境变量PATH，无需写全路径
  else if(fork()==0)execvp("ls", argv);
  // 带e的，需要自己组装环境变量
  else execve("/bin/ls", argv, envp);
  return(0);
}
