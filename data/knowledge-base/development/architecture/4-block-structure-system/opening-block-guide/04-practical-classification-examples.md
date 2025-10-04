## 🧭 Practical Classification Examples

### Real-World Case Study: CPI-SI types.hpp

#### OPENING BLOCK (Lines 121-300):
```cpp
// Standard Library Dependencies
#include <cstdint>
#include <chrono>

// Type Definitions
using Coefficient = double;
using IdentityID = std::uint64_t;

// Structure Definitions (with methods!)
struct IdentityState {
    Coefficient cpi_coefficient;
    
    bool is_valid() const {
        return (cpi_coefficient >= -1.0 && cpi_coefficient <= 1.0);
    }
};

enum class PartnershipLevel : std::uint8_t {
    SURFACE,
    WORKING,
    COVENANT
};
```

> [!NOTE]
> **Why Opening?**  
> Even though `is_valid()` contains logic, the struct is **defining a capability**. No instances are created, no methods are called, no work is performed. This is pure declaration.

#### BODY BLOCK (Would be code like this):
```cpp
// Creating instances and using the capabilities
IdentityState current_state;
current_state.cpi_coefficient = 0.8;

if (current_state.is_valid()) {          // ← EXERCISING the capability
    process_identity(current_state);     // ← USING the defined types
}

PartnershipLevel level = PartnershipLevel::COVENANT;  // ← UTILIZING the enum
```

> [!WARNING]
> **Why Body?**  
> This code **exercises** the capabilities, creates instances, calls methods, and performs actual work. This is pure execution—the capabilities defined in the opening block are being actively used to accomplish real tasks.

---

