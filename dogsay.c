#include <stdio.h>
#include <string.h>

int main ( int argc, char * argv[] )
{
  if ( argc < 2 ) {
    printf( "usage: %s <to say>", argv[0] );
  } else {
    int i = 1, max;
    while ( i <= argc ) {
      printf( "%d", strlen(*argv[i]) );
      i++;
    }
  }
  return 0;
}
