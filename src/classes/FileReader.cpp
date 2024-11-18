#include "../headers/FileReader.hpp"
#include <fstream>
#include <iostream>

// Constructor
FileReader::FileReader(string filename) : filename(filename)
{
}

// Destructor
FileReader::~FileReader()
{
  // clear the wordlist
  wordlist.clear();
}

// Reading the file and creating wordlist
std::vector<std::string> FileReader::read()
{
  // open the file
  std::ifstream file(filename);

  // if the file isn't open, throw an error message
  if (!file.is_open())
  {
    std::cerr << "Error opening file: " << filename << std::endl;
    return wordlist;
  }

  // read the file line by line
  std::string line;
  while (std::getline(file, line))
  {
    // add the line to the wordlist
    wordlist.push_back(line);
  }
  // return the word list
  return wordlist;
}