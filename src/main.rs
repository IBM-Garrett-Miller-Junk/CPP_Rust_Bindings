
#[cxx::bridge(namespace = "myNamespace")]
mod ffi {
    unsafe extern "C++" {
        include!("CPP_Rust_Bindings/include/example.h");
        
        type ExampleClient;

        fn new_example_client() -> UniquePtr<ExampleClient>;
        fn add(&self, num1: i64, num2:i64) -> i64;
    }
}

fn main() {
    let example_client = ffi::new_example_client();
    let output = example_client.add(5,76);
    println!("{}", output);
}
