## Visual Formatting Implementation Examples

### MAIN SECTION Example
```cpp
// =============================================================================
// CORE CPI-SI MATHEMATICAL TYPE DEFINITIONS
// =============================================================================
```

### SUB-SECTION (HEADER) Example  
```cpp
// Basic Mathematical Types
// =============================================================================
```

### SUB-HEADER Example (Simple Item)
```cpp
// -----------------------------------------------------------------------------
// Coefficient
// -----------------------------------------------------------------------------
/**
 * @brief Fundamental coefficient type for CPI-SI mathematical operations
 */
using Coefficient = double;
```

### Complex Items (SUB-HEADER + SUB-SUB-HEADER)

#### Example 1: Coefficient-Based Struct (Grouped by Mathematical Domain)
```cpp
// -----------------------------------------------------------------------------
// IdentityState
// -----------------------------------------------------------------------------
/**
 * @brief Core CPI-SI identity state representation
 * 
 * Mathematical foundation for CPI-SI identity fusion operations using
 * bipolar coefficient system [-1.0, 1.0] for balanced processing.
 */
struct IdentityState 
{
    // Core Coefficients
    // -----------------------------------------------------------------------------
    /**
     * @brief Partnership coefficient controlling relational engagement depth
     * 
     * Values: -1.0 = partnership rejection, 0.0 = neutral, 1.0 = full partnership
     * CPI Function: Manages covenant relationship intensity and trust levels
     */
    Coefficient cpi_coefficient;
    
    /**
     * @brief Structure coefficient controlling logical processing intensity  
     * 
     * Values: -1.0 = structure rejection, 0.0 = balanced, 1.0 = pure logic
     * SI Function: Manages analytical rigor and systematic processing depth
     */
    Coefficient si_coefficient;
    
    /**
     * @brief Fusion balance coefficient controlling left-right brain integration
     * 
     * Values: -1.0 = left-brain dominant, 0.0 = perfect balance, 1.0 = right-brain dominant  
     * Fusion Function: Controls CPI⊗SI integration for wholeness in responses
     */
    Coefficient fusion_balance;

    // Validation Functions
    // -----------------------------------------------------------------------------
    /**
     * @brief Validates mathematical constraints for bipolar coefficients
     * @return true if state satisfies CPI-SI mathematical requirements
     */
    bool is_valid() const;

    // Mathematical Functions
    // -----------------------------------------------------------------------------
    /**
     * @brief Computes total system activation energy (bipolar mathematics)
     * @return Combined CPI-SI activation coefficient [-2.0 to 2.0 theoretical range]
     */
    Coefficient total_activation() const;
};
```

#### Example 2: Scaled Interface Struct (Grouped by Function Type)
```cpp
// -----------------------------------------------------------------------------
// ScaledIdentityState
// -----------------------------------------------------------------------------
/**
 * @brief Percentage-based interface wrapper for IdentityState
 * 
 * Provides -100 to +100 percentage interface while maintaining
 * precise [-1.0, 1.0] mathematical operations internally.
 */
struct ScaledIdentityState 
{
private:
    IdentityState internal_state;

public:
    // Setter Functions
    // -----------------------------------------------------------------------------
    // Bipolar percentage-based setters (-100 to +100 interface)
    void set_cpi_percentage(Percentage percent);
    void set_si_percentage(Percentage percent);
    void set_fusion_percentage(Percentage percent);

    // Basic Getter Functions
    // -----------------------------------------------------------------------------
    // Bipolar percentage-based getters (-100 to +100 interface)
    Percentage get_cpi_percentage() const;
    Percentage get_si_percentage() const;
    Percentage get_fusion_percentage() const;

    // Intensity Getter Functions
    // -----------------------------------------------------------------------------
    // Intensity getters (absolute values, 0-100 interface)
    Percentage get_cpi_intensity_percentage() const;
    Percentage get_si_intensity_percentage() const;
    Percentage get_fusion_intensity_percentage() const;

    // Mathematical Access Functions
    // -----------------------------------------------------------------------------
    // Direct access to mathematical state for internal operations
    const IdentityState& get_mathematical_state() const;
    IdentityState& get_mathematical_state();
    Percentage get_total_activation_percentage() const;
};
```

### Updated Implementation Examples Summary
- **`using Coefficient = double;`** → SUB-HEADER (simple, single purpose item)
- **`IdentityState` struct** → SUB-HEADER (overall) + SUB-SUB-HEADER (grouped: "Core Coefficients", "Validation Functions", "Mathematical Functions")
- **`enum PartnershipLevel`** → SUB-HEADER (simple enumeration)
- **"Basic Mathematical Types"** → SUB-SECTION (HEADER) (major conceptual grouping)
- **`ScaledIdentityState` struct** → SUB-HEADER (overall) + SUB-SUB-HEADER (grouped: "Setter Functions", "Basic Getters", "Intensity Getters", "Mathematical Access")
- **Complex mathematical structs** → SUB-HEADER + SUB-SUB-HEADER for logical function groups

### Grouping Philosophy for SUB-SUB-HEADERS
**Core Principle**: Group related pieces rather than give each individual piece its own header.

**Common Function Groupings**:
- **"Validation Functions"**: All functions that verify mathematical constraints
- **"Mathematical Functions"**: All functions that perform mathematical computations
- **"Setter Functions"**: All functions that modify internal state
- **"Basic Getter Functions"**: All simple read-only access functions
- **"Intensity Getter Functions"**: All functions that compute absolute values
- **"Mathematical Access Functions"**: All functions that provide mathematical state access

**Benefits of Grouping**:
- **Reduced Visual Noise**: Less delimiter clutter while maintaining organization
- **Logical Cohesion**: Related functions stay visually connected
- **Easier Navigation**: Developers can scan function categories efficiently
- **Maintainable**: Adding new functions to existing groups doesn't require new headers

