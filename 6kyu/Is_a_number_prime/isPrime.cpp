/* Function isPrime
 * Returns whether the input number is prime or not
 * Inputs:
 *  - int num, the input number
 * Outputs:
 *  - bool indicating if num is prime or not
 */

bool isPrime(int num) {
  
  /* We do not consider any number below 2 as prime */
  if ( num < 2)
  {
    /* num is not prime */
    return false;
  }
  
  /* Let´s make a loop to search for divisors
   * - We look for a pair of numbers i,num/i
   * - The search ends when i>num/i, as there will not be divisors from that
   *   point onwards
   */
  for ( int i = 2; i <= num/i; i++ )
  {
    
    if (num%i == 0)
    {
      /* Divisor is found, so num is not prime */
      return false;
    }
    
  }
  
  /* num is prime */
  return true;
  
}