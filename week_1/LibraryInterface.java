package week_1;
interface LibraryUser{
    void registerAccount(int age);
    void requestBook(String booktype);
}
class KidUser implements LibraryUser{
    public void registerAccount(int age){
        if(age<12){
            System.out.println("You have successfully registered under a kids account");
        }
        else{
            System.out.println("Your age must be less than or equal to 12 for a kids account");
        }
    }

    public void requestBook(String booktype){
        String s=booktype.toLowerCase();
        if(s.equals("kids")){
            System.out.println("Book issued successfully, please return in 10 days");
        }
        else{
            System.out.println("You are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser{
    public void registerAccount(int age){
        if(age>12){
            System.out.println("You have successfully registered with an adult account");
        }
        else{
            System.out.println("Sorry, your age must be greater than 12");
        }
    }
    public void requestBook(String booktype){
        String s=booktype.toLowerCase();
        if(s.equals("fiction")){
            System.out.println("Book issued successfully,please return within 7 days");
        }
        else{
            System.out.println("You can only take fiction books");
        }
    }
}
public class LibraryInterface{
    public static void main(String[] args) {
        KidUser k=new KidUser();
        k.registerAccount(10);
        k.registerAccount(18);
        k.requestBook("Kids");
        k.requestBook("Fiction");
        AdultUser a=new AdultUser();
        a.registerAccount(5);
        a.registerAccount(23);
        a.requestBook("Kids");
        a.requestBook("Fiction");
    }
}