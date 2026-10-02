#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main() {
    std::ifstream inFile;
    inFile.open("data.csv");

    if (!inFile.is_open()) {
      std:: cout << "unable to open file" << std::endl;
      return 1;
    }

    std::string line;
    std::string tempA, tempB, text;
    int a = 0, b = 0;

    while (std::getline(inFile, line)) {
      std::stringstream ss(line);
      std::getline(ss, tempA, ',');
      std::getline(ss, tempB, ',');
      std::getline(ss, text);

      std::stringstream convA(tempA);
      convA >> a;
      std::stringstream convB(tempB);
      convB >> b;


      for (int i = 0; i < a + b; i++) {
	std::cout << text << " ";
      }

      std::cout << std::endl;

   }
   
   inFile.close();
   return 0;

} 
