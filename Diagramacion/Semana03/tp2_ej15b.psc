Algoritmo tp2_ej15b
	Leer anio
	Si anio%4==0 Entonces
		Si (anio%100 != 0) || (anio%400 == 0) Entonces
			Escribir 'Es bisiesto'
		SiNo
			Escribir 'No es bisiesto'
		FinSi
	SiNo
		Escribir 'No es bisiesto'
	FinSi
FinAlgoritmo
