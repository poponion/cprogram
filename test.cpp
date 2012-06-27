#include <stdio.h>

int main(int argc, char *argv[])
{
   int a = 10;
   int arr[a];
   arr[0]=1;
   fprintf(stderr, "%d %d %d\n",arr[0], arr[a-1], arr[1111]);
   exit(1);
}
