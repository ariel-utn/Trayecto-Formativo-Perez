Algoritmo tp3_ej7
	cp = 0; cn = 0; cc = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Si num>0 Entonces
			cp = cp+1
		SiNo
			Si num<0 Entonces
				cn = cn+1
			SiNo
				cc = cc+1
			FinSi
		FinSi
	FinPara
	Escribir 'TOTAL POS. ',cp
	Escribir 'TOTAL NEG. ',cn
	Escribir 'TOTAL CERO. ',cc
FinAlgoritmo
