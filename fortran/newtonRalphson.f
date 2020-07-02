	program newton
	!
	! Solves f(x) = 0 by Newton’s method
	!
	implicit none
	integer :: its = 0		!iteration counter
	integer :: maxits = 20		!maximum iterations
	integer :: converged = 0	!convergence flag
	real :: eps = 1.0e-6		!maximum error
	real :: x = 2			!starting guess
	! introduce a new form of the do loop
	do while (converged == 0 .and. its < maxits)
	x = x - f(x) / df(x)
	write(*,*) x, f(x)
	its = its + 1
	if (abs(f(x)) <= eps) converged = 1
	end do
	if (converged == 1) then
	write(*,*) 'Newton converged'
	else
	write(*,*) 'Newton did not converge'
	end if
	write(*,*)'the root is',x
	contains
	function f(x)
	real :: f, x
	f = x**2-1
	end function f
	function df(x)
	! first derivative of f(x)
	real :: df, x
	df = 2*x
	end function df
	end program newton
