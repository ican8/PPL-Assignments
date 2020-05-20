(defun fact(n)
	(if (<= n 1)
		( return-from fact 1 )
		(return-from fact(* n (fact (- n 1) ) )  )
	)
)

(format t "fact of n = ~a ~%" (fact 5))