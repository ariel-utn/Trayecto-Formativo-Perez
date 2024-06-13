Algoritmo tp3_ej9_ERROR
	// NO TIENE EN CUENTA UNA
	// LISTA DE TODOS NROS.
	// NEGATIVOS.
	// MOSTRARÍA MAXIMO = 0
	// PERO EL CERO NO FUE
	// UN INGRESO DEL USUARIO
	max = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Si num > max Entonces
			max = num
		FinSi
	FinPara
	Escribir "Maximo : ", max
FinAlgoritmo
