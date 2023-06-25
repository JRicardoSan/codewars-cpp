#include <iostream>
int solution(int number_in) 
{
  
  /* First deal with the negative condition
   * We also account here for the fact that
   * below 4 this function should return 0
   * as well
   */
  if (number_in < 4)
  {
    return 0;
  }
  
  /* From here on, the result 'sum' will not be
   * zero
   */
  
  /* Variable declaration
   * - divresult: result after integer division
   * - modresult: result after mod division
   * - sum: the output of this function
   * - multiples: array of multiples of 3 and 5 below 15, including zero
   */
  int divresult;
  int modresult;  
  int sum = 0;
  int multiples[7] = {0,3,5,6,9,10,12};
  
  /* Every 15 units, we have 0, 3, 5, 6, 9, 10 and 12
   * as possible candidates
   * First we check how many times 15 units are
   * contained inside number_in
   */
  divresult = number_in/15;
  modresult = number_in%15;
  
  /* When counting until reaching number_in, for every batch i of 15, the number n(i,j)
   * is 15*(i-1) + j, where:
   *   - i is an int number in [1, divresult]
   *   - j is an int number in defined 'multiples' array.
   */

  /* This loop is summing the multiples in the [1, divresult] batches
  */
  
  for (int i = 1; i <= divresult; i++)
  {
    /* 15 is the size of the batch,
     * 7 is the number of elements in 'multiples' array
     * 45 is the sum of the elements in 'multiples' array
     */
    sum+= 15*( i-1 )*7 + 45;
  }
  
  
  /* Now we deal with the multiples that are not included
   * in the previous batches
   */  
  for (int j = 0; j < 7; j++)
  {
    /* We ensure we do not sum number_in */
    if ( multiples[j] < modresult )
    {
      sum+= 15*divresult + multiples[j];
    }
    else
    {
      break;
    }
  }
  
  return sum;
    
}