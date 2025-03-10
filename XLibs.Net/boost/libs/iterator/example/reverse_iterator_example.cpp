// (C) Copyright Jeremy Siek 2000-2004.
// Permission to copy, use, modify, sell and distribute this software
// is granted provided this copyright notice appears in all
// copies. This software is provided "as is" without express or
// implied warranty, and with no claim as to its suitability for any
// purpose.

#include <boost/config.hpp>
#include <iostream>
#include <algorithm>
#include <boost/iterator/reverse_iterator.hpp>
#include <boost/cstdlib.hpp>

int main(int, char*[])
{
  char letters_[] = "hello world!";
  const int N = sizeof(letters_)/sizeof(char) - 1;
  typedef char* base_iterator;
  base_iterator letters(letters_);
  
  std::cout << "original sequence of letters:\t\t\t"
            << letters_ << std::endl;

  // Use reverse_iterator to print a sequence of letters in reverse
  // order.
  
  boost::reverse_iterator<base_iterator>
    reverse_letters_first(letters + N),
    reverse_letters_last(letters);

  std::cout << "sequence in reverse order:\t\t\t";
  std::copy(reverse_letters_first, reverse_letters_last,
            std::ostream_iterator<char>(std::cout));
  std::cout << std::endl;

  std::cout << "sequence in double-reversed (normal) order:\t";
  std::copy(boost::make_reverse_iterator(reverse_letters_last),
            boost::make_reverse_iterator(reverse_letters_first),
            std::ostream_iterator<char>(std::cout));
  std::cout << std::endl;

  return boost::exit_success;
}
