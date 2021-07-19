const factorial = (n) => {
    let fac = 1;
    for (let i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}
console.log(factorial(6));
