/* PRINTING STEPS INVOLVED IN SOLVING TOWER OF HANOI
*  Author:Prashant Satyal
*  Reference:Data structure and algorithm using c and c++ (pearson) 
*/

#include <stdio.h>
 void towers(int, char, char, char);
 int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The steps involved in the Tower of Hanoi is:\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char from_peg, char to_peg, char aux_peg)//additional parameters are necessary for recursive call situation 
{
    if (num == 1)   //if one disc make move and return
    {
        printf("\n Move disk 1 from peg '%c' to peg '%c'\n", from_peg, to_peg);
        return;
    }
    towers(num - 1, from_peg, aux_peg, to_peg); // move top n-1 from a to b using c as aux
    printf("\n Move disk %d from peg '%c'' to peg '%c'\n", num, from_peg, to_peg);
    towers(num - 1, aux_peg, to_peg, from_peg); //move n-1 from b to c using a as aux
}
