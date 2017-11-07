#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int x = 2;
void inc (float n) {
    x += n;
}

void print (void) {
    printf ("%d\n", x);
}

void primeiro (void) {
    inc (3);
    print ();
}

void segundo (void) {
    int x = 5;
    inc (2);
    print ();
}

void main (int argc, char **argv) {
    inc (1.5);
     print ();
	sleep(10);
    //primeiro ();
    //print ();
    //segundo ();
    //print ();
}
