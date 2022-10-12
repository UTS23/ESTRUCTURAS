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
public class ventana {
    
   //BRAYAN STEVEN MORENO SOTO
    
    int  id;
    String Nombre_del_proceso;
    String fecha;
    double capacidad;
    
    //constructor

    public ventana(int id, String Nombre_del_proeceso, String fecha, double capacidad) {
        this.id = id;
        this.Nombre_del_proceso = Nombre_del_proeceso;
        this.fecha = fecha;
        this.capacidad = capacidad;
    }

    ventana() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    ventana(String string) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    //getter

    public int getId() {
        return id;
    }

    public String getNombre_del_proeceso() {
        return Nombre_del_proceso;
    }

    public String getFecha() {
        return fecha;
    }

    public double getCapacidad() {
        return capacidad;
    }
    //setter

    public void setId(int id) {
        this.id = id;
    }

    public void setNombre_del_proeceso(String Nombre_del_proeceso) {
        this.Nombre_del_proceso = Nombre_del_proeceso;
    }

    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    public void setCapacidad(double capacidad) {
        this.capacidad = capacidad;
    }
    
    @Override
  public String toString(){
    return "id:"+getId()+ "Nombre del proceso es:"+getNombre_del_proeceso()+"."
            +"la fecha es:"+ getFecha()+"la capacidad es:"+getCapacidad();
}
   
    
    
}
