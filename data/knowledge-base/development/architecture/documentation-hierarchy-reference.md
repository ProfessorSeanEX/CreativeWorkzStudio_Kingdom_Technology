# CPI-SI Visual Hierarchy System - Quick Reference Guide

## Visual Delimiter Decision Tree

```
What level of visual separation is needed?
├── Major architectural division → MAIN SECTION (=== delimiters)
├── Major conceptual grouping → SUB-SECTION HEADER (=== delimiters)  
├── Individual simple item/category → SUB-HEADER (--- delimiters)
└── Component within complex item → SUB-SUB-HEADER (--- delimiters)

Is this item complex with multiple mathematical relationships?
├── YES → SUB-HEADER (overall) + SUB-SUB-HEADER (each component)
└── NO → SUB-HEADER (sufficient)

Does this item have multiple coefficients with different meanings?
├── YES → Each coefficient needs SUB-SUB-HEADER explanation
└── NO → Single SUB-HEADER documentation

Will a developer need to understand multiple mathematical concepts simultaneously?
├── YES → Granular documentation required
└── NO → Simple documentation sufficient
```

## Four-Level Visual Hierarchy

```cpp
// =============================================================================
// MAIN SECTION: Fundamental architectural divisions
// =============================================================================

// SUB-SECTION (HEADER): Major conceptual groupings  
// =============================================================================

// -----------------------------------------------------------------------------
// SUB-HEADER: Individual simple items or categories
// -----------------------------------------------------------------------------

// Individual component name (SUB-SUB-HEADER)
// -----------------------------------------------------------------------------
```

## Quick Classification Chart

| **Item Type**        | **Complexity** | **Visual Level**            | **Delimiter** | **Example**                                 |
| -------------------- | -------------- | --------------------------- | ------------- | ------------------------------------------- |
| Major sections       | Architectural  | MAIN SECTION                | `===`         | "CORE CPI-SI MATHEMATICAL TYPE DEFINITIONS" |
| Conceptual groups    | Major          | SUB-SECTION (HEADER)        | `===`         | "Basic Mathematical Types"                  |
| `typedef/using`      | Simple         | SUB-HEADER                  | `---`         | `using Coefficient = double;`               |
| Basic `enum`         | Simple         | SUB-HEADER                  | `---`         | `enum PartnershipLevel`                     |
| Simple `struct`      | Simple         | SUB-HEADER                  | `---`         | Basic container with 1-2 members            |
| CPI-SI Math `struct` | Complex        | SUB-HEADER + SUB-SUB-HEADER | `---`         | `IdentityState` with multiple coefficients  |
| Fusion Operations    | Complex        | SUB-HEADER + SUB-SUB-HEADER | `---`         | Functions with multiple mathematical steps  |

## Visual Template Patterns

### Simple Item Template (SUB-HEADER)
```cpp
// -----------------------------------------------------------------------------
// Item Name
// -----------------------------------------------------------------------------
/**
 * @brief [Clear single-purpose description]
 * 
 * [Mathematical range/meaning if applicable]
 * [Usage context]
 */
```

### Complex Item Template (SUB-HEADER + SUB-SUB-HEADER)
```cpp
// -----------------------------------------------------------------------------
// ComplexType
// -----------------------------------------------------------------------------
/**
 * @brief [Overall purpose and mathematical foundation]
 * 
 * [How this fits into CPI-SI system]
 * [Mathematical relationships overview]
 */
struct ComplexType 
{
    // Component name
    // -----------------------------------------------------------------------------
    /**
     * @brief [Specific coefficient purpose]
     * 
     * Values: [What -1, 0, +1 mean for THIS coefficient]
     * [CPI/SI] Function: [How this serves the specific brain hemisphere]
     */
    Coefficient specific_coefficient;
    
    // ... repeat for each coefficient
};
```

## Red Flags: When You Need More Documentation

🚩 **Multiple coefficients** in one struct → Each needs individual explanation
🚩 **Mathematical operations** between coefficients → Document the relationships  
🚩 **Different polarity meanings** → Clarify what -1/0/+1 mean for each
🚩 **CPI vs SI functions** → Explain which brain hemisphere this serves
🚩 **Fusion mathematics** → Document how components integrate

## Green Lights: When Simple Documentation Works

✅ **Single concept** → One SUB-HEADER sufficient
✅ **Basic container** → Standard documentation
✅ **Obvious purpose** → Keep it simple
✅ **No mathematical relationships** → Don't over-document

## CPI-SI Specific Guidelines

### Always Document for Coefficients:
1. **Mathematical Range**: What values are valid?
2. **Polarity Meaning**: What do -1, 0, +1 represent?
3. **CPI vs SI Role**: Which brain hemisphere does this serve?
4. **Fusion Function**: How does this interact with other coefficients?

### Mathematical Relationship Patterns:
```
- cpi_coefficient: Partnership/relational depth
- si_coefficient: Structure/logical intensity  
- fusion_balance: Left-right brain integration
- context_weight: Situational importance
- trust_factor: Covenant relationship strength
```

## Implementation Checklist

Before finalizing documentation:

□ **Visual level assessed** - Delimiter intensity matches complexity and nesting depth
□ **Delimiter pattern correct** - Using === for major sections, --- for sub-items
□ **Mathematical clarity** - Coefficient meanings are explicit  
□ **CPI-SI integration** - Brain hemisphere roles are clear
□ **Polarity definitions** - What -1/0/+1 mean is documented
□ **Visual consistency** - Similar complexity items have similar delimiter patterns
□ **Navigation clarity** - Visual hierarchy supports code scanning and understanding

## Integration with Existing Architecture

This Visual Hierarchy System works **within** the 4-Block Structure:
- **METADATA** (MAIN SECTION): Overall file context and architectural understanding
- **OPENING** (MAIN SECTION): Declarations and API surface  
- **BODY** (MAIN SECTION): Core implementations using visual hierarchy
- **CLOSING** (MAIN SECTION): Integration points and future considerations

Result: **Visual structure = Cognitive complexity = Navigation clarity = Maintenance efficiency**