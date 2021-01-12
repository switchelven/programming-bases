let rec pow a n = 
  match n with
  | 0 -> 1
  | _ -> a * pow a (n-1);;

pow 3 10;;