fn main() 
{
    let mut a: Vec<i32> = vec![ -100, 2000, 5, 2, 7, 4, 15, 0 ];
    println!("Before sorting: {:?}", a);


    for j in 1..a.len() {
        let key: i32 = a[j];

        let mut i: usize = j - 1;
        let mut k: usize = i + 1;

        while k > 0 && a[i] > key {
            // Shift elements that are greater forward in the list
            a[k] = a[i];

            k = i;
            if i > 0 {
                i = i - 1;
            }
        }

        a[k] = key;
    }

    println!("After sorting: {:?}", a);

}
