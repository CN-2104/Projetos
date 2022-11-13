import javax.swing.JOptionPane;
       class linear{
	     public static void main(String Args[]){

double a,b,c,d,e,f,x,y;

a = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de A","Valor",3));
b = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de B","Valor",3));
c = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de C","Valor",3));
d = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de D","Valor",3));
e = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de E","Valor",3));
f = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor de F","Valor",3));
x=((c*e)-(b*f))/((a*e)-(b*d));
y=((a*f)-(c*d))/((a*e)-(b*d));
JOptionPane.showMessageDialog(null,"O valor de x e: "+x+"\nO valor de y e: "+y,"Resultados",1);
}}		