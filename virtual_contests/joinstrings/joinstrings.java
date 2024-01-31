package virtual_contests.joinstrings;
import java.util.*;
class joinstrings {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int size = scnr.nextInt();
        String mostRecent = "";
        ArrayList<String> strings = new ArrayList<>();
        for (int i = 0; i < size + 1; ++i) {
            strings.add(scnr.nextLine());
            // System.out.println(strings.get(i));
        }
        for(int i = 0; i < size - 1; ++i) {
            int a = Integer.parseInt(scnr.next());
            int b = Integer.parseInt(scnr.next());
            mostRecent = strings.get(a) + strings.get(b);
            strings.set(a, mostRecent);
            strings.set(b, "");
            
        }
        System.out.println(mostRecent);

    }
}