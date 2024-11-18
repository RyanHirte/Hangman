#include <iostream>
#include <vector>
#include "classes/FileReader.cpp"

// Don't have to type std:: anymore
using namespace std;
int main()
{
  FileReader reader("../wordlist.txt");
  vector<string> wordlist = reader.read();
  for (string word : wordlist)
  {
    cout << word << endl;
  }

  return 0;
}