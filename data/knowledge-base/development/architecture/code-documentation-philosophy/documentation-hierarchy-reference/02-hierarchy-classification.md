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

