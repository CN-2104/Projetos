import javax.swing.JOptionPane;  
  public class Areas{
      public static void main(String args[]){
int opcao;
opcao =  Integer.parseInt(JOptionPane.showInputDialog(null,"Digite o numero para calcular o volume do objeto escolhido: \n 1 para piramide \n 2 para cubo \n 3 para esfera \n 4 para cone","Escolha",1)); 

switch(opcao){

case 1: {

double altura,lado,V;
altura = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a altura da piramide","Altura",1));
lado = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o lado da piramide","Lado",1));
V = ((altura*(lado*lado))/3);
JOptionPane.showMessageDialog(null,"A piramide possui:"+V+"M³","Resultado",1);
break;
}

case 2: {

double aresta,V;
aresta = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a aresta do cubo","Aresta",1));
V = (aresta*aresta*aresta);
JOptionPane.showMessageDialog(null,"O cubo possui:"+V+"m³","Resultado",1);
break;
}

case 3: {

double raio,V;
double pi = 3.14;

raio = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o raio da esfera","Raio",1));
V = ((4*pi*(raio*raio*raio))/3);
JOptionPane.showMessageDialog(null,"A esfera possui:"+V+"m³","Resultado",1);
break;
}

case 4: {

double raio,altura,V;
double pi = 3.14;

raio = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o raio do cone","Raio",1));
altura = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a altura do cone","Altura",1));
V = ((pi*(raio*raio)*altura)/3);
JOptionPane.showMessageDialog(null,"O cone possui:"+V+"m³","Resultado",1);
break;
}


}
}}