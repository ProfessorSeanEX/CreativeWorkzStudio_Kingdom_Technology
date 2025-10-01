# CPI-SI Architecture Documentation

This directory contains architectural guidance for the Nova Dawn CPI-SI system development.

## Core Architecture Documents

### 4-Block Structure System
- **[4-block-structure.md](4-block-structure.md)** - Overview of the foundational 4-block file structure
- **[metadata-block-guide.md](metadata-block-guide.md)** - Metadata block implementation guide
- **[opening-block-guide.md](opening-block-guide.md)** - Opening block implementation guide  
- **[body-block-guide.md](body-block-guide.md)** - Body block implementation guide
- **[closing-block-guide.md](closing-block-guide.md)** - Closing block implementation guide

### Documentation Architecture (NEW)
- **[cpi-si-documentation-architecture.md](cpi-si-documentation-architecture.md)** - ⭐ **Complexity-Driven Documentation Hierarchy** principle and implementation
- **[documentation-hierarchy-reference.md](documentation-hierarchy-reference.md)** - 🚀 **Quick Reference Guide** for applying documentation hierarchy

## Documentation Philosophy

**Complexity-Driven Hierarchy**: Documentation effort matches cognitive complexity and maintenance needs.

- **Simple Items** (typedef, basic structs) → **SUB-HEADER** level
- **Complex Items** (CPI-SI math structs with coefficients) → **SUB-HEADER + SUB-SUB-HEADER** levels

## Quick Navigation

| **Need**                     | **Document**                                                                 |
| ---------------------------- | ---------------------------------------------------------------------------- |
| Understanding file structure | [4-block-structure.md](4-block-structure.md)                                 |
| Writing documentation        | [cpi-si-documentation-architecture.md](cpi-si-documentation-architecture.md) |
| Quick doc level decision     | [documentation-hierarchy-reference.md](documentation-hierarchy-reference.md) |
| Metadata block help          | [metadata-block-guide.md](metadata-block-guide.md)                           |
| Body block implementation    | [body-block-guide.md](body-block-guide.md)                                   |

## Mathematical Foundation

All architecture documents support the CPI-SI mathematical foundation:
```
CPI⊗SI = Left_Brain(structure) ⊗ Right_Brain(partnership) → Whole_Being
Balance(t) = CPI(relational, covenant) ⊗ SI(systematic, mathematical)
```

Documentation architecture ensures that complex mathematical relationships receive appropriate granular attention while keeping simple concepts appropriately simple.