#include <string>
#include <stdexcept>

/* Add roman numerals and returns the rest */
int addNumerals(std::string s_numeral_i, std::string &s_roman_io, int i_number_i)
{
  int i_rest_o, i_elements;
  
  if (numeral_i == "HUNDREDS")
  {
    
    if (number_i > 999)
    {
      throw std::invalid_argument(
        "Indicated numeral is HUNDREDS, but the input number is higher than 999" );
    }
    
    i_elements = i_number_i / 100;
    i_rest_o = i_number_i % 100;
    
  }
  else if (numeral_i == "TENS")
  {
    
    if (number_i > 99)
    {
      throw std::invalid_argument(
        "Indicated numeral is TENS, but the input number is higher than 99" );
    }
    
    i_elements = i_number_i / 10;
    i_rest_o = i_number_i % 10;
    
  }
  else if (numeral_i == "UNITS")
  {
    
    if (number_i > 9)
    {
      throw std::invalid_argument(
        "Indicated numeral is UNITS, but the input number is higher than 9" );
    }
    
    i_elements = i_number_i;
    i_rest_o = 0;
    
  }
  else
  {
    /* Incorrect input numeral indication */
    throw std::invalid_argument(
        "Indicated numeral is not HUNDREDS, TENS or UNITS" );
  }
  
  if (i_elements > 0) && (i_elements < 4)
  {
    for (i = 0; i < i_elements; i++)
    {
      if (numeral_i == "HUNDREDS")
      {
        s_roman_io += "C";
      }
      else if (numeral_i == "TENS")
      {
        s_roman_io += "X";
      }
      else if (numeral_i == "UNITS")
      {
        s_roman_io += "I";
      }
    }
  }
  else if (i_elements == 4)
  {
    if (numeral_i == "HUNDREDS")
    {
      s_roman_io += "CD";
    }
    else if (numeral_i == "TENS")
    {
      s_roman_io += "XL";
    }
    else if (numeral_i == "UNITS")
    {
      s_roman_io += "IV";
    }
  }
  else if (i_elements > 4) && (i_elements < 9)
  {
    if (numeral_i == "HUNDREDS")
    {
      s_roman_io += "D";
    }
    else if (numeral_i == "TENS")
    {
      s_roman_io += "L";
    }
    else if (numeral_i == "UNITS")
    {
      s_roman_io += "V";
    }
    for (i = 5; i < i_elements; i++)
    {
      if (numeral_i == "HUNDREDS")
      {
        s_roman_io += "C";
      }
      else if (numeral_i == "TENS")
      {
        s_roman_io += "X";
      }
      else if (numeral_i == "UNITS")
      {
        s_roman_io += "I";
      }
    }
  }
  else if (i_elements == 9)
  {
    if (numeral_i == "HUNDREDS")
    {
      s_roman_io += "CM";
    }
    else if (numeral_i == "TENS")
    {
      s_roman_io += "XC";
    }
    else if (numeral_i == "UNITS")
    {
      s_roman_io += "IX";
    }
  }
  
  return i_rest_o;
}

std::string solution(int number)
{
  // convert the number to a roman numeral
  int thousands;
  int rest;
  std::string roman;
  
  /* Thousands */
  thousands = number / 1000;
  rest = number % 1000;
  for (i = 0; i < thousands; i++)
  {
    roman += "M";
  }
  
  
  
}