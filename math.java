/*
 * Adrian Joaquin
 * 11/2020
 * v0.5 (alpha)
 * File to perform mathematical operations on the numbers 
 * provided by the user from previous scripts.
 */
package gwss.TER4.basicmath;

import java.util.Scanner;
import java.io.File;
import java.io.IOException;


/**
 *
 * @author adria
 */
public class math {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
		File trans = new File("Math Transfer.txt");								//Read from Python transfer file
        Scanner in = new Scanner(trans);
		sentence = in.nextLine();
		int op = Integer.parseInt(args[0]);
        System.out.println(getResult(sentence, op));
    }
    
    public static void getResult(String sentence, int op){
        int[] values = new int[2];
        try{
            int numCount = 0;
            String[] commands = sentence.split(" ");
            for(int i = 0; i < 10; i++){										//isolate numbers in the equation
                for(int j = 0; j < commands.length; j++){
                    if(Integer.toString(i).equals(commands[j])){
                        numCount++;
                        values[numCount-1] = Integer.parseInt(commands[j]);
                    }
                }
            }
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.exit(1);
        }
        switch (op){															//Perform the appropriate operation
            case 1:
                return (values[1]*1.0)*values[0];
            case 2:
                return (values[1]*1.0) / (values[0]*1.0);
            case 3:
                return values[1] + values[0];
            case 4:
                return values[1] - values[0];
            case 5:
                return Math.pow(values[1], values[0]);
            default:
                System.out.err("AN ERROR OCCURED");								//Return an error message incase of erroneous data
        }
    }
    
}
