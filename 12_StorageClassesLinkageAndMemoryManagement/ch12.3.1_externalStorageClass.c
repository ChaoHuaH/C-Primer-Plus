/* show the combination of 
externam variable and auto variables 
*/

/* Example 1 
There is an external variable: Hocus, 
can be used in both main() and magic()
*/
int Hocus;
int magic();
int main(void) {
    extern int Hocus; // Hocus declared external
}
int magic() {
    extern int Hocus; // same Hocus as above
}

/* Example 2
Hocus can be used in both main() and magic()
even although magic() didn't declare the Hocus
*/
int Hocus;
int maigic();
int main(void) {
    extern int Hocus; // Hocus declared external
}
int maigic() {
    // Hocus not declare but is known
}

/* Example 3
Declared 4 independent variables.
1. Hocus in main(): 
   auto variable by default setting, a local variable in main()
2. Hocus in magic(): 
   set as auto variable by the "auto" declaration, a local varialbe in magic()
3. External varable Hocus:
   can be used in both main() and magic(). 
   However, only funciton where didn't declare the same name "Hocus" 
   can use the external varable Hocus
4. External varable Pocus:
   magic() know this variable, 
   but main() doesn't because Pocus is decared after main()
*/
int Hocus;
int magic();
int main(void) {
    int Hocus;  // Hocus declared, is auto by default
}
int Pocus;
int magic() {
    auto int Hocus; // local Hocus declared automatic
}
