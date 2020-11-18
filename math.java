/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gwss.TER4.basicmath;

/**
 *
 * @author adria
 */
public class math {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println(multiply("the numbers are 2 and 4"));
    }
    
    public static double multiply(String sentence){
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
        return values[0]*values[1];
    }
    
}
