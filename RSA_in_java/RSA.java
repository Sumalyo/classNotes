

import java.util.Scanner;

public class RSA

{

    static int multiply(int x , int y)//multiplication by la francis

    {

        if (y==0)

        return 0;

        int z = multiply(x,y>>1);

        if(y-((y>>1)<<1)==0)

        return z<<1;

        else

        return x+(z<<1);

    }

    static int modexp(int x , int y , int N)

    {

        if(y==0)

        return 1;

        int z = modexp(x,y>>1,N);

         if(y-((y>>1)<<1)==0)

        return ((multiply(z,z))%N);

        else

        return ((multiply(x,(multiply(z,z))))%N);

    }

    /*

     * THE ABOVE TWO METHODS ARE EXTREAMELY EFFICIENT METHODS FOR MULTIPLICATION AND EXPONTIETION

    */

    /*

     * This Method is used to encrypt or decrypts the message in RSA to decrpyt enter d>>e

     */

    static int  excrypt(int N,int e , int x)

    {

        int y=modexp(x,e,N);

        return y;

    }

    //THIS IS THE PRIVATE PARTS OF BOB FOR CAlculating his PRIVATE KEY

    public static long solve(long a, long b)

    {

        long x = 0, y = 1, lastx = 1, lasty = 0, temp;

        while (b != 0)

        {

            long q = a / b;

            long r = a % b;

 

            a = b;

            b = r;

 

            temp = x;

            x = lastx - q * x;

            lastx = temp;

 

            temp = y;

            y = lasty - q * y;

            lasty = temp;            

        }

        return lasty;

        

    }

    public static long calcED(int p,int q,int e)

    {

          p=p*q;

         long d = solve(p,e);

         if (d<0)

         d=p-((-1*d)%p);

         return d;

         // pX+eY=1;

    }

  public static void main(String[] args)

     {

         Scanner sc = new Scanner(System.in);
      System.out.println("Enter the message");
      String msg = sc.nextLine();

         System.out.println("Enter The  Public Key");

         int N = sc.nextInt();

         System.out.println("Enter The  Exponent");

         int e = sc.nextInt();

         

         System.out.println("The   message");int len = msg.length();

        

        

            for(int i=0;i<len;i++)

         {

              

             int x = (int)msg.charAt(i);

             

             System.out.print(x+" ");

             

         }

        

        System.out.println();

         System.out.println("This is the");

        System.out.println("ENCRYPTED MESSAGE");

        System.out.println();

         System.out.println();

        for(int i=0;i<len;i++)

         {

              

             int x = (int)msg.charAt(i);

             

             int ec = excrypt(N,e,x);

             System.out.print(ec+",");

             

         }

     }

     public static void main(int[] msg)

     {

         Scanner sc = new Scanner(System.in);   

         System.out.println("Enter The  Public Key");

         int N = sc.nextInt();

         System.out.println("Enter The  Exponent");

         int e = sc.nextInt();

         

         System.out.println("The   message");int len = msg.length;

        

        

            for(int i=0;i<len;i++)

         {

              

             int x = msg[i];

             

             System.out.print(x+" ");

            

         }

          System.out.println();

         System.out.println("This is the");

        System.out.println("ENCRYPTED MESSAGE");

        System.out.println();

         System.out.println();

        for(int i=0;i<len;i++)

         {

              

             int x = msg[i];

             

             int ec = excrypt(N,e,x);

             System.out.print(ec+" ");

             //enc=enc+ec;

         }

         

       

     }

}

/*

I LOVE DIYA

73 32 76 79 86 69 32 68 73 89 65 

IS ENCRYPTED WITH RSA (N=1142,E=17)[N IS THE PUBLIC KEY E IS THE EXPONENT PUBLISHED]

TO GIVE

{973,780,938,183,966,949,780,48,973,1129,1031}



{973,780,938,183,966,949,780,48,973,1129,1031}

73 32 76 79 86 69 32 68 73 89 65 

IS GIVE BACK WITH D=503 (TO BE USED AS E THEN)

*/
