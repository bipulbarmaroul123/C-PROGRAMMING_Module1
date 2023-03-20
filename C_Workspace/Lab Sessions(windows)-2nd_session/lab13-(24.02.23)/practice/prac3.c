#include <stdio.h>
struct employee
{
    char *lead;
    int born;
};
int main()
{
    struct employee l1 , l2;
    l2.lead = "sridhar";
    l1 = l2;
    printf("%s %s", l2.lead, l1.lead);
    return 0;
}
