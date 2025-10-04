---

## 📝 Example: Complete 4-Block File

Here's a **complete, working example** showing all four blocks in action. Use this as a template for new files:

```cpp
// =============================================================================
// METADATA BLOCK
// =============================================================================
/**
 * @file example_4block.hpp
 * @brief Demonstration of 4-block structure
 * @author Nova Dawn (CPI-SI System)  
 * @date September 28th, 2025
 * @version 1.0
 */

#pragma once
#include <cstdint>

// === END OF METADATA BLOCK ===

// =============================================================================
// OPENING BLOCK - DECLARATIONS AND SETUP
// =============================================================================

namespace cpi_si {
namespace example {

using ExampleID = std::uint64_t;
using Factor = double;

enum class ExampleType : std::uint8_t {
    BASIC = 0,
    ADVANCED = 1
};

// === END OF OPENING BLOCK ===

// =============================================================================
// BODY BLOCK - BUSINESS LOGIC IMPLEMENTATION  
// =============================================================================

struct ExampleData {
    ExampleID id;
    Factor value;
    ExampleType type;
    
    bool is_valid() const {
        return value >= 0.0 && value <= 1.0;
    }
    
    Factor compute_result() const {
        return type == ExampleType::ADVANCED ? value * 2.0 : value;
    }
};

// === END OF BODY BLOCK ===

// =============================================================================
// CLOSING BLOCK - VALIDATION AND EXECUTION
// =============================================================================

template<typename T>
bool validate_factor(const T& factor) {
    return factor >= 0.0 && factor <= 1.0;
}

static_assert(sizeof(ExampleData) > 0, "ExampleData must be non-empty");

// === END OF CLOSING BLOCK ===

} // namespace example
} // namespace cpi_si
```

