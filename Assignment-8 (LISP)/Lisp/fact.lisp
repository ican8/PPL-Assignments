(setq x 1)
(setq f 1)
(setq n (read))

(loop
	;(format t "~d ~%" x)
	(setq f (* f x))
	(setq x (+ x 1))
	(when (> x n) (return x))
)

(format t "factorial of ~d = ~d ~%" n f)