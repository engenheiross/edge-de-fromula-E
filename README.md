# readme
projeto do arduino
Arduino Ultrasonic Distance Sensor with LED Control
Este projeto utiliza um Arduino para medir distâncias com um sensor ultrassônico e controlar LEDs para indicar diferentes faixas de distância.

Componentes Necessários
Arduino (qualquer modelo)
Sensor Ultrassônico HC-SR04
LEDs (Verde, Amarelo, Vermelho)
Resistores (se necessário para limitação de corrente dos LEDs)
Breadboard e cabos jumper
Instalação
Montagem do Hardware:

Conecte o sensor ultrassônico HC-SR04 ao Arduino conforme a seguinte pinagem:
VCC do sensor ao 5V do Arduino
GND do sensor ao GND do Arduino
Trig do sensor ao pino digital 9 do Arduino
Echo do sensor ao pino digital 10 do Arduino
Conecte os LEDs aos pinos do Arduino conforme definido no código.
Configuração do Software:

Abra o arquivo ultrasonic_led_control.ino no Arduino IDE.
Carregue o código para o Arduino.
Execução:

Abra o Monitor Serial do Arduino IDE (baud rate 9600) para visualizar as leituras de distância.
Funcionamento
O sketch Arduino realiza as seguintes operações:

Inicialização:

Configura os pinos do Arduino para o sensor ultrassônico (trigger e echo) e para os LEDs (verde, amarelo, vermelho).
Inicia a comunicação serial para monitoramento.
Loop Principal:

Gera um pulso ultrassônico para o sensor e mede a duração do eco.
Calcula a distância com base na duração do eco.
Controla os LEDs com base na distância medida:
Verde para distância segura (> 20 cm).
Amarelo para distância intermediária (10 cm a 20 cm).
Vermelho para distância perigosa (<= 10 cm).
Monitoramento:

As leituras de distância são exibidas no Monitor Serial para debug e monitoramento.
Notas
Certifique-se de ajustar os pinos de acordo com a sua montagem física, se necessário.
O código pode ser modificado para ajustar os limiares de distância ou adicionar funcionalidades adicionais conforme necessário.
Contribuições
Contribuições gostariamos de agradecer o professor cabrine por nos ajudar no projeto da equipe Ares.

Autor
Nomes - Gabriel Guilherme Leste
Licença
Este projeto está licenciado sob a Licença MIT - veja o arquivo LICENSE para detalhes.
