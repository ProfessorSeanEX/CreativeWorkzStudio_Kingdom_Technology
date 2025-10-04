## 📦 The 4-Block Pattern

Each of the four blocks serves a distinct architectural purpose. Think of them as the **chapters of a story**—each has its role, and you never accidentally rewrite chapter 3 when you meant to edit chapter 1.

---

### 🏷️ Block 1: Metadata Block

**Purpose:** The "Who, What, When, Why" of your file—documentation, attribution, and dependencies that orient anyone opening this file for the first time.

For **critical files** (foundation, service layers), the metadata block can contain a **Digital Genome**—comprehensive file intelligence that enables surgical code modifications. See the **[Metadata Block Guide](./metadata-block-guide.md)** for complete specifications.

#### Basic Metadata Block

```cpp
/**
 * @file example.hpp
 * @brief File purpose and description
 * @author Nova Dawn (CPI-SI System)
 * @date September 2025
 * @version 1.0
 */

#pragma once
#include <dependencies>

// === END OF METADATA BLOCK ===
```

#### Enhanced Metadata Block (Digital Genome)

For high-impact files, the metadata block can include **Biblical DNA**, **Relational DNA**, and **Technical DNA** that provide complete file intelligence:

```cpp
// ==========================================
// DIGITAL GENOME - FILE INTELLIGENCE SYSTEM
// ==========================================

// ==========================================
// BIBLICAL DNA - FOUNDATION IDENTITY
// ==========================================
// BIBLICAL_ANCHOR: [Verse matching technical purpose]
// KINGDOM_PURPOSE: [How this serves God's Kingdom]
// SPIRITUAL_FUNCTION: [Technical to spiritual connection]

// ==========================================
// RELATIONAL DNA - CHARACTER & COVENANT
// ==========================================
// RELATIONAL_IDENTITY: [Character and personality traits]
// STAKEHOLDER_SERVICE: [Who this serves and how]
// COVENANT_EXPRESSION: [Promises to developers/system/users]

// ==========================================
// TECHNICAL DNA - SYSTEM PROFILE
// ==========================================
// [See Metadata Block Guide for complete technical specifications]

// === END OF METADATA BLOCK ===
```

> [!NOTE]
> **Digital Genome Depth**  
> Not all files need full digital genomes. Match metadata depth to file criticality:  
> • **Leaf nodes** → Basic metadata sufficient  
> • **Service layer** → Enhanced metadata recommended  
> • **Foundation files** → Full digital genome required  
>  
> **Learn More:** [Metadata Block Guide](./metadata-block-guide.md) — Complete specifications for file intelligence architecture

**What Lives Here:**

- 📄 **File headers and documentation** → High-level purpose and context
- 📚 **Include statements and dependencies** → External resources needed
- 🏷️ **Version information and attribution** → Tracking and credit
- ⚖️ **Copyright and licensing** → Legal and usage terms
- 🗺️ **High-level architectural notes** → "How this fits in the bigger picture"
- 🧬 **Digital Genome (optional)** → Biblical, Relational, and Technical DNA for surgical precision

**When You Update This Block:**

- Improving documentation clarity
- Adding or removing dependencies
- Updating version numbers
- Clarifying purpose or usage
- Adding architectural context
- Enhancing file intelligence for critical files

> [!TIP]
> **Safety Level: LOW RISK** — Changes here are primarily informational. You're updating the "cover of the book," not the story inside. Most edits won't break functionality.
> 
> **Exception:** If using the **Digital Genome** pattern, updating dependency information or technical DNA requires validation to ensure accuracy—misleading metadata is worse than no metadata.

---

### 🔌 Block 2: Opening Block

**Purpose:** The "capability declaration layer"—this is where you define **what exists** and **what it CAN do**. This block establishes all capabilities, types, and structures **without exercising them**. Think of it as the toolbox that contains all available tools.

For a comprehensive understanding of the **Defining vs. Doing** architectural principle, see the **[Opening Block Guide](./opening-block-guide.md)**.

```cpp
// =============================================================================
// CAPABILITY DECLARATIONS
// =============================================================================

namespace cpi_si {

// Type definitions
using Coefficient = double;
using IdentityID = std::uint64_t;

// Structure definitions (with methods defining capabilities)
struct IdentityState {
    Coefficient cpi_coefficient;
    
    // This METHOD is still Opening Block - it DEFINES a capability
    bool is_valid() const {
        return (cpi_coefficient >= -1.0 && cpi_coefficient <= 1.0);
    }
};

// Enumerations
enum class PartnershipLevel : std::uint8_t {
    SURFACE,
    WORKING,
    COVENANT
};

// Constants and configuration
constexpr double MAX_COEFFICIENT = 1.0;

// === END OF OPENING BLOCK ===
```

> [!NOTE]
> **Key Architectural Insight**  
> Even when structures contain **methods with logic**, they remain in the Opening Block if they're **defining capabilities** rather than **exercising capabilities**. A struct definition is like a toolbox—it contains tools, but doesn't use them. See **[Opening Block Guide](./opening-block-guide.md)** for the complete classification system.

