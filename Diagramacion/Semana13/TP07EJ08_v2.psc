Algoritmo TP07EJ08_v2
	c = 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer n
		Si esBisiesto1(n)==1 Entonces
			c = c+1
		FinSi
	FinPara
	Escribir c
FinAlgoritmo

Funcion return = esBisiesto1(n)
	Si n%4==0 Entonces
		Si n%100==0 Entonces
			Si n%400==0 Entonces
				return = 1
			SiNo
				return = 0
			FinSi
		SiNo
			return = 1
		FinSi
	SiNo
		return = 0
	FinSi
FinFuncion

Funcion return = esBisiesto2(n)
	Si (n%4==0)&((n%100!=0)|(n%400==0)) Entonces
		return = 1
	SiNo
		return = 0
	FinSi
FinFuncion
