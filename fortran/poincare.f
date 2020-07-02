	program poincare
	implicit real(a-h,o-z)
	
	real lmg(z,t,h0,h,w)
	real z,t,h0,h,w
	q = z(1,1)
	p = z(1,2)
	drive = h0 + h * cos(w * t)
	sterm = sqrt(1.0 - 4.0 * q *p)
	qdot = drive * sterm * sin(p)
	pdot = 4.0 * q * (1.0 -(drive * cos(p)/sterm)
	
