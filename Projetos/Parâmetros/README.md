Projeto feito para apresentação de Trabalho de Conclusão de curso.
- Começo em 2019 como projeto de iniciação científica;
- Finalizado em 2022.

O Projeto consiste pelo fluxograma:
	Sensores -> Arduino -> Arduino -> Raspberry -> Banco de dados (AWS) -> Dashboard (Power BI)

Arquivos organizados em:

	- Serial (Arquivo para mostrar os dados dos sensores no serial(ph,temperatura ambiente e umidade, temperatura sonda, turbidez), contando com os arquivos individuais para debug);
	- BI (Onde é encontrado o arquivo ao qual é mostrado a dashboard geral);
	- Documentos (Onde é colocado o trabalho e um manual detalhado juntamente com as melhorias e problemas atuais do projeto);
	- Libraries (Onde é colocado as bibliotecas necessárias para rodar o arduino).
	- Individuais (Códigos para cada sensor)
	- bd.py (Arquivo que roda no raspberry para enviar os dados coletados no arduino)

	
