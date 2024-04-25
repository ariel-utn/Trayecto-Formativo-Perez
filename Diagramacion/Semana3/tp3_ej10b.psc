Algoritmo tp3_ej10b
	Leer max
	pmax = 1
	Para i<-0 Hasta 8 Con Paso 1 Hacer
		Leer num
		Si num>max Entonces
			max = num
			pmax = i+2
		FinSi
	FinPara
	Escribir 'Maximo : ',max
	Escribir "Posicion: ", pmax
FinAlgoritmo
