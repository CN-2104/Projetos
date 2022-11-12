import javax.swing.JOptionPane;
	class inss{
			public static void main (String args[]){
				double salario,aliquota;

salario=
Double.parseDouble(JOptionPane.showInputDialog (null,"Digite seu salario","salario",JOptionPane.QUESTION_MESSAGE));

if (salario<=1830.29){
	aliquota=salario*0.08;
JOptionPane.showMessageDialog(null,"O valor da sua aliquota e: "+aliquota,"aliquota",JOptionPane.INFORMATION_MESSAGE);
					 }
if ((salario>=1830.30)&&(salario<=3050.52)){
	aliquota=salario*0.09;
JOptionPane.showMessageDialog(null,"O valor da sua aliquota e: "+aliquota,"aliquota",JOptionPane.INFORMATION_MESSAGE);
					 }
if ((salario>=3050.53)&&(salario<=6101.06)){
	aliquota=salario*0.11;
JOptionPane.showMessageDialog(null,"O valor da sua aliquota e: "+aliquota,"aliquota",JOptionPane.INFORMATION_MESSAGE);
					 }					 
}
}
