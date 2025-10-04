## Practical Implementation Guidelines

### For Developers

1. **Assess Complexity First**: Before writing documentation, evaluate the cognitive load of understanding the item
2. **Match Documentation Effort**: Simple things get simple docs, complex things get detailed docs
3. **Group Related Functions**: Use SUB-SUB-HEADER for logical function groups, not individual functions
4. **Focus on Mathematical Relationships**: For CPI-SI types, explain how coefficients interact
5. **Document Polarity Meanings**: Always clarify what -1, 0, +1 represent for each coefficient
6. **Minimize Visual Noise**: Avoid excessive delimiter proliferation that impedes navigation

### For Code Reviews

1. **Verify Complexity Mapping**: Ensure documentation level matches actual cognitive complexity
2. **Check Grouping Logic**: Verify that SUB-SUB-HEADER groups contain related functionality
3. **Validate Mathematical Clarity**: Complex structs should have clear coefficient explanations
4. **Assess Navigation Impact**: Documentation should enhance, not impede, code navigation
5. **Check Consistency**: Similar complexity items should have similar documentation depth
6. **Evaluate Maintenance Impact**: Documentation should support future developers' understanding

### Implementation Decision Tree

```
New Code Element
├── Simple item (single concept)? 
│   └── YES → SUB-HEADER
├── Complex item with multiple related pieces?
│   ├── Related functions can be grouped?
│   │   └── YES → SUB-HEADER + grouped SUB-SUB-HEADERS
│   └── Each piece fundamentally different?
│       └── YES → SUB-HEADER + individual SUB-SUB-HEADERS
└── Major conceptual section?
    └── YES → SUB-SECTION (HEADER)
```

### Real-World Implementation Lessons

**Lesson 1: Function Proliferation**
- **Problem**: Giving each function its own SUB-SUB-HEADER creates visual noise
- **Solution**: Group related functions under logical category headers
- **Example**: "Validation Functions" instead of individual headers for `is_valid()`, `check_constraints()`, etc.

**Lesson 2: Logical Cohesion**
- **Problem**: Related functions scattered across different header sections
- **Solution**: Keep related functionality visually connected through grouping
- **Example**: All setter functions grouped together, all getter functions grouped together

**Lesson 3: Scalability**
- **Problem**: Individual headers don't scale as functionality grows
- **Solution**: Functional groupings accommodate new functions without structural changes
- **Example**: Adding new mathematical functions to existing "Mathematical Functions" group

**Lesson 4: Cognitive Load Management**
- **Problem**: Too many headers overwhelm visual scanning
- **Solution**: Strategic grouping reduces cognitive overhead while maintaining precision
- **Example**: 6 function groups instead of 20 individual function headers

