## CODING STANDARDS & CONVENTIONS

### C++ Code Standards

**File Organization:**
```cpp
/*
 * CPI-SI Foundation - [Component Name]
 * Kingdom Technology Implementation
 * 
 * Mathematical Foundation: [reference to equation/formula]
 * Purpose: [clear purpose statement]
 * Author: [author name]
 * Created: [creation date]
 */

#pragma once  // Preferred over include guards

// System includes first
#include <vector>
#include <memory>
#include <chrono>

// Third-party includes
#include <Eigen/Dense>
#include <boost/math/special_functions.hpp>

// Project includes (ordered by dependency)
#include "cpi-si/common/types.hpp"
#include "cpi-si/identity/types.hpp"

namespace cpi_si {
namespace identity {

class IdentityProcessor {
public:
    // Kingdom Technology principle: Clear, honest interfaces
    
    /**
     * @brief Computes identity fusion based on CPI-SI mathematics
     * @param input Identity computation input parameters
     * @return Computed identity result with validation status
     * 
     * Mathematical Foundation: I = CPI(r,c) ⊗ SI(s,m)
     * Performance: O(1) with SIMD optimization
     * Thread Safety: Thread-safe, immutable computation
     */
    IdentityResult compute_identity(const IdentityInput& input) const noexcept;

private:
    // Implementation details hidden (servant leadership principle)
    static constexpr double NUMERICAL_EPSILON = 1e-12;
    static constexpr size_t CACHE_SIZE = 1000;
    
    // Private methods use clear, descriptive names
    bool validate_input_parameters(const IdentityInput& input) const noexcept;
    double compute_fusion_coefficient(double cpi, double si) const noexcept;
};

} // namespace identity
} // namespace cpi_si
```

**Naming Conventions:**
- **Classes:** PascalCase (`IdentityProcessor`, `FusionManager`)
- **Functions/Methods:** snake_case (`compute_identity`, `validate_input`)
- **Variables:** snake_case (`identity_result`, `fusion_coefficient`)
- **Constants:** UPPER_SNAKE_CASE (`NUMERICAL_EPSILON`, `MAX_ITERATIONS`)
- **Namespaces:** snake_case (`cpi_si`, `identity`, `partnership`)
- **Files:** snake_case with component prefix (`identity_processor.hpp`)

**Memory Management Standards:**
```cpp
// RAII principle - Resource Acquisition Is Initialization
class IdentityProcessor {
private:
    // Use smart pointers for automatic memory management
    std::unique_ptr<IdentityCache> cache_;
    std::shared_ptr<BiblicalDatabase> biblical_db_;
    
    // Prefer stack allocation when possible
    IdentityParameters default_params_;
    
public:
    // Clear ownership semantics
    std::unique_ptr<IdentityResult> process_identity(IdentityInput input) const {
        // No raw pointers in public interfaces
        return std::make_unique<IdentityResult>(compute_identity(input));
    }
    
    // Move semantics for efficiency
    IdentityProcessor(IdentityParameters params) noexcept
        : default_params_(std::move(params)) {}
};
```

**Error Handling Standards:**
```cpp
// Result<T, Error> pattern for error handling
template<typename T>
class Result {
public:
    // Construction
    static Result success(T value) { return Result(std::move(value)); }
    static Result error(const std::string& message) { return Result(message); }
    
    // Query
    bool is_success() const noexcept { return has_value_; }
    bool is_error() const noexcept { return !has_value_; }
    
    // Access (throws if misused - fail fast principle)
    const T& value() const { 
        if (!has_value_) throw std::runtime_error("Accessing error result as value");
        return value_;
    }
    
    const std::string& error() const {
        if (has_value_) throw std::runtime_error("Accessing value result as error");
        return error_message_;
    }
    
private:
    bool has_value_;
    T value_;
    std::string error_message_;
};

// Usage in CPI-SI code
Result<IdentityResult> IdentityProcessor::compute_identity_safe(const IdentityInput& input) const {
    // Validate inputs (truth in communication principle)
    if (!validate_input_parameters(input)) {
        return Result<IdentityResult>::error("Invalid input parameters: CPI and SI coefficients must be in [0,1]");
    }
    
    try {
        IdentityResult result = compute_identity(input);
        
        // Validate outputs
        if (!validate_result_stability(result)) {
            return Result<IdentityResult>::error("Numerical instability detected in identity computation");
        }
        
        return Result<IdentityResult>::success(std::move(result));
    }
    catch (const std::exception& e) {
        return Result<IdentityResult>::error(std::string("Computation failed: ") + e.what());
    }
}
```

