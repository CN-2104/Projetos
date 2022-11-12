import javax.swing.JOptionPane;
	public class card{
		public static void main(String args[]){

	int opcao;

	String numero;
opcao = Integer.parseInt(JOptionPane.showInputDialog(null,"Escolha uma opcao:"+
"\n 1 - Para cancelamento do cartao"+
"\n 2 - Para consultar seu saldo"+
"\n 3 - Para habilitar cartao para compras no exterior"+
"\n 4 - Falar com um atendente","Janela Opcoes",3));

switch(opcao){

case 1: {
numero = JOptionPane.showInputDialog(null,""+"Digite o numero do cartao:","Janela Cancelamento do cartao",3);

if (numero.length() == 16){

JOptionPane.showMessageDialog(null,"Cartao cancelado","Cancelamento",1);


} else {

JOptionPane.showMessageDialog(null,"Cartao nao pode ser cancelado, numero nao existe \n tente novamente, caso o erro persista entre em contato com os atendentes","Cancelamento",0);
}

break;
}

case 2: {

numero = JOptionPane.showInputDialog(null,""+
"Digite o numero do cartao:"
,"Saldo",3);
JOptionPane.showMessageDialog(null,"Seu saldo e igual:"+"0"+" Reais","Saldo",1);
//o 0 deve ser importado o saldo do cliente
break;
}

case 3: {

numero = JOptionPane.showInputDialog(null,""+"Digite o numero do cartao:","Exterior",3);
if (numero.length() == 16){
JOptionPane.showMessageDialog(null,"Compras no exterior ativadas","Ativacao",1);
}else {

JOptionPane.showMessageDialog(null,"Cartao nao pode ser atividade, numero nao existe \n tente novamente, caso o erro persista entre em contato com os atendentes","Ativamento",0);
}
break;
}

case 4: {
numero = JOptionPane.showInputDialog(null,""+"Digite o numero do cartao:","Atendente",3);
JOptionPane.showMessageDialog(null,"Redirecionando para o atendente, espere alguns instantes","Atendente",1);
break;
}

default: {

JOptionPane.showMessageDialog(null,"Opcao nao encontrada, tente novamente","Janela Nao encontrado",3);
break;
}

}

}
}