/* hotel.h
constqants and declarations for hotel.c
*/
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "*********************************"

// show list of choice
int menu(void);

// return number of nights desired
int getnights(void);

// calculates price from rate, nights
// and display result
void showprice(double rate, int nights);