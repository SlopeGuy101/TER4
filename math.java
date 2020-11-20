/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gwss.TER4.basicmath;

import java.util.Scanner;

/**
 *
 * @author adria
 */
public class math {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Operation: ");
        int op = in.nextInt();
        System.out.println(getResult(args[0], op));
    }
    
    public static double getResult(String sentence, int op){
        int[] values = new int[2];
        try{
            int numCount = 0;
            String[] commands = sentence.split(" ");
            for(int i = 0; i < commands.length; i++){
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
        switch (op){
            case 1:
                return values[0]*values[1];
            case 2:
                return values[0] / values[1];
            case 3:
                return values[0] + values[1];
            case 4:
                return values[0] - values[1];
            case 5:
                return Math.pow(values[0], values[1]);
            default:
                return 99.99;
        }
    }
    
}
