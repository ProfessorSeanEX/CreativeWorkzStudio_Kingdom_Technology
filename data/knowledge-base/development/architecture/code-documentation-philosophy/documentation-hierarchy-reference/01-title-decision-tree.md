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

