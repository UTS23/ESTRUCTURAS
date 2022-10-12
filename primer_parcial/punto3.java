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
public class punto3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Bryan steven Moreno Soto
         {   
        int day = 4;
        String dayType;
        String dayString;
         
        switch (day) 
        {
            case 1:  dayString = "Lunes";
                     break;
            case 2:  dayString = "Martes";
                     break;
            case 3:  dayString = "Miercoles";
                     break;
            case 4:  dayString = "Jueves";
                     break;
            case 5:  dayString = "Viernes";
                     break;
            case 6:  dayString = "Sabado";
                     break;
            case 7:  dayString = "Domingo";
                     break;
            default: dayString = "Dia invalido";
        }
         
        switch (day) 
        {
          //multiples cases sin declaraciones break
         
            case 1:  
            case 2:
            case 3:
            case 4:
            case 5:
                dayType = "Dia laborable";
                break;
            case 6:
            case 7:
                dayType = "Dia de desacanso"; 
                break;
                 
            default: dayType= "Tipo de dia invalido";
        }
         
        System.out.println(dayString+" es un "+ dayType);
    }
}
    }
    

