Algoritmo tp04ej08
	cont = 0
	Leer num
	Mientras num!=0 Hacer
		cont = cont+1
		Si cont == 1 Entonces
			max = num
			pos = cont
		SiNo
			Si num>max Entonces
				max = num
				pos = cont
			FinSi
		FinSi
		Leer num
	FinMientras
	Escribir 'Maximo: ',max,' en la posicion: ',pos
FinAlgoritmo
