/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package parcial09;

/**
 *
 * @author usuario
 */
public class contadorvocales {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //brayan Steven Moreno soto
        String sPalabra ="aeronautica";
        int contador = 0;
        for(int x=0;x<sPalabra.length();x++) { 
   
}
        for(int x=0;x<sPalabra.length();x++) {
 if ((sPalabra.charAt(x)=='a') || (sPalabra.charAt(x)=='e') || (sPalabra.charAt(x)=='i') || (sPalabra.charAt(x)=='o') || (sPalabra.charAt(x)=='u')){ 
    contador++;
  }
}
        System.out.println("La palabra " + sPalabra + "contiene " + contador + " vocales");
    }
    
}
