import java.util.*;

public class Joy{
    public static void main(String[]args){
	System.out.println("Comment vous apellez vous");
	Scanner sc = new Scanner(System.in);
	String name = sc.nextLine();

	if(name.equals("joy")){
	    System.out.println("vous êtes vraiment charmantes ta pas un ptit 06 ?");
	    String answer = sc.nextLine();
	    while(!answer.equals("0687968112")){
		if(answer.equals("non"))
		    System.out.println("vas y donne fais pas ta connasse");

		else if(answer.equals("va te faire foutre"))
		    System.out.println("d'ou tu parle comme sa donne le num");

		else if(answer.equals("un bisous d'abord"))
		    System.out.println("sa me plais mais je ne suis pas achetable,donne d'abord");
		else
		    System.out.println("mytho va, ta cru t'allai m'arnaquer");
		answer = sc.nextLine();
	    }
	    System.out.println("merci mdame je vais maintenant vous harceler de bisous et de message, on se revoit dans le noctilien");
}
 else if(name.equals("lucas"))
     System.out.println( "t'es le meilleur mon pote");
 else if(name.equals("thommas"))
     System.out.println("tu vas mourrir");
 else
     System.out.println(" tu sers à rien dégage");


    }
}
