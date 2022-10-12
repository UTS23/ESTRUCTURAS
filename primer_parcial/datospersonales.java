/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package parcial09;

import javax.swing.JOptionPane;

/**
 *
 * @author usuario
 */
public class datospersonales {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       //brayan Stven Moreno Soto
               String strNombre = "";
		String strApellido = "";
		String strEdad = "";
		String strCedula = "";
                String strTelefono="";
                String strDirecion="";
		String strError = "";
		String strBlancos = "                                                   ";

		int intEdad = 0;
		int iSiga=0;
		boolean indBien=false;


		System.out.println("NOMBRE               APELLIDO               EDAD               CÉDULA         telefono    direccion ");

		while (true)

		{
			//capturar nombre
			indBien=false;
			while (indBien==false)
			{
				strError = "";
				indBien=true;
				strNombre = JOptionPane.showInputDialog("Digite su nombre : ", strNombre).toUpperCase().trim();
				if(strNombre.length()<3){
					strError += "longitud de nombre menor que 3\n";
				}
				if(strNombre.length()>15){
					strError += "longitud de nombre mayor que 15\n";
				}
				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
				}		
			}

			//capturar apellido
			indBien=false;
			while (indBien==false)
			{
				strError = "";
				indBien=true;
				strApellido = JOptionPane.showInputDialog("\nDigite su apellido : ", strApellido).toUpperCase().trim();
				if(strApellido.length()<3){
					strError += "longitud de nombre menor que 3\n";
				}
				if(strApellido.length()>15){
					strError += "longitud de nombre mayor que 15\n";
				}
				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
				}	
			}

			//capturar edad

			indBien=false;
			while (indBien==false)
			{
				strError = "";
				indBien=true;
				strEdad = JOptionPane.showInputDialog("\nDigite su edad : ", strEdad).trim();

				try{
					intEdad=Integer.parseInt(strEdad);
				}
				catch (Exception e)
				{
					strError += "debe ingresar valores numéricos\n";
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
					continue;
				}

				if(intEdad<18||intEdad>125){
					strError += "Edad fuera del rango entre 18 y 125";
				}

				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
				}
				
							
				
			}			

			//capturar cédula
			indBien=false;
			while (indBien==false)
			{
				strError = "";
				indBien=true;
				strCedula = JOptionPane.showInputDialog("\nDigite su cédula : ", strCedula).trim();
				if(strCedula.length()<9){
					strError += "longitud de la cédula es menor que 9\n";
				}
				if(strCedula.length()>12){
					strError += "longitud de la cédula es mayor que 11\n";
				}
				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
				}	
			}
                        //capturar telefono
                        indBien=false;
                        while (indBien==false)
                        { 
                                    strError = "";
				indBien=true;
				strCedula = JOptionPane.showInputDialog("\nDigite su telefono : ", strCedula).trim();
				if(strCedula.length()<9){
					strError += "longitud de la cédula es menor que 9\n";
				}
				if(strCedula.length()>12){
					strError += "longitud de la cédula es mayor que 11\n";
				}
				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
                                    
                                }        
                        //capturar direccion
                        indBien=false;
                        while (indBien==false)
                            { 
                                    strError = "";
				indBien=true;
				strCedula = JOptionPane.showInputDialog("\nDigite su telefono : ", strCedula).trim();
				if(strCedula.length()<9){
					strError += "longitud de la cédula es menor que 9\n";
				}
				if(strCedula.length()>12){
					strError += "longitud de la cédula es mayor que 11\n";
				}
				if(strError.length()>0){
					JOptionPane.showMessageDialog(null, strError);
					indBien=false;
                                    
                                }        
                   
			strNombre=strNombre+strBlancos.substring(0, 21-strNombre.length());
			strApellido=strApellido+strBlancos.substring(0, 25-strApellido.length());
			strEdad=strEdad+strBlancos.substring(0, 17-strEdad.length());
			strCedula=strCedula+strBlancos.substring(0, 12-strCedula.length());

			System.out.println( strNombre+ strApellido+ strEdad+ strCedula);
			
			iSiga=JOptionPane.showConfirmDialog(null, "Otro cliente?");
			
		
			if (iSiga!=0)
			{
				
				System.exit(0);

                        }
                }
    }
}
    }
}

    
    

