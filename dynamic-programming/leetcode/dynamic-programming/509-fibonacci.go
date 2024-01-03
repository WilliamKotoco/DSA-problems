func fib(n int) int {
    table :=[]int{0,1}
    for i:= 2; i <= n; i++{
        fib := table[i-1] + table[i-2]
        table = append(table, fib)
    }
    return table[n]

    
}
