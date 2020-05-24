all:
	gcc Calculator.c -o calculator
	gcc stringLength.c -o stringLength

clean:
	rm calculator stringLength
