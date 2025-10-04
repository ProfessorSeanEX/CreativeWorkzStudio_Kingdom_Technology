
## 🛠️ Implementation Guidelines

Applying the 4-block structure consistently requires clear conventions. Follow these guidelines to maintain architectural integrity across your codebase.

### 📐 Block Separation Markers

Use **visually distinct separators** between blocks to create clear "chapter breaks":

```cpp
// =============================================================================
// BLOCK NAME IN CAPS
// =============================================================================
```

The double-line separator creates visual weight—it's unmistakable in a code scan. Use ALL CAPS for block names to distinguish structural boundaries from ordinary comments.

### 🏁 Block End Tags

Each block **must include a clear end marker** for precise boundary identification:

```cpp
// === END OF METADATA BLOCK ===
// === END OF OPENING BLOCK ===
// === END OF BODY BLOCK ===
// === END OF CLOSING BLOCK ===
```

**Why End Tags Matter:**

- **🎯 Clear Boundaries** → Eliminates ambiguity about where each block ends
- **🧭 Navigation Aid** → Enables rapid jumping between block sections (search for "END OF")
- **🔬 Surgical Updates** → Makes it trivial to identify exact update targets
- **👀 Code Review** → Reviewers immediately see block scope and boundaries
- **🤖 Tooling Support** → Enables automated parsing and validation of block structure

**Consistency Rules:**

- Use `===` (triple equals) for visual distinction from regular `//` comments
- Always capitalize block names: METADATA, OPENING, BODY, CLOSING
- Place end tags **immediately before** the next block begins (no gap)

---

### 📖 Documentation Standards

Each block should guide its reader:

- **Block-level documentation** → Every block begins with a purpose comment explaining what lives there
- **Function-level documentation** → Complex functions require detailed comments **within their respective blocks**
- **Cross-block dependencies** → If Block 3 depends on Block 2 definitions, explicitly document it

**Example:**

```cpp
// === END OF OPENING BLOCK ===

// =============================================================================
// BODY BLOCK - BUSINESS LOGIC IMPLEMENTATION
// =============================================================================
// This block implements the CPI-SI coefficient calculation algorithms.
// Dependencies: Requires IdentityState from OPENING BLOCK.
```

---

### 📊 Ordering Within Blocks

Consistency within blocks matters as much as the block structure itself. Follow these recommended orderings:

<details>
<summary><strong>Block 2 (Opening) Recommended Order</strong></summary>

1. **Namespace declarations** → Organizational scope first
2. **Forward declarations** → Break circular dependencies
3. **Type aliases** → Define the vocabulary
4. **Constants** → Configuration values
5. **Enumerations** → Simple value sets
6. **Basic structures** → Data-only types (no methods)

</details>

<details>
<summary><strong>Block 3 (Body) Recommended Order</strong></summary>

1. **Complex data structures with methods** → Full-featured types
2. **Function implementations** → Either alphabetical or logical grouping
3. **Template implementations** → Generic algorithms
4. **Specialized algorithms** → Domain-specific processing

</details>

<details>
<summary><strong>Block 4 (Closing) Recommended Order</strong></summary>

1. **Validation functions** → Correctness checks
2. **Compile-time assertions** → Build-time guarantees
3. **Runtime checks** → Dynamic verification (if enabled)
4. **Testing utilities** → Helper functions
5. **Namespace closures** → Scope cleanup

</details>

---
