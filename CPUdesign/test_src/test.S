	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 0xffffff0b	
	li x4, 0xffffffab	
	# la x5, _array		
	# sb x3, 0(x5)		
	# sb x4, 1(x5)		
	la x5, _array		
	lh x6, 0(x5)		
	lh x7, 2(x5)		

_array:	
	.byte 0x12
	.byte 0x34
	.byte 0x56
	.byte 0x78

	.end			# End of file