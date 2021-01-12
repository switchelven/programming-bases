<?php
function swap($a, $b)
{
    $b = $a + $b;
    $a = $b - $a;
    $b = $b - $a;
    echo "$a, $b";
}

swap(2, 7);