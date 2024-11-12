import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        //the date and time as a string
        String dateStr = "2022-03-17 10:45:30";
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");//the format that the date time should take
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter); //parse the format
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));//format the date
        
        System.out.println(formattedDate);//print the formatted date to console
    }
}
