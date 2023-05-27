#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int i = 0;

int main(int argc, char* argv[], char** env)
{
  const char* NameFile = argv[1];
  int file_diskriptor = open(NameFile, O_RDWR);

  if ( file_diskriptor != -1 )
  {
    size_t lengchFile = (size_t)lseek(file_diskriptor, 0, SEEK_END);
    lseek(file_diskriptor, 0, SEEK_SET);

    char* ptr = (char*)mmap(NULL, lengchFile, PROT_READ | PROT_WRITE, MAP_SHARED, file_diskriptor, 0);

    if ( (void*)ptr == MAP_FAILED )
    {
      perror("error_02");
      close(file_diskriptor);
      exit(-2);
    }


    while ( i < lengchFile - 2 )
    {
      ptr[i] = ptr[i] + ptr[i + 1];
      ptr[i + 1] = -(ptr[i + 1] - ptr[i]);
      ptr[i] = ptr[i] - ptr[i + 1];

      i = i + 2;
    }


    if ( munmap((void*)ptr, lengchFile) == -1 )
    {
      perror("error_03");
      close(file_diskriptor);
      exit(-3);
    }

    if ( close(file_diskriptor) == -1 )
    {
      perror("error_04");
      exit(-4);
    }
  } else
  {
    perror("error_01");
    exit(-1);
  }

  return 0;
}
