Algoritmo tp2_ej16
	c4 = 0
	Leer n1,n2,n3,n4
	Si (n1>=7) && (n2>=7) && (n3 >=7) && (n4>=7) Entonces
		Escribir "Promociona"
	SiNo
		Si n1>=4 Entonces
			c4 = c4+1
		FinSi
		Si n2>=4 Entonces
			c4 = c4+1
		FinSi
		Si n3>=4 Entonces
			c4 = c4+1
		FinSi
		Si n4>=4 Entonces
			c4 = c4+1
		FinSi
		Si c4 == 0 Entonces
			Escribir "Recursa la materia"
		SiNo
			Si c4 >= 3 Entonces
				Escribir "Rinde examen final"
			SiNo
				Escribir "Recupera Parciales"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
