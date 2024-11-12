

import java.io.*;

public class even_odd_site {
    public static void main(String[] args) throws ioException {
        BufferedReader file = new BufferedReader(new FileWriter("numbers.html"));
        file.write("<html><head><title>List of Numbers</title></head><body>");
        file.write("<table><tr><th>Even Numbers</th><th>Odd Numbers</th></tr>");
        for (int i = 1; i <= 50; i++) {
            if (i % 2 == 0) {
                file.write("<tr><td>" + i + "</td><td></td></tr>\n");
            }
            else {
                file.write("<tr><td></td><td>" + i + "</td></tr>\n");
            }
        }
        file.write("</table></body></html>");
        file.close();
        BufferedReader reader = new BufferedReader(new FileReader("numbers.html"));
        String line;
        while ((line = reader.readLine()) = null) {
            System.out.println(line);
        }
        reader.close();
    }
}