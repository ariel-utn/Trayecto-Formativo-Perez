Algoritmo TP5EJ02v2
	contPrimo = 0; contPos = 0; total = 0
	Leer num
	Mientras num != 0 Hacer
		total = total +1
		cd = 0
		Para i<-1 Hasta num Con Paso 1 Hacer
			Si num%i==0 Entonces
				cd = cd+1
			FinSi
		FinPara
		Si cd==2 Entonces
			contPrimo = contPrimo+1
		FinSi
		Si num%2 != 0 Entonces
			contPos = contPos+1
		FinSi
		Leer num
	FinMientras
	Escribir 'Total de primos: ',contPrimo
	Escribir 'Total de impares: ',contPos
	Escribir 'Total de numeros: ',total
FinAlgoritmo
