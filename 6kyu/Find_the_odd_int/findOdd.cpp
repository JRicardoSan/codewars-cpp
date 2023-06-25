#include <vector>

int findOdd(const std::vector<int>& numbers)
{
  /* Variable Declaration
   * - elements: stores which integers appear in 'numbers' without repeating them
   * - repetitions: counts the number of times each member of 'elements' appears in 'numbers'
   * - result: the output of this function
   * - is_contained: indicates if the number that is evaluated is contained inside 'elements'
   */
  
  std::vector<int> elements;
  std::vector<int> repetitions;
  int result = 0;
  bool is_contained = false;
  
  /* First we evaluate the input 'numbers'
  */
  
  for ( uint i = 0; i < numbers.size(); i++ )
  {
    
    /* We check if the number numbers[i] is
     * contained in elements.
     * If so, we update 'repetitions'
     */
    for (uint j = 0; j < elements.size(); j++)
    {
      if (elements[j] == numbers[i])
      {
        repetitions[j]++;
        is_contained = true;
        break;
      }
    }
    
    /* If it was not contained, we
     * update both 'elements' and 'repetitions'
     * with the new addition
     */
    if (!is_contained)
    {
      elements.push_back( numbers[i] );
      repetitions.push_back( 1 );
    }
    else
    {
      is_contained = false;
    }
    
  }
  
  /*Now we look for the element with odd number of repetitions
   */
  for ( uint i = 0; i < repetitions.size(); i++)
  {
    if ( repetitions[i]%2 != 0 )
    {
      result = elements[i];
      break;
    }
  }  
  
  return result;
  
}