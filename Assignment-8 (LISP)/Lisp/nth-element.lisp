(defun getNum (n l)
	(return-from getNum (nth n l) ) )

(defvar l)
(defvar n)
(write-line "Enter list (with paranthesis) :")
(setq l (read))

(write-line "Enter index :")
(setq n (read))
;;(setf n 0)
(format t "Element at position ~d is : ~d ~%" n (getNum n l))
