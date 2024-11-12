#include <iostream>
#include <fstream>
using namespace std;

int main() {
     //open file to write sequence of numbers to
    ofstream file;
    file.open("numbers.html");

     //Headers
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";

    /*loop through all numbers 1-50
     * if the number is even, write under the even number header
     * otherwise, write under the odd number header
     * */
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
      //close file
    file.close();

    //print out the created file
    // bug: doesn't loop through entire output file to print
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
