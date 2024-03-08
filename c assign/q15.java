
import java.util.*;
public class Main
{
    public static void countOccurances(String str){
        int[] freq = new int[26];
        for(int i=0; i<str.length(); i++){
            char c = str.charAt(i);
            if(c>='a' && c<='z')
                freq[c-'a']++;
            else if(c>='A' && c<='Z') 
                freq[c-'A']++;
        }
        
        System.out.println("Count of characters:\n");
        
        for(int i=0; i<26; i++){
            if(freq[i] != 0) 
                System.out.println((char)('A'+i) + " : " + freq[i]);
        }
    }
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    System.out.print("Enter a string: ");
	    String str = sc.nextLine();
	    countOccurances(str);
	}
}