c	matrix multiplicaton
c--------------------------------------------------------------
	implicit real(a-h,o-z)
	integer :: ii,jj
	real,dimension(100,100) :: a,b,c
	write(*,*)'enter the row x colomn dimension of A matrix'
	read(*,*)k,l
	write(*,*)'enter the row x colomn dimension of B matrix'
	read(*,*)m,n
	if (m.ne.l)then
	write(*,*)'check the dimension of matrices for multiplicaton'
	stop
	else
	write(*,*)'enter 1st matrix row wise'
	do 10 i=1,k
	do 11 j=1,l
	read(*,*)a(i,j)
11	continue
10	continue
	write(*,*)'enter 2nd matrix row wise'
	do 12 i=1,l
	do 13 j=1,m
	read(*,*)b(i,j)
13	continue
12	continue
c	matrix multiplication
	do 14 i=1,k
	do 15 j=1,m
	c(i,j) = a(i,j) * b(j,i)
15	continue
14	continue
c	write out the multiplied matrix 
20	format(10f5.2)
	do 16 i=1,k
	write(*,20)(c(i,j),j=1,m)
16	continue	
	endif
	stop
	end
