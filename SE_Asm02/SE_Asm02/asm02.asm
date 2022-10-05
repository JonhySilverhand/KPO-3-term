.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA
	A	dd	2h
	B	dd	3h
	STR1	DB "Сложение чисел", 0
	STR2	DB "Результат сложения чисел = ", 0
	

.CODE

main PROC
START:
		mov eax, A
		add eax, B
		add eax, 30h

		mov STR2+27, al
		INVOKE MessageBoxA, 0, OFFSET STR2, OFFSET STR1, 0
		

		push 0
		call ExitProcess

main ENDP
end main
