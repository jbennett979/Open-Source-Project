<<<<<<< HEAD
//comments by luke cirne
=======
//Comments by Luke Cirne

>>>>>>> d28768d47c1ebea3228c8af9ea0fda0b7ed29906
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // opening html file
    ofstream file;
    file.open("numbers.html");
<<<<<<< HEAD
    // create a table
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    //odd nums in one and evens in another column
=======
    // creating header
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // writing even numbers to file in one table column and odd numbers in another
>>>>>>> d28768d47c1ebea3228c8af9ea0fda0b7ed29906
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    // close file
    file.close();
    // print file contents
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
