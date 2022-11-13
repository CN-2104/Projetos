import javax.swing.JOptionPane;

class Turma{
	public static void main(String args[]){
int idades = 0;
double alturas = 0;
int i;
	for (i = 1;i<=40;i++){
idades = idades+(Integer.parseInt(JOptionPane.showInputDialog(null,"Digite a idade do estudante:"+i+" em kg","Idade",1))); 
alturas = alturas+(Double.parseDouble(JOptionPane.showInputDialog(null,"Digite a altura do estudante:"+i+" em metros","Altura",1))); 
}
System.out.println("Resultado: "+(alturas/40)+"m");
System.out.println("Resultado: "+(idades/40)+"kg");
}}
