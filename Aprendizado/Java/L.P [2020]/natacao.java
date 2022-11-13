import javax.swing.JOptionPane;


public class natacao {
public static void main(String[] args) {
int idade;
float tempo;

idade = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite a idade do nadador",
"Janela Idade",1));
Object[] Opcoes = { "Africa", "Americas", "Asia","Europa","Oceania" };
	Object continente = JOptionPane.showInputDialog(null,"Escolha um continente", "Escolha",JOptionPane.QUESTION_MESSAGE, null, Opcoes, Opcoes [0]);

Object[] Sexos = { "Masculino", "Feminino"};
	Object sexo = JOptionPane.showInputDialog(null,"Informe o sexo", "Escolha",JOptionPane.QUESTION_MESSAGE, null, Sexos, Sexos [0]);
	if (sexo=="Masculino"){
	 tempo = Float.parseFloat(JOptionPane.showInputDialog(null, "Informe o tempo do nadador",
"Janela Tempo",1));
	JOptionPane.showMessageDialog(null, "A categoria e: "+categoria(idade)+"\n"+record50m(tempo),"Resultado",1);
	}
	if (sexo=="Feminino"){
	 tempo = Float.parseFloat(JOptionPane.showInputDialog(null, "Informe o tempo da nadadora",
"Janela Tempo",1));
	JOptionPane.showMessageDialog(null, "A categoria e: "+categoria(idade)+"\n"+record50f(tempo),"Resultado",1);
	}
	JOptionPane.showMessageDialog(null, "A associacao e: "+associacao(continente),"Resultado",1);
	JOptionPane.showMessageDialog(null, "A Campeonato local e: "+Campeonato(continente),"Resultado",1);

}

public static String record50f(float tempo){
String record = "";
if (tempo < 23.73){
record = "Novo recorde mundial";
}
return record;
}

public static String Campeonato(Object continente){
String Comp = "";
    if (continente=="Africa"){
Comp=  "Não possui Polo olímpico";
		}
    if (continente=="Americas"){
Comp=  "Jogos Pan-Americanos";
		}
    if (continente=="Asia"){
Comp=  "Jogos Asiaticos";
		}
    if (continente=="Europa"){
Comp=  "Campeonato Europeu";
		}
    if (continente=="Oceania"){
Comp=  "Não possui Polo olímpico";
		}    
return Comp;
}

public static String associacao(Object continente){
String Association = "";
    if (continente=="Africa"){
Association=  "Confederacao Africana da Natacao (CANA)";
		}
    if (continente=="Americas"){
Association=  "Uniao de Natacao das Americas (UNA)";
		}
    if (continente=="Asia"){
Association=  "Federacao de Natacao da Asia (FNA)";
		}
    if (continente=="Europa"){
Association=  "Liga Europeia de Natacao (LEN)";
		}
    if (continente=="Oceania"){
Association=  "Associacao de Natacao da Oceania (ONO)";
		}
    
return Association;
}

public static String record50m(float tempo){
String record = "";
if (tempo < 20.91){
record = "Novo recorde mundial";
}
return record;
}

public static String categoria(int idade){
String cat = "Não encotrado";

if ((idade >= 5 ) && (idade <=7)){
cat = "Infantil A";
}
if ((idade >= 8 ) && (idade <=10)){
cat = "Infantil B";
}
if ((idade >= 11 ) && (idade <=13)){
cat = "Juvenil A";
}
if ((idade >= 14 ) && (idade <=17)){
cat = "Juvenil B";
}
if (idade >= 18){
cat = "Adulto";
}
return cat;
}

}
