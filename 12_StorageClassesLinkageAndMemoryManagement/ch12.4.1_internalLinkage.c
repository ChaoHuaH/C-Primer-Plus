/* static variable, internal linkage */

 
// external variable can be used by any functionin at any file
//
// (external static)
// static variable with "internal linkage" 
// can only be used in function at the same file
//
// in the file1.c, traveler and stayhome are both global variables
// but only traveler can be used in file other than file1.c

/* file1.c */
int traveler = 1;          // external linkage
static int stayhome = 1;   // internal linkage
int main() {
    extern int traveler;   // use global traveler
    extern int stayhome;   // use global stayhome, 
                           // but won't change the internal linkage feature
}