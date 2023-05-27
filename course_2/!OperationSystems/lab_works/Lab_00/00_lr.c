#include <stdio.h>

int i = 0;

int main(int argc, char* argv[], char** env)
{
  printf("\tArgv[i]:\n\r");
  while(argv[i] != NULL)
  {
    printf("Argv[%d] =  %s\n\r", i, argv[i]);
    i = i + 1;
  }

  i = 0;
  printf("\n\r\tEnv[i]:\n\r");

  while(env[i] != NULL)
  {
    printf("Env[%d] = %s \n\r", i, env[i]);
    i = i + 1;
  }

  return 0;
}