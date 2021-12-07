/* constConcept.c
some concepts of const

- pointer-to-constant: 
mostly used in function parameter 
means can't use pointer to change the data in this function
*/
#include <stdio.h>
#define MONTH 12

int main(void){
    
    const int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // days is const
    // change to days is not allowed
    // days[9] = 44; // compiler error

    // pointer to const 
    // can't use pd to change the value of rates
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double * pd = rates; // pointer pd point to const double data
    // *pd = 29.89;            // not allowed
    // pd[2] = 222.22;         // not allowed1
    rates[0] = 99.99;          // allowed because rates is not const
    
    // make pd point to rates[1] -- allowed
    pd++;

    // const pointer to const data or non-const data are all valid
    double rates1[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
    const double * pc;   // pointer to const data
    pc = rates1;         // valid
    pc = locked;         // valid
    pc = &rates1[3];     // valid

    // oridinary pointer are only allowed to point to non-const data
    // this is because if ordinary pointer can point to a const data
    // then we can use the pointer to change the const data
    double rates2[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double locked2[4] = {0.08, 0.075, 0.0725, 0.07};
    double * pnc;        // ordinary pointer
    pnc = rates2;        // valid
    // pnc = locked2;    // not valid
    pnc = &rates2[3];    // valid

    // declare and initialize a const pointer, 
    // and not allowed it point to elsewhere
    double rates3[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    double * const pc1 = rates3; // const pointer: pc points to beginning of the array
    // pc1 = &rates3[2];         // not allowed to point to elsewhere
    *pc1 = 92.99;                // ok -- changes rates3[0]
    
    // use twice const to generate a pointer
    double rates4[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double * const pc2 = rates4;
    // pc2 = &rates4[2];  // can't change the point to position
    // *pc2 = 92.99;      // can't change the value of data

    return 0;
}