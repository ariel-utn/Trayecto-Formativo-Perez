Algoritmo TP5EJ01
	cont = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		// DETERMINAR SI ES PERFECTO
		sd = 0
		Para j<-1 Hasta num-1 Con Paso 1 Hacer
			Si num%j==0 Entonces
				sd = sd+j
			FinSi
		FinPara
		Si sd==num Entonces
			Escribir "PERF"
			cont = cont+1
		FinSi
	FinPara
	Escribir "Total perfectos: ", cont
FinAlgoritmo
