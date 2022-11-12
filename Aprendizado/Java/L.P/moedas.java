import javax.swing.JOptionPane;

class moedas{
		public static void main (String args[]){
	
	double Real,Moeda;
	
	Object[] itens = { "dolar", "euro", "pesos" };
	Object escolha = JOptionPane.showInputDialog(null,"Escolha uma moeda", "Escolha",JOptionPane.QUESTION_MESSAGE, null, itens, itens [0]);
	    
		if (escolha=="dolar"){
Moeda=
Double.parseDouble(JOptionPane.showInputDialog (null,"Digite quantos dolares","Converter",JOptionPane.QUESTION_MESSAGE));
Real=Moeda*4.81;
JOptionPane.showMessageDialog(null,"Voce tem:"+Real,"converter",JOptionPane.INFORMATION_MESSAGE);
		}
		if (escolha=="euro"){
Moeda=
Double.parseDouble(JOptionPane.showInputDialog (null,"Digite quantos euros","Converter",JOptionPane.QUESTION_MESSAGE));
Real=Moeda*5.45;
JOptionPane.showMessageDialog(null,"Voce tem:"+Real,"converter",JOptionPane.INFORMATION_MESSAGE);
		}
if (escolha=="pesos"){
Moeda=
Double.parseDouble(JOptionPane.showInputDialog (null,"Digite quantos pesos","Converter",JOptionPane.QUESTION_MESSAGE));
Real=Moeda*0.25;
JOptionPane.showMessageDialog(null,"Voce tem:"+Real,"converter",JOptionPane.INFORMATION_MESSAGE);
		}		
		}
}
