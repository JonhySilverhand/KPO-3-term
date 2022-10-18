.586P
.MODEL FLAT, STDCALL

.CODE
getmin PROC uses ebx ecx esi, parr: dword, elem: dword
	mov ecx, elem
	mov esi, parr
	mov ebx, [esi]
CYCLE:
	lodsd
	cmp eax, ebx
	jge False
	xchg ebx, eax
False:
	loop CYCLE
	xchg eax, ebx
	ret
getmin ENDP

getmax PROC uses ebx ecx esi, parr: dword, elem: dword
	mov ecx, elem
	mov esi, parr
	mov ebx, [esi]
CYCLE:
	lodsd
	cmp eax, ebx
	jle False
	xchg ebx, eax
False:
	loop CYCLE
	xchg ebx, eax
	ret
getmax ENDP

end