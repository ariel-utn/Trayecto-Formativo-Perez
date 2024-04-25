Algoritmo tp2_ej15c
	Leer anio
	Si (anio%4==0)&& ((anio%100!=0)||(anio%400==0)) Entonces
		Escribir 'Es bisiesto'
	SiNo
		Escribir 'No es bisiesto'
	FinSi
FinAlgoritmo
