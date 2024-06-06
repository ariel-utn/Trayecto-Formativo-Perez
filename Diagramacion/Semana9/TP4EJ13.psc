Algoritmo TP4EJ13
	contImpar = 0
	Leer num
	Mientras num != 0 Hacer
		Si num%2 != 0 Entonces
			ultImpar = num
			contImpar = contImpar+1
			Si contImpar==1 Entonces
				primerImpar = num
			FinSi
		FinSi
		Leer num
	FinMientras
	Escribir "Primer impar: ", primerImpar
	Escribir "Ultimo impar: ", ultImpar
FinAlgoritmo
