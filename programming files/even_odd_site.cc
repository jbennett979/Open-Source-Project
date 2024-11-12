//Comments by Luke Cirne

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // opening html file
    ofstream file;
    file.open("number.html");
    // creating header
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // writing even numbers to file in one table column and odd numbers in another
    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    // close file
    close(file);
    // print file contents
    ifstream input("number.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
