import javax.swing.JOptionPane;
class Janela{
	
public static void main (String args[]){
	int Classe1;
	int Classe2;
	int Classe3;
	int Classe4;
	int Classe5;
	int Classe6;
	int Classe7;
	
	Classe1=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","1 Janela",
JOptionPane.QUESTION_MESSAGE));

	Classe2=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","2 Janela",
JOptionPane.QUESTION_MESSAGE));

	Classe3=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","3 Janela",
JOptionPane.QUESTION_MESSAGE));
 
	Classe4=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","4 Janela",
JOptionPane.QUESTION_MESSAGE));

	Classe5=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","5 Janela",
JOptionPane.QUESTION_MESSAGE));

	Classe6=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","6 Janela",
JOptionPane.QUESTION_MESSAGE));
 
	Classe7=
Integer.parseInt(JOptionPane.showInputDialog(null,"Insira um dado","7 Janela",
JOptionPane.QUESTION_MESSAGE));

JOptionPane.showMessageDialog(null,"O 1 dado é:"+Classe1+"\nO 2 dado é:"+Classe2+"\nO 3 dado é:"+Classe3+"\nO 4 dado é:"+Classe4+"\nO 5 dado é:"+Classe5+"\nO 6 dado é:"+Classe6+"\nO 7 dado é:"+Classe7,"Janela",
JOptionPane.INFORMATION_MESSAGE);	
	}	
	
	}