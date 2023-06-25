#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
  /* Variable declaration
   * names_size: size of the input names vector
   * like_message: output message
   */
  int names_size = names.size();
  std::string like_message;
  
  /* This is straightforward, edit the return message
   * for 5 possible cases
   */
  if ( names_size == 0 )
  {
    like_message = "no one likes this";
  }
  else if ( names_size == 1 )
  {
    like_message = names[0] + " likes this";
  }
  else if ( names_size == 2 )
  {
    like_message = names[0] + " and " + names[1] + " like this";
  }
  else if ( names_size == 3 )
  {
    like_message = names[0] + ", " + names[1] + " and " + names[2] + " like this";
  }
  else
  {
    like_message = names[0] + ", " + names[1] + " and " + 
                   std::to_string( names_size - 2 ) + " others like this";
  }
  
  return like_message; // Return the message
}