package week_2.live;
import week_2.music.Playable;
import week_2.music.string.Veena;
import week_2.music.wind.Saxophone;
public class Test {
    public static void main(String[] args) {
        Veena v=new Veena();
        Saxophone s=new Saxophone();
        Playable p;
        v.play();
        s.play();
        p=v;
        p.play();
        p=s;
        p.play();
    }
}
