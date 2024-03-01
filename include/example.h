#pragma once
#include <memory>

namespace myNamespace {

class ExampleClient {
public:
    ExampleClient();
    int64_t add(int64_t num1, int64_t num2) const;
};

std::unique_ptr<ExampleClient> new_example_client();


}
