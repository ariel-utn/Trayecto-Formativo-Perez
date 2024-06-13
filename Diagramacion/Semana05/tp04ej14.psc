Algoritmo tp04ej14
	Leer num
	cont = 0
	bandOrd = 1
	Mientras num != 0 Hacer
		cont = cont +1 
		Si cont > 1 Entonces
			Si ant > num Entonces
				bandOrd = 0
			FinSi
		FinSi
		ant = num
		Leer num
	FinMientras
	Si bandOrd == 1 Entonces
		Escribir "Ordenado"
	SiNo
		Escribir "No ordenado"
	FinSi
FinAlgoritmo
