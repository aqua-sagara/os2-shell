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

  //�ҥץ����������֤��ͼ������
  int nPid = fork();

  //�֤��ͤ���ƥץ����Ȼҥץ�����ʬ��
  if (!nPid) {
    ChildProcess(argv, envp);
  } 
  else {
    ParentProcess();
  }

  return 0;
}

//�ҥץ����ν���
void ChildProcess(char **argv, char **envp) {

  //�ҥץ���IDɽ��
 
  //banner�¹�

  //�ҥץ�����λ
  exit(0);
}

//�ƥץ����ν���
void ParentProcess(void) {

  //�ƥץ���IDɽ��

  
  //�ҥץ�����λ�Ԥ�
  wait(0);

}
