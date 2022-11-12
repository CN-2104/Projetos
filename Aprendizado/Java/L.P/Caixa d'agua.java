import javax.swing.JOptionPane;  
  public class Main{
      public static void main(String args[]){
  
double resultado,altura,raio;
double pi = 3.14;
altura = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a altura da caixa d'agua","Altura",1));
raio = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o raio da caixa d'agua","Raio",1));
resultado = (int) (pi*altura*(raio*raio));
JOptionPane.showMessageDialog(null,"A caixa d'agua possui:"+resultado+"m³","Resultado",1);
}}