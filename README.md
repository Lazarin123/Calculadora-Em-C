<h2>➕➖✖️➗ Calculadora Simples em C</h2>
<p>Esta é uma calculadora básica desenvolvida na linguagem C que permite realizar as quatro operações aritméticas fundamentais: adição, subtração, multiplicação e divisão. Sinta-se à vontade para realizar seus cálculos!</p>

<h2>⚙️ Como Executar</h2>
<p>Para utilizar a calculadora, você precisará de um compilador C (como o GCC) instalado em seu sistema. Siga os passos abaixo:
Salve o código: Guarde o código-fonte da calculadora em um arquivo com a extensão .c (por exemplo, calculadora.c).</p>

<h4>Compile o código: Abra o seu terminal ou prompt de comando, navegue até o diretório onde você salvou o arquivo e execute o seguinte comando para compilar:
(gcc calculadora.c -o calculadora)
Execute a calculadora: Após a compilação ser concluída com sucesso, execute o programa com o comando:
(./calculadora)
(Em sistemas Windows, pode ser necessário usar calculadora.exe).</h4>

<h2>💡 Como Usar</h2>
<p>Ao iniciar a calculadora, você verá um menu com as opções de operações disponíveis:
Selecione a operação:
<ol>1. Soma
2. Subtração
3. Multiplicação
4. Divisão</ol>
Digite o número correspondente à operação que você deseja realizar e pressione Enter.
Em seguida, o programa solicitará que você insira os dois números para o cálculo. Digite o primeiro número e pressione Enter, depois digite o segundo número e pressione Enter novamente.
O resultado da operação será exibido na tela.</p>

<h2>🛠️ Estrutura do Projeto</h2>
<p>O projeto consiste em um único arquivo fonte em C (calculadora.c). 
  
O código contém: Função main(): Controla o fluxo principal do programa, exibindo o menu de opções, lendo a escolha do usuário e os números para o cálculo, chamando a função apropriada para a operação selecionada e exibindo o resultado.<br>
Funções para cada operação: Existem funções separadas para realizar cada uma das operações aritméticas (soma, subtracao, multiplicacao, divisao).<br> 
Cada função recebe dois números como entrada e retorna o resultado da operação.<br>
Tratamento de divisão por zero: A função de divisão inclui uma verificação para evitar a divisão por zero e exibe uma mensagem de erro caso essa situação ocorra.<br>
Estrutura de repetição: Um loop do-while é utilizado para manter o menu sendo exibido até que o usuário escolha a opção de sair.<br>
Estrutura de seleção: A instrução switch é usada para executar a função correspondente à operação escolhida pelo usuário.</p>

<h2>📚 Bibliotecas Utilizadas</h2>
stdio.h: Para operações de entrada e saída (como printf e scanf).

<h2>🔮 Próximos Passos e Melhorias Futuras</h2>
<p>Este é um projeto inicial de uma calculadora em C. No futuro, algumas melhorias podem ser implementadas, como:

Permitir a realização de cálculos mais complexos (potenciação, radiciação, etc.).<br>
Adicionar uma interface de usuário mais amigável.<br>
Implementar tratamento de erros para entradas inválidas (por exemplo, letras quando se espera números).<br>
Guardar um histórico das operações realizadas.</p>

<h1>Sinta-se à vontade para usar e explorar esta calculadora! 😊</h1>
