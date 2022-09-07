#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigcallback(int sig){
    //sig : 触发调用该函数， 收到的信号值
    printf("recv signal num is %d\n", sig);
}

int main(){
    //1.自定义2号信号的处理方式
    signal(2, sigcallback);

    while(1){
        printf("test signal process...\n");
        sleep(1);
    }
    return 0;
}
