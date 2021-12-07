// where's the memory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_store = 30;
const char * pcg = "String Literal";
int main() {
    int auto_store = 40;
    char auto_string[] = "Auto char Array";
    int * pi;
    char * pcl;

    pi = (int *) malloc(sizeof(int));
    *pi = 35;
    pcl = (char *) malloc(strlen("Dynamic String") + 1);
    strcpy(pcl, "Dynamic String");

    printf("static_store: %d at %p\n", static_store, &static_store); // static data, include string const in section 1
    printf("  auto_store: %d at %p\n", auto_store, &auto_store);     // auto in section 2
    printf("         *pi: %d at %p\n", *pi, pi);                     // dynamic in section 3
    printf("  %s at %p\n", pcg, pcg);                                // static data, include string const in section 1
    printf(" %s at %p\n", auto_string, auto_string);                 // auto in section 2
    printf("  %s at %p\n", pcl, pcl);                                // dynamic in section 3
    printf("   %s at %p\n", "Quoted String", "Quoted String");       // static data, include string const in section 1
    free(pi);
    free(pcl);

    return 0;
}