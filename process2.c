/* 
   compile : gcc -o process2 process2.c
   exec : ./process2 {STRING}
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ChildProcess(char **argv, char **envp);
void ParentProcess(void);

int main(int argc, char *argv[], char *envp[]) {

  //子プロセス生成と返り値受け取り
  int nPid = fork();

  //返り値から親プロセスと子プロセスの分岐
  if (!nPid) {
    ChildProcess(argv, envp);
  } 
  else {
    ParentProcess();
  }

  return 0;
}

//子プロセスの処理
void ChildProcess(char **argv, char **envp) {

  //子プロセスID表示
 printf("Child PID(GID) :: %d(%d)\n", getpid(),getgid());
  //banner実行
 execve("/Network/Servers/profsv1/vol/vol3/home21/nisidate/bin/banner",argv,envp);
  //子プロセス終了
  exit(0);
}

//親プロセスの処理
void ParentProcess(void) {

  //親プロセスID表示
printf("Parent PID(GID) :: %d(%d)\n", getpid(),getgid());
  
  //子プロセス終了待ち
  wait(0);

}