**What Lives Here:**

- 🏗️ **Namespace declarations** → Organizational scope
- 🏷️ **Type definitions and aliases** → Type system vocabulary
- 📦 **Structure definitions (with methods)** → Capability declarations
- 🎯 **Enumerations** → State and option definitions
- 👀 **Forward declarations** → Breaking circular dependencies
- ⚙️ **Constants and configuration** → Compile-time values
- 🔧 **Function declarations** → API surface definitions

**When You Update This Block:**

- Modifying the public API surface
- Adding new capability declarations
- Changing type system definitions
- Adjusting configuration values
- Defining new structures or enums
- Refactoring type names

> [!WARNING]
> **Safety Level: MEDIUM-HIGH RISK** — Changes here affect the **contract** between this file and its callers. You're modifying what others depend on, so:
> - Consider backward compatibility
> - Update all call sites accordingly
> - Validate that capability definitions match actual usage
> - **See [Opening Block Guide](./opening-block-guide.md)** for classification guidance

---

### ⚡ Block 3: Body Block

**Purpose:** The "construction and assembly layer"—this is where **components are built, connected, and prepared for activation**. This block is the manufacturing floor where blueprints (from Block 2) become ready-to-activate systems (for Block 4).

> [!NOTE]
> **Construction vs. Operation**  
> A critical distinction: Block 3 is where you **build the machine**, not where you run it. The body block constructs components and establishes connections; the closing block activates and demonstrates them. Think: *manufacturing floor* (body) vs. *showroom* (closing).  
> See **[Body Block Guide](./body-block-guide.md)** for complete construction paradigm details.

```cpp
// =============================================================================
// BUSINESS LOGIC IMPLEMENTATION
// =============================================================================

/**
 * @brief Core identity state representation
 */
struct IdentityState {
    Coefficient cpi_coefficient;
    Coefficient si_coefficient;
    
    bool is_valid() const {
        return (cpi_coefficient >= -1.0 && cpi_coefficient <= 1.0) &&
               (si_coefficient >= -1.0 && si_coefficient <= 1.0);
    }
    
    Coefficient total_activation() const {
        return (cpi_coefficient + si_coefficient) / 2.0;
    }
};

// === END OF BODY BLOCK ===
```

**What Lives Here:**

- 🏭 **Component construction logic** → Classes, structs, and implementation details
- 🔧 **Assembly functions** → Methods that connect and integrate components
- 🧩 **Integration patterns** → How pieces work together before activation
- 🏗️ **Manufacturing processes** → Factory patterns, builders, assembly lines
- 📦 **System preparation** → Getting everything ready for closing block activation
- ⚙️ **Construction utilities** → Helper functions for building and connecting

**When You Update This Block:**

- Adding new component types or classes
- Refining construction and assembly logic
- Optimizing manufacturing processes
- Implementing new integration patterns
- Improving component quality and connections
- Preparing systems for better activation

**Construction-to-Activation Flow:**  
Block 3 builds → Block 4 activates and demonstrates

> [!CAUTION]
> **Safety Level: HIGH RISK** — Changes here directly modify **behavior**. This is where bugs live and features break. Test thoroughly, but note that well-isolated Block 3 changes won't affect setup (Block 2) or validation (Block 4).

---

### ✅ Block 4: Closing Block

**Purpose:** The "quality assurance layer"—this is where you **verify correctness**, catch errors, and ensure everything works as expected. Think of it as the safety net beneath the trapeze act of Block 3.

```cpp
// =============================================================================
// VALIDATION AND EXECUTION
// =============================================================================

/**
 * @brief Validates CPI-SI mathematical constraints
 */
template<typename T>
bool validate_coefficient_range(const T& value) {
    return value >= -1.0 && value <= 1.0;
}

// Compile-time validations
static_assert(sizeof(Coefficient) == 8, "Coefficient must be 64-bit");

// Optional: Runtime tests and verification
#ifdef CPI_SI_ENABLE_RUNTIME_CHECKS
namespace runtime_validation {
    // Runtime validation functions
}
#endif

// === END OF CLOSING BLOCK ===

} // namespace cpi_si
```

**What Lives Here:**

- ✅ **Validation functions and constraints** → Correctness checks
- 🔒 **Compile-time assertions** → Build-time guarantees
- 🧪 **Runtime verification code** → Dynamic testing
- 🛠️ **Testing utilities** → Helper functions for QA
- 🧹 **Cleanup and finalization** → Resource management
- 📦 **Namespace closures** → Scope boundaries
- 🐛 **Optional debug/development code** → Troubleshooting aids

**When You Update This Block:**

- Adding quality assurance checks
- Implementing performance monitoring
- Expanding test coverage
- Adding debug utilities
- Improving error detection

> [!NOTE]
> **Safety Level: LOW-MEDIUM RISK** — Changes here improve **reliability** without modifying core functionality. You're adding safety checks, not changing what the code does. Validation improvements protect against bugs but rarely introduce them.

---
