import java.util.*;
import java.lang.*;
public class po{
      public static void main(String aa[]){
           int a;
           int f=0;
           Scanner s=new Scanner(System.in);
           a=s.nextInt();
          for(int i=2;i<a;i++){
              if(a%i==0){
                  f=1;
                  break;
              }
          }
           if(f==0){
               System.out.println("YES");
           }
         else{
               System.out.println("NO");
         }

    }
}
