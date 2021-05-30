open Int;;

let min a b = (a + b - abs(a-b)) / 2;;
let max a b = (a + b + abs(a-b)) / 2;;

let rec minMax l = match l with
  | [] -> (0, 0)
  | t::q -> let cmin, cmax = minMax q in (min t cmin, max t cmax);;

minMax [1;3;5;0;9;1000;234;3523535325;2];;