Algoritmo TP5EJ12
	// NIVEL 1 - LOTE
	// PTO C
	contImpar = 0
	Para g<-1 Hasta 3 Con Paso 1 Hacer
		// NIVEL 2 - GRUPO
		// PTO A
		contPos = 0; contNeg = 0; contCero = 0
		// PTO B
		posPrimo = 0
		Para sg<-1 Hasta 5 Con Paso 1 Hacer
			Leer num
			// NIVEL 3 - LEO NUMEROS
			// PTO A
			Si num > 0 Entonces
				contPos = contPos + 1
			SiNo
				Si num < 0 Entonces
					contNeg = contNeg + 1
				SiNo
					contCero = contCero + 1
				FinSi
			FinSi
			// PTO B
			cd = 0
			Para i<-1 Hasta num Con Paso 1 Hacer
				Si num%i==0 Entonces
					cd = cd+1
				FinSi
			FinPara
			Si cd==2 Entonces
				ultPrimo = num
				posPrimo = sg 
			FinSi
			// PTO C
			Si num%2 != 0 Entonces
				contImpar = contImpar+1
			FinSi
		FinPara
		// NIVEL 2 - GRUPO
		// PTO A
		Escribir "PTO A) Total de Positivos: ", contPos
		Escribir "PTO A) Total de Negativos: ", contNeg
		Escribir "PTO A) Total de Ceros: ", contCero
		Si posPrimo > 0 Entonces
			Escribir "PTO B) Ultimo primo: ", ultPrimo, " en la posición: ", posPrimo
		SiNo
			Escribir "PTO B) No hubo primos"
		FinSi
	FinPara
	// NIVEL 1 - LOTE
	// PTO C
	Escribir "PTO C) Total de impares: ", contImpar
FinAlgoritmo
