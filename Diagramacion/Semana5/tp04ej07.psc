Algoritmo tp04ej07
	cont = 0 
	Leer num
	max = num
	pos = 1
	Mientras num != 0 Hacer
		cont = cont + 1
		Si num > max Entonces
			max = num
			pos = cont
		FinSi
		Leer num
	FinMientras
	Escribir "Maximo: ", max, " en la posicion: ", pos 
FinAlgoritmo
