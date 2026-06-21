package week_3.oops;
import java.util.Random;
abstract class Compartment{
    public abstract String notice();
}
class FirstClass extends Compartment{
    public String notice(){
        return "First Class";
    }
}
class Ladies extends Compartment{
    public String notice(){
        return "Ladies";
    }
}
class General extends Compartment{
    public String notice(){
        return "General";
    }
}
class Luggage extends Compartment{
    public String notice(){
        return "Luggage";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Random r=new Random();
        Compartment[] c=new Compartment[10];
        for(int i=0;i<10;i++){
             int num=r.nextInt(4)+1;
             if(num==1){
                Compartment com=new FirstClass();
                c[i]=com;
                String str=c[i].notice();
                System.out.println(str);
            }
            else if(num==2){
                Compartment com=new Ladies();
                c[i]=com;
                String str=c[i].notice();
                System.out.println(str);
            }
            else if(num==3){
                Compartment com=new General();
                c[i]=com;
                String str=c[i].notice();
                System.out.println(str);
            }
            else if(num==4){
                Compartment com=new Luggage();
                c[i]=com;
                String str=c[i].notice();
                System.out.println(str);
            }
        }
    }
    
}