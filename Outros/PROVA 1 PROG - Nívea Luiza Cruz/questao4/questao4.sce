/****************************************************
* Autor: Nívea Luiza Cruz                           *
* Este programa imprime o menu e calcula a tensão   *
* e corrente dos resistores                         *
****************************************************/

printf("(1) Divisor de Tensão\n")
printf("(2) Divisor de Corrente\n")
printf("(3) Encerrar\n")
while(1) do
    op=input("Escolha uma opção: ")
    select op
    case 1 then
        ve= input("Qual o valor da fonte de tensão (V): ")
        r1= input("Qual o valor de R1 (ohms): ")
        r2= input("Qual o valor de R2 (ohms): ")
        v2= ve*r2/(r1+r2)
        printf("A TENSÃO NO RESISTOR 2 VALE %.3f V",v2)
    case 2 then
        i= input("Qual o valor da fonte de corrente (A): ")
        r1= input("Qual o valor de R1 (ohms): ")
        r2= input("Qual o valor de R2 (ohms): ") 
        i2=r1*i/(r1+r2)
        printf("A CORRENTE NO RESISTOR 2 VALE %.3f V",i2)
    case 3 then
        disp("***PROGRAMA ENCERRADO***")
        disp("***Número de cálculos realizados: ")
    end
end
