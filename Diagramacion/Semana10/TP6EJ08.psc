Algoritmo TP6EJ08
	Dimension vec[3]
	Para i<-0 Hasta 2 Con Paso 1 Hacer
		cont = 0
		Leer num
		Mientras num != 0 Hacer
			cont = cont+1
			Si cont==1 Entonces
				max = num
			SiNo
				Si num>max Entonces
					max = num
				FinSi
			FinSi
			Leer num
		FinMientras
		vec[i] = max
	FinPara
	Para j<-0 Hasta 2 Con Paso 1 Hacer
		Escribir "Max. Grupo #",j+1,": ",vec[j]
	FinPara
FinAlgoritmo
