#include "CPP_Rust_Bindings/include/example.h"
#include "CPP_Rust_Bindings/src/main.rs.h"
#include <algorithm>
#include <functional>
#include <set>
#include <string>
#include <unordered_map>

namespace myNamespace{

ExampleClient::ExampleClient() {}

std::unique_ptr<ExampleClient> new_example_client(){
    return std::unique_ptr<ExampleClient>(new ExampleClient());
}

int64_t ExampleClient::add(int64_t num1, int64_t num2) const {
    return num1+num2;
} 


}
