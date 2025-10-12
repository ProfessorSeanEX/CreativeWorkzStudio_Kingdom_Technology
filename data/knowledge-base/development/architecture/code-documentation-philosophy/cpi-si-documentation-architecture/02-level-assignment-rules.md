## Level Assignment Rules (Complexity-Driven)

### MAIN SECTION Level
- **Major architectural containers** or fundamental system divisions
- **Example**: "CORE CPI-SI MATHEMATICAL TYPE DEFINITIONS"

### SUB-SECTION (HEADER) Level  
- **Major conceptual groupings** within main sections
- **Example**: "Basic Mathematical Types", "Enumeration Types"

### SUB-HEADER Level
- **Individual simple items** OR categories needing visual separation
  - Single typedef/using declarations (e.g., `using Coefficient = double;`)
  - Simple structs with minimal internal complexity
  - Individual enums or basic containers
  - Overall struct purpose and mathematical foundation (for complex items)

### SUB-SUB-HEADER Level
- **Logical groupings** within complex multi-component items
  - **Function Groups**: Related functions organized by operational purpose (e.g., "Validation Functions", "Mathematical Functions", "Setter Functions")
  - **Coefficient Categories**: Related coefficients grouped by mathematical domain
  - **Operation Categories**: Individual mathematical operations within complex function families
- **Reasoning**: Groups related functionality for cognitive efficiency while maintaining individual mathematical precision
- **Implementation Philosophy**: Group related pieces rather than give each individual piece its own header

## Mathematical Justification

Complex structs with coefficients need granular documentation because:

1. **Different mathematical meaning**: `cpi_coefficient` vs `si_coefficient` vs `fusion_balance`
2. **Different polarity interpretation**: What -1, 0, +1 represent for each coefficient
3. **Different CPI-SI functions**: Partnership vs structure vs balance operations  
4. **Complex mathematical relationships**: How coefficients interact in fusion operations

