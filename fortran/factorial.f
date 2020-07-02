c	a code for factorial for an integer
c	
	program factorial
	
	implicit real(a-h,o-z)
	integer fact
	fact = 1
	write(*,*)'enter the digit for factorial in integr format'
	read(*,*)n
	write(*,*)n
	do i =1,n
	fact = fact*i
	enddo
	write(*,*)'factorial=',fact
	stop
	end program factorial