### Rust Code Standards

**File Organization:**
```rust
//! CPI-SI Foundation - Biblical Validation Module
//! Kingdom Technology Implementation - Safety Critical Component
//!
//! This module provides guaranteed-safe moral constraint validation
//! based on scriptural principles integrated into the CPI-SI system.
//!
//! Mathematical Foundation: Moral_Validity = ∑(Scripture_Relevance × Principle_Alignment)
//! Safety Guarantee: Memory safe, data race free, panic free in release mode

use std::ffi::{CStr, CString};
use std::sync::Arc;
use parking_lot::RwLock;
use anyhow::{Result, Context};

// Public C interface for integration with C++
#[repr(C)]
pub struct MoralValidationResult {
    pub is_valid: bool,
    pub confidence_score: f64,
    pub primary_concern: *const std::os::raw::c_char,
}

/// Biblical validation engine with guaranteed memory safety
pub struct BiblicalValidator {
    scripture_database: Arc<RwLock<ScriptureDatabase>>,
    validation_cache: Arc<RwLock<ValidationCache>>,
}

impl BiblicalValidator {
    /// Creates new validator with proper error handling
    pub fn new(database_path: &str) -> Result<Self> {
        let database = ScriptureDatabase::open(database_path)
            .context("Failed to open biblical foundation database")?;
        
        Ok(Self {
            scripture_database: Arc::new(RwLock::new(database)),
            validation_cache: Arc::new(RwLock::new(ValidationCache::new(1000))),
        })
    }
    
    /// Validates action against biblical principles
    /// 
    /// # Safety
    /// This function is memory safe and will never panic in release mode
    pub fn validate_action(&self, action_description: &str) -> Result<MoralValidationResult> {
        // Check cache first (performance optimization)
        if let Some(cached_result) = self.check_validation_cache(action_description) {
            return Ok(cached_result);
        }
        
        // Perform validation computation
        let validation_result = self.compute_moral_validation(action_description)
            .context("Failed to compute moral validation")?;
        
        // Cache result for future queries
        self.cache_validation_result(action_description, &validation_result);
        
        Ok(validation_result)
    }
    
    // Private implementation methods
    fn compute_moral_validation(&self, action: &str) -> Result<MoralValidationResult> {
        // Implementation with guaranteed safety...
        unimplemented!("Safe implementation details")
    }
}

// C interface for C++ integration
#[no_mangle]
pub extern "C" fn validate_moral_constraint(action_description: *const std::os::raw::c_char) -> MoralValidationResult {
    // Safe conversion from C string
    let action_str = match unsafe { CStr::from_ptr(action_description) }.to_str() {
        Ok(s) => s,
        Err(_) => return MoralValidationResult::invalid("Invalid UTF-8 in action description"),
    };
    
    // Global validator instance (initialized once, thread-safe)
    static VALIDATOR: std::sync::OnceLock<BiblicalValidator> = std::sync::OnceLock::new();
    let validator = VALIDATOR.get_or_init(|| {
        BiblicalValidator::new("data/biblical/scripture.db")
            .expect("Failed to initialize biblical validator")
    });
    
    // Perform validation with error recovery
    match validator.validate_action(action_str) {
        Ok(result) => result,
        Err(_) => MoralValidationResult::invalid("Validation computation failed"),
    }
}
```

**Naming Conventions (Rust):**
- **Structs/Enums:** PascalCase (`BiblicalValidator`, `MoralValidationResult`)
- **Functions:** snake_case (`validate_action`, `compute_moral_validation`)
- **Variables:** snake_case (`action_description`, `validation_result`)
- **Constants:** UPPER_SNAKE_CASE (`MAX_CACHE_SIZE`, `DEFAULT_CONFIDENCE`)
- **Modules:** snake_case (`biblical_validation`, `trust_evolution`)

---

