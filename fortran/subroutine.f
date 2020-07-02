	program swapmain
	implicit none
	real :: a, b
	! Read in two values
	read(*,*) a, b
	call swap(a,b)
	write(*,*) a,b
	contains
	subroutine swap(x, y)
	real :: x, y, temp
	temp = x
	x = y
	y = temp
	end subroutine swap
	end program swapmain
