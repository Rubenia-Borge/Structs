
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
   ifstream inFS;        
   string userWord;
   int wordFreq = 0;
   string currWord;

   // Check number of arguments
   if (argc != 2) {
      cout << endl << "Usage: myprog.exe inputFileName" << endl;
      return 1;   // 1 indicates error
   }

   // Try to open file
   cout << "Opening file " << argv[1] << "." << endl;
   inFS.open(argv[1]);

   if (!inFS.is_open()) {
      cout << "Could not open file " << argv[1] << "." << endl;
      return 1;
   }

   // Word to be found
   cout << "Enter a word: ";
   cin >> userWord;

   // Identify when a word matches the userWord 
   // and increase wordFreq
   while (!inFS.eof()) {
      inFS >> currWord;
      if (!inFS.fail()) {
         if (currWord == userWord) {
            ++wordFreq;
         }
      }
   }

   cout << userWord << " appears in " << argv[1] << " "
      << wordFreq << " times." << endl;

   // Done with file, so close it
   inFS.close();

   return 0;
}
