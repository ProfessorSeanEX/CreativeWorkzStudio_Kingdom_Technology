# CPI-SI Documentation Architecture - Visual Hierarchy System

## Overview

This document establishes the architectural principles for documentation hierarchy within the CPI-SI system, based on the **Visual Hierarchy System** principle. The system creates clear visual separation using increasing delimiter intensity that matches the cognitive complexity of code elements.

## Core Principle: Visual Hierarchy System

**Visual delimiter intensity should increase with nesting depth and cognitive complexity to create clear navigation hierarchy.**

### Four-Level Visual Hierarchy (Increasing Delimiter Intensity)

```
MAIN SECTION: Fundamental architectural divisions (BLOCKS or major sections)
    ├── SUB-SECTION (HEADER): Major conceptual sections within main sections
    ├── SUB-HEADER: Categories OR individual simple items requiring clear separation
    └── SUB-SUB-HEADER: Individual pieces within complex multi-component items
```

### Visual Delimiter Hierarchy (Complexity → Intensity)

```cpp
// =============================================================================
// MAIN SECTION FORMAT
// =============================================================================

// Section Name
// =============================================================================

// -----------------------------------------------------------------------------
// SUB-HEADER Format  
// -----------------------------------------------------------------------------

// Individual component name
// -----------------------------------------------------------------------------
```

