#include <iostream>
#include <vector>
#include "classes/FileReader.cpp"

// Don't have to type std:: anymore
using namespace std;
int main()
{
  // create the reader for the wordlist file
  FileReader reader("../wordlist.txt");
  // store the words from the wordlist file
  vector<string> wordlist = reader.read();

  return 0;
}