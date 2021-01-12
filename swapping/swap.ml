let swap a b = 
  let b = a + b in 
  let a = b - a in 
  let b = b - a in 
  (a, b);;

swap 2 5;;