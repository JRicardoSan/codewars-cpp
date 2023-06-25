std::string decodeMorse(std::string morseCode) {
    /* The decoded string to return */
    std::string decoded;
    /* This string stores each of the incoming words to decode */
    std::string word = "";
    /* A counter to keep track of spaces */
    unsigned int space_counter = 0;
  
    /* Decode loop */
    for( auto p : morseCode ) {
      if ( ( p == '.' ) || ( p == '-' ) )
      {
        /* Add previous spaces to the new word if necessary */
        if ( ( space_counter > 1 ) && ( !decoded.empty() ) )
        {
          decoded += ' ';
        }
        /* Add the symbol to 'word' */
        word += p;
        space_counter = 0;
      }  
      else if( p == ' ')
      {      
        /* In case there was no spaces previously */
        if ( ( space_counter == 0 ) && ( !word.empty() ) )
        {
          /* Decode and add the coded word */
          decoded += MORSE_CODE[ word ];
          word = "";
        }
        /* Update number of consecutive found spaces */
        space_counter++;
      }
    }
    /* Add any remaining word */
    decoded += MORSE_CODE[ word ];
  
    return decoded;
}