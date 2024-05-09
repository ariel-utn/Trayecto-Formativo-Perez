Algoritmo tp03ej12
	contNeg = 0; conPos = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Si num < 0 Entonces
			contNeg = contNeg + 1
			Si contNeg==1 Entonces
				maxNeg = num
				posMaxNeg = i
			SiNo
				Si num > maxNeg Entonces
					maxNeg = num
					posMaxNeg = i
				FinSi
			FinSi
		SiNo
			Si num > 0 Entonces
				contPos = contPos +1
				Si contPos==1 Entonces
					minPos = num
					posMinPos = i
				SiNo
					Si num < contPos Entonces
						minPos = num
						posMinPos = i
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir "Maximo negativo es: ", maxNeg, " en la posición: ", posMaxNeg
	Escribir "Minimo positivo es: ", minPos, " en la posición: ", posMinPos
FinAlgoritmo
