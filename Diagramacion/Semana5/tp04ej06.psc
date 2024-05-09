Algoritmo tp04ej06
	contPos = 0; contNeg = 0
	Leer num
	Mientras num != 0 Hacer
		Si num > 0 Entonces
			contPos = contPos + 1
		SiNo
			contNeg = contNeg + 1
		FinSi
		Leer num
	FinMientras
	Escribir "Total positivos: ", contPos
	Escribir "Total negativos: ", contNeg
FinAlgoritmo
