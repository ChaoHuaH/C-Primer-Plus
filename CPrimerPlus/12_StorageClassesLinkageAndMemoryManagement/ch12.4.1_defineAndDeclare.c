/* show the difference between define and declare */

/*
tern was delcared twice
- 1st declaration: (defining declaration) 
  The porgram allocates storage space for the variable
  (because of the variable defined)
- 2nd declaration: (referencing declaration)
  Show that program is going to use the previous defined varable "tern" 
  The "extern" indicate that the statement only referencing,
  telling the compiler go to elsewhere find the external variable.
*/
int tern = 1;   // tern defined (the first declaration)
main() {
    extern int tern;   // use a tern defined elsewhere
                       // the second declaration
}

/* 
use keyword: "extern" 
compiler would think "tern" was defined elsewhere
Therefore, the declaration will not allocate storage space for the variable
*/
extern int tern;
int main(void) {
}

/* 
external variable can only be initialized once
and should be at the time defining the variable
*/
// file one.c
char permis = 'N';

// file two.c
extern char permis = 'Y'; // !!!!! error
