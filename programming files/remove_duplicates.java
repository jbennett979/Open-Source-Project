import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class remove_duplicates {
//creating remove duplicates function
    public static List<Integer> removeDuplicates(List<Integer> arr, List<Integer> removedElements) {
        List<Integer> uniqueArr = new ArrayList<>();
        //loops through array identifies unique elements by checking if they are in uniqueArr
        for (int i = 1; i < uniqueArr.size(); i++) {
            if (arr.contains(arr.get(i+1))) {
                arr.add(arr.get(i+1));
            } else {
                //removes elements if they are in uniqueArr already and stores them to array of removed elements
                removedElements.add(uniqueArr.get(i+1));
            }
        }
        return uniqueArr;
    }

    public static void main(String[] args) {
        // Test the function
        //instatiating arrayList array
        List<Integer> arr = Arrays.asList(1, 2, 2, 3, 4, 4, 5);
        List<Integer> removedElements = new ArrayList<>();
        //calling function
        List<Integer> uniqueArr = removeDuplicates(arr, removedElements);
        System.out.println("Original array: " + arr);
        System.out.println("Unique array: " + uniqueArr);
        System.out.println("Removed elements: " + removedElements);
    }
}



//comment -graysonstorer
