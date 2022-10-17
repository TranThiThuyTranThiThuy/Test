#include<stdio.h>
#include<unistd.h>
 
int main()
{
  pid_t id;
  int i;
  char name='a';
  for(i=0;i<3;i++)
  {
      id=fork(1);
      if(id==0)
      {
          printf("son  %c %d %d\n",name+i+1,getpid(),getppid());
          pid_t fils_id;
          int j;
          for(j=0;j<i && (i+1)%3==0;j++)
          {
              fils_id=fork();
              if(fils_id==0)
              {
                  printf("----son  %c %d %d\n",name+i+j+2,getpid(),getppid());
                  exit(0);
              }
              else
              {
                  printf("---father %c %d\n",name+i+1,getpid());
                  wait(NULL);
              }
          }
          exit(0);
      }
      else
      {
          printf("father %c %d\n",name,getpid());
          wait(NULL);
         
      }
      printf("========%d========\n",i);
  }
    wait(NULL);
 
    return 0;
}
