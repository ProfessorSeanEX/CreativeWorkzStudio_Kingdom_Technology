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

