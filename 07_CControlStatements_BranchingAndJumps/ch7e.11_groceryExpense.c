/* groceryExpense.c
ask user to input 
how many lb of atrichoke, beet, and carrot they want
then add shipping price
and calculate the expense
*/
#include <stdio.h>
#include <ctype.h>
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE      1.15
#define CARROT_PRICE    1.09
#define DISCOUNT_STD 100
#define DISCOUNT 0.05
#define SHIP_LV1 5
#define SHIP_LV2 20
#define SHIP_LV1_PRICE 6.5
#define SHIP_LV2_PRICE 14.0
#define SHIP_EXTRA     0.5
void printCategory(void);
void chooseCategory(char *cate_ptr);
void inputWeight(int *inputW_ptr, char category);

int main(void)
{
    char category;
    int input_weight;
    int artichokes_weight, beets_weight, carrots_weight, tot_weight;
    float artichokes_cost, beets_cost, carrots_cost;
    float tot_cost, discount_cost;
    float shipping;
    
    artichokes_weight = beets_weight = carrots_weight = 0;
    artichokes_cost = beets_cost = carrots_cost = 0.0;

    // input weight for each category
    while (chooseCategory(&category),
           category != 'd')
    {
        inputWeight(&input_weight, category);
        switch (category)
        {
            case 'a':
                artichokes_weight += input_weight;
                break;
            case 'b':
                beets_weight += input_weight;
                break;
            case 'c':
                carrots_weight += input_weight;
                break;
        }
    }
    tot_weight = artichokes_weight + beets_weight + carrots_weight;

    // calculate the cost
    artichokes_cost = ARTICHOKE_PRICE * (float) artichokes_weight;
    beets_cost = BEET_PRICE * (float) beets_weight;
    carrots_cost = CARROT_PRICE * (float) carrots_weight;
    tot_cost = artichokes_cost + beets_cost + carrots_cost;

    // calculate discount
    if (tot_cost > DISCOUNT_STD)
        discount_cost = tot_cost * (1.0 - DISCOUNT);
    else 
        discount_cost = tot_cost;

    // calculate shipping
    if (tot_weight < SHIP_LV1)
        shipping = SHIP_LV1_PRICE;
    else if (tot_weight < SHIP_LV2)
        shipping = SHIP_LV2_PRICE;
    else 
    {
        shipping = 
        SHIP_LV2_PRICE + (float) (tot_weight - SHIP_LV2) * SHIP_EXTRA;
    }
    
    // print results
    printf("\n\n----------------------------------------------------------\n");
    printf("Your order as following: \n");
    printf("----------------------------------------------------------\n");
    printf("              Artichoke       Beet     Carrot      Total \n");
    printf("     per lb  %10.2f %10.2f %10.2f\n",
            ARTICHOKE_PRICE, BEET_PRICE, CARROT_PRICE);
    printf("----------------------------------------------------------\n");
    printf("weight(lbs)  %10d %10d %10d %10d\n", 
            artichokes_weight, beets_weight, carrots_weight, tot_weight);
    printf("    Cost($)  %10.2f %10.2f %10.2f %10.2f\n",
            artichokes_cost, beets_cost, carrots_cost, tot_cost);
    printf("----------------------------------------------------------\n");
    printf("   Discount                                   %10.2f\n",
            -(tot_cost - discount_cost));
    printf("   Shipping                                   %10.2f\n",
            shipping);
    printf("----------------------------------------------------------\n");
    printf(" Final Cost                                   %10.2f\n",
            discount_cost + shipping);
    printf("----------------------------------------------------------\n\n");


    // printf("\n%c\n", category);
    // printf("%d\n", input_weight);
    // printf("Artichoke: %d lbs\n", artichokes_weight);
    // printf("Beet: %d lbs\n", beets_weight);
    // printf("Carrot: %d lbs\n", carrots_weight);
    // printf("Total: %d", tot_weight);
    
    // printf("Bye!\n");
}

void printCategory(void)
{
    printf("\n====================================\n");
    printf("a) artichokes   b) beets  c) carrots\n");
    printf("d) stop ordering\n");
    printf("====================================\n");
    printf("What would you like to order: ");
}

void chooseCategory(char *cate_ptr)
{
    printCategory();
    while (*cate_ptr = getchar(),
           (*cate_ptr < 'a' || *cate_ptr > 'd'))
    {
        if (isspace(*cate_ptr))
            continue;                                    // skip all spaces
        printf("Please enter from option 'a' to 'd': "); // when encounter first non-space and not between a to e
        while (getchar() != '\n')
            continue; // skip rest of input line
    }
}

void inputWeight(int *inputW_ptr, char category)
{
    const char *category_name[] =
        {"artichokes", "beets", "carrots"};
    printf("How many pounds of %s do you want: ",
           category_name[category - 'a']);
    
    while (scanf("%d", inputW_ptr) != 1)
    {
        scanf("%*s");
        printf("Please enter a valid number: ");
    }
}
