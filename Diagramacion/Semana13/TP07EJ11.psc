Algoritmo TP07EJ11
	tam = 10
	Dimension vNumeros[tam]
	cargarVector(vNumeros,tam)
	r = sumarVector(Vnumeros,tam)
	mostrarValor(r)
FinAlgoritmo

Funcion cargarVector(v,tam)
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		Leer v[i]
	FinPara
FinFuncion

Funcion mostrarValor(num)
	Escribir num
FinFuncion

Funcion r = sumarVector(v,tam)
	acu = 0
	Para x<-0 Hasta tam-1 Con Paso 1 Hacer
		acu = acu + v[x]
	FinPara
	r = acu
FinFuncion
