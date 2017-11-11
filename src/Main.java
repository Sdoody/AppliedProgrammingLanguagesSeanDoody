import java.io.*;
import java.util.*;

public class Main
{
    public static void main(String[] args) throws FileNotFoundException
    {
        Scanner fileScanner = new Scanner(new File("JavaInput.txt"));
        fileScanner.useDelimiter("[^A-Za-z0-9]");
        ArrayList<String> words = new ArrayList<String>();
        while (fileScanner.hasNext())
        {
            if (!words.contains(fileScanner.next()) && (fileScanner.hasNext()))
            {
                words.add(fileScanner.next());
            }
        }
        Collections.sort(words);
        System.out.println("There are " +  words.size() + " unique word(s)");
        System.out.println("These words are:");
        for (Iterator<String> it = words.iterator(); it.hasNext();)
        {
            String f = it.next();
            System.out.println(f);
        }
        fileScanner.close();
    }
}
