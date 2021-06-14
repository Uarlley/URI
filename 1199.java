import java.util.Scanner;
import java.lang.Math;
public class Main{
    public static void main(String[] args){
        String num;
        Scanner in = null;
        long ans;
        in = new Scanner(System.in);
        num = in.nextLine();
        while(num.charAt(0)!='-'){
            if(num.length()==1 & num.charAt(0)=='0') System.out.println("0x0");
            else if(num.charAt(0)=='0'){
                ans = hex(num);
                System.out.println(ans);
            }
            else{
                num = dec(num);
                System.out.println(num);
            }
            num = in.nextLine();
        }
        in.close();
    }
    public static String dec(String num){
        int i,n,size;
        long m=0,a;
        char t;
        size = num.length();
        for(i=0;i<size;i++){
            t = num.charAt(i);
            n = Integer.parseInt(String.valueOf(t));
            m+=n*Math.pow(10,size-i-1);
        }
        String ans = "";
        while(m>0){
            a = m%16;
            if(a>=10) ans = (char)(a+55) + ans;
            else ans = (char)(a+'0') + ans;
            m = m/16;
        }
        ans = "0x" + ans;
        return ans;
    }
    public static long hex(String num){
        int i,n;
        long ans=0;
        char t;
        i = num.length();
        for(i=i-1;i>num.indexOf('x');i--){
            t = num.charAt(i);
            if(t=='a' | t=='A') n = 10;
            else if(t=='b' | t=='B') n = 11;
            else if(t=='c' | t=='C') n = 12;
            else if(t=='d' | t=='D') n = 13;
            else if(t=='e' | t=='E') n = 14;
            else if(t=='f' | t=='F') n = 15;
            else n = Integer.parseInt(String.valueOf(t));
            ans+=n*Math.pow(16,num.length()-1-i);
        }
        return ans;
    }
}