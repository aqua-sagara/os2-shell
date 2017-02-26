/* 
   compile : gcc -o process1 process1.c
   exec : ./process1 {STRING}
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


  //子プロセス終了
  exit(0);
}

//親プロセスの処理
void ParentProcess(void) {

  //親プロセスID表示

  
  //子プロセス終了待ち
  wait(0);

}
