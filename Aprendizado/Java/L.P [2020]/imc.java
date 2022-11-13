import javax.swing.JOptionPane;

 class imc{

public static void main(String args[]){

double peso,altura,resultado;

altura= Double.parseDouble(JOptionPane.showInputDialog(null,"Insira a altura (em metros)","altura",3));
peso= Double.parseDouble(JOptionPane.showInputDialog(null,"Insira o peso (em kg)","peso",3));
resultado= (peso/(altura*altura));

if (resultado<17){
JOptionPane.showMessageDialog(null,"Muito abaixo do peso","IMC",2);
}
if ((resultado>=17)&&(resultado<=18.49)){
JOptionPane.showMessageDialog(null,"Abaixo do peso","IMC",2);;
}
if ((resultado>=18.5)&&(resultado<=24.99)){
JOptionPane.showMessageDialog(null,"Peso Normal","IMC",1);
}
if ((resultado>=25)&&(resultado<=29.99)){
JOptionPane.showMessageDialog(null,"Acima do peso","IMC",2);
}
if ((resultado>=30)&&(resultado<=34.99)){
JOptionPane.showMessageDialog(null,"Obesidade I","IMC",2);
}
if ((resultado>=35)&&(resultado<=39.99)){
JOptionPane.showMessageDialog(null,"Obesidade II (severa)","IMC",2);
}
if (resultado>=40){
JOptionPane.showMessageDialog(null,"Obesidade II (mórbida)","IMC",2);
};


}}


