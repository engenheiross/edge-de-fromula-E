# readme
# Controle de LEDs com Sensor Ultrassônico no Arduino

## Visão Geral

Este projeto utiliza um Arduino para medir distâncias utilizando um sensor ultrassônico (HC-SR04) e controlar LEDs para indicar diferentes faixas de distância.

## Componentes Necessários

- Placa Arduino (qualquer modelo)
- Sensor Ultrassônico HC-SR04
- LEDs (Verde, Amarelo, Vermelho)
- Resistores (se necessário para limitação de corrente dos LEDs)
- Protoboard e cabos jumper

## Instalação

### Configuração do Hardware

1. **Conexão dos componentes:**
   - Conecte o sensor HC-SR04 ao Arduino conforme abaixo:
     - **VCC do sensor** ao **5V do Arduino**
     - **GND do sensor** ao **GND do Arduino**
     - **Pino Trig do sensor** ao **pino digital 9 do Arduino**
     - **Pino Echo do sensor** ao **pino digital 10 do Arduino**
   - Conecte os LEDs aos pinos do Arduino conforme definido no código.

### Configuração do Software

2. **Preparação do Arduino IDE:**
   - Abra o arquivo `ultrasonic_led_control.ino` no Arduino IDE.
   - Carregue o código para a placa Arduino.

3. **Execução:**
   - Abra o Monitor Serial do Arduino (baud rate 9600) para visualizar as leituras de distância.

## Funcionamento

O sketch Arduino realiza as seguintes operações:

- **Inicialização:**
  - Configura os pinos do Arduino para o sensor ultrassônico (trigger e echo) e para os LEDs (verde, amarelo, vermelho).
  - Inicia a comunicação serial para monitoramento.

- **Loop Principal:**
  - Gera um pulso ultrassônico para o sensor e mede a duração do eco.
  - Calcula a distância com base na duração do eco.
  - Controla os LEDs com base na distância medida:
    - Verde para distância segura (> 20 cm).
    - Amarelo para distância intermediária (10 cm a 20 cm).
    - Vermelho para distância perigosa (<= 10 cm).

- **Monitoramento:**
  - As leituras de distância são exibidas no Monitor Serial para depuração e monitoramento.

## Observações

- Certifique-se de ajustar a configuração dos pinos de acordo com o seu setup físico, se necessário.
- O código pode ser modificado para ajustar os limiares de distância ou adicionar funcionalidades adicionais conforme necessário.

## Contribuições

Agradecemos ao professor Fabio Cabrini por ajudar no nosso projeto de Edge do Challenge da Mahindra E da FIAP.

## Autor

-Membros do Grupo

    Glauco Heitor Gonçalves e Silva - RM 555978
    Lucas Himeno do Carmo - RM 555069
    Victor Hugo de Paula - RM 554787
    Otavio Santos de Lima Ferrao - RM 556452
    Gabriel Guilherme Leste - RM 558638
## Link da Simulação
Link da simulação: https://wokwi.com/projects/400968504768250881
Link do vídeo explicativo no YouTube: https://youtu.be/MnBeaJHwtrQ?si=0EdBtbGQB5J8nsiH

