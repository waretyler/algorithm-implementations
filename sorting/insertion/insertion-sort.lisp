(defun insert-sort (a)
  (loop for i from 1 to (- (length a) 1)
        do 
        (setq 
          current (nth i a) 
          k i 
          j (- i 1)
          )
        (loop 
          (when 
            (not (and (>= j 0) (> (nth j a) current)))
            (return nil))
           
          (setf (nth k a) (nth j a))
          (setq 
            k j
            j (- k 1))
        )
        (setf (nth k a) current)))

(setf
  a (list 8 -90 1234 4 20 0 1 20))

(print "Before sort")
(print a)

(insert-sort a)

(print "After sort")
(print a)
