
public class Entiers {
	private short e;
	private int l;
	private long f;
	
	public static  void pair(int l)
	{
		if(l%2==0)
		{
			System.out.println("est pair");
		}else {
			System.out.println("est impair");
		}
	}
	public static int Produit(int s,int v)
	{
		return s*v;
	}
	public static void Premier(int nbr )
	{
		int reste;
		  boolean flag = true;
		 
		        
		  for(int i=2; i <= nbr/2; i++)
		  {
		     //nombre est divisible par lui-meme
		     reste = nbr%i;
		            
		     //si le reste est 0, alors arrete la boucle. Sinon continuer la boucle
		     if(reste == 0)
		     {
		        flag = false;
		        break;
		     }
		  }
		  //si flag est true, alors nombre est premier, sinon non premier
		  if(flag) {
		     System.out.println(nbr + " est un nombre premier");
		  }
		  else {
		     System.out.println(nbr + " n'est pas un nombre premier");
		  }
		  
	}
	public static int Fact(int l)
	{
		int s=1;
		if (l==0)
		{
			return s= 1;
		}else if(l>0)
		{
			return s=l*Fact(l-1);
		}
		return s;
	}
	
	public static void main(String []args)
	{
		
		pair(4);
		System.out.println( Produit(3,8));
		Premier(7);
		System.out.println(Fact(3));
		
	}

}
