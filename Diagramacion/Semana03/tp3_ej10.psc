Algoritmo tp3_ej10
	max = 0
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer num
		Si i==0 Entonces
			max = num
			pmax = i+1
		SiNo
			Si num>max Entonces
				max = num
				pmax = i+1
			FinSi
		FinSi
	FinPara
	Escribir 'Maximo : ',max
	Escribir "Posicion: ", pmax
FinAlgoritmo
