Algoritmo ejemploVector
	/// DECLARACION DEL VECTOR
	tam = 100
	Dimension vec[100]
	/// ASIGNACION EN UN ELEMENTO DEL VECTOR
	vec[0] = 1
	/// LEER UN NUMERO Y GUARDARLO EN UN ELEMENTO DEL VECTOR
	vec[1] = num
	/// MOSTRAR UN ELEMENTO DEL VECTOR
	/// PONER VECTOR EN CERO
	Para i<-0 Hasta tam-1 Con Paso 1 Hacer
		vec[i] = 0
	FinPara
	/// MOSTRAR VECTOR
	Para t<-0 Hasta tam-1 Con Paso 1 Hacer
		Escribir vec[t]
	FinPara
FinAlgoritmo
