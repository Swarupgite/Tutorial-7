import java.util.*;

class Program525
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();
        str = str.replaceAll("\\s","");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        int Frequency[] = new int[26];
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Frequency[((int)Arr[iCnt]) - 'a']++;
        }

        System.out.println("Frequency of each letter is : ");
        for(iCnt = 0; iCnt < Frequency.length; iCnt++)
        {
            System.out.println(((char)iCnt+'a')+" occurs "+Frequency[iCnt]+" times");
        }
    }
}
