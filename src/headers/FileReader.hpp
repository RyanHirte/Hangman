#include <vector>
#include <string>

using namespace std;

class FileReader
{
public:
  // Constructor
  FileReader(string filename);
  // Destructor
  ~FileReader();
  // Reading the file and creating wordlist
  vector<string> read();

private:
  // vector for storing words
  vector<string> wordlist;
  // the file name to read
  string filename;
};