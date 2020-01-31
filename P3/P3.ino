 /***************************************************************
**                                                            **
**                          Titol:                            **
**                 Display de 7 segments                      **
**                                                            **
**   Nom: mohamed oufli                     DATA: 17/01/2020  **
****************************************************************/
//************************ INCLUDE ******************************
 
 
 
//************************ VARIABLES ****************************
unsigned int temps=500 ; 
const int a=5;
const int b=11;
const int c=9;
const int d=8;
const int e=7;
const int f=6;
const int g=10;

//************************ SETUP ********************************

void setup(){                //configura el final de salida
pinMode(a,OUTPUT);
pinMode (b,OUTPUT);
pinMode (c,OUTPUT);
pinMode (d,OUTPUT);
pinMode (e,OUTPUT);
pinMode (f,OUTPUT);
pinMode (g,OUTPUT); 

  
}
//*************************** LOOP ******************************
void  loop() {                //inicia el bucle del programa
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay (temps);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,HIGH);
 delay (temps);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay (temps);
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay (temps);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,HIGH);
 delay (temps);
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,LOW);
 digitalWrite(g,LOW);
 delay (temps);
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(f,HIGH);
 digitalWrite(g,LOW);
 delay (temps);
}

//************************* FUNCIONS ****************************
