.586P
.model flat, stdcall
includelib kernel32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA
myBytes		BYTE	10h, 20h, 30h, 40h
myWords		WORD	8Ah, 3Bh, 44h, 5Fh, 99h
myDoubles	DWORD	1, 2, 3, 4, 5, 6
myPointer	DWORD	myDoubles

myArray		BYTE	1, 0, 3, 4, 5, 6, 7

STR1		DB		"Смирнов В.Ю, 2 курс, 6 группа", 0
STR2		DB		"Нулевой элемент присутствует в массиве", 0
STR3		DB		"Нулевой элемент отсутствует в массиве", 0

.CODE

main PROC
START:
	mov ESI, 0
	mov EAX, myDoubles[ESI + 4]
	mov EDX, [myDoubles + ESI]

	mov ESI, OFFSET myArray
	mov EAX, 0
	add AL, [ESI]
	mov ECX, 6

	c1:													; c1 is loop for sum of elements array
			add ESI, 1
			add AL, [ESI]
			loop c1
	;---------------------------------------
	mov AL, 0
	mov EBX, 1
	mov ECX, LENGTHOF myArray

	c2:
			cmp [myArray + EAX], 0
			je ct
			jne cf

	ct:
			mov EBX, 0
			INVOKE MessageBoxA, 0, OFFSET STR2, OFFSET STR1, 1
			jmp ENDC

	cf:
			add EAX, 1
			loop c2


	ENDC:
			cmp EBX, 1
			je cout2
			jne EXIT

	cout2:
			INVOKE MessageBoxA, 0, OFFSET STR3, OFFSET STR1, 1
		
	EXIT:
	
push 0
call ExitProcess

main ENDP
end main