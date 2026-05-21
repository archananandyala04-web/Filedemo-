import java.io.*;
public class FileDemo {
    public static void main(String args[]) {
        try {
            FileWriter fw = new FileWriter("data.txt");
            fw.write("Hello Archana");
            fw.close();
            System.out.println("Data written successfully");
            FileReader fr = new FileReader("data.txt");
            BufferedReader br = new BufferedReader(fr);
            String text = br.readLine();
            System.out.println("File Content: " + text);
            br.close();
            FileWriter fw2 = new FileWriter("data.txt", true);
            fw2.write("\nJava File Handling");
            fw2.close();
            System.out.println("File updated successfully");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}