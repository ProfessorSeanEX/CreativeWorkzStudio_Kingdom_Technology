## Key Architectural Principles

### 1. Heavy Documentation = Intentional

**5:1 to 7:1 documentation-to-code ratio is DESIRED** for teaching paradigm

This is not:
- Documentation debt to be "paid down"
- Verbosity to be "refactored out"
- Inefficiency to be "optimized away"

This is:
- **Primary value delivery mechanism**
- **Paradigm establishment method**
- **Protection against misguided "improvements"**

### 2. Each Piece Exists For Reasons

**Every component serves Kingdom + New Tech fusion purpose**

Documentation must explain:
- Why this coefficient exists
- What mathematical meaning it carries
- How it integrates with CPI-SI system
- What would break if removed or "simplified"

### 3. Modularization Thresholds

**Game Development Reality**: Modularization enables isolation, testing, debugging. We WANT it when practical.

**Hard Thresholds** (Modularization REQUIRED):

| **Threshold**    | **Action Required**                              | **Rationale**                                            |
| ---------------- | ------------------------------------------------ | -------------------------------------------------------- |
| **2,000 lines**  | MUST modularize before merging                   | Cognitive load limit, editor performance, code review    |
| **2,500 lines**  | CRITICAL — violates Nova Dawn architectural rule | Beyond human comprehension in single sitting             |
| **3,000+ lines** | Architectural failure — redesign required        | No single file should reach this even with teaching code |

**Soft Thresholds** (Modularization RECOMMENDED):

| **Threshold**   | **Guidance**                                        | **Why**                                       |
| --------------- | --------------------------------------------------- | --------------------------------------------- |
| **1,200-1,500** | Consider modularization IF logical splits exist     | Approaching cognitive limits                  |
| **1,500-1,800** | Actively plan modularization strategy               | Game engine compilation time increases        |
| **1,800-2,000** | Finalize module boundaries, begin splitting process | Last comfortable window before MUST threshold |

**Key Principle**: Modularization is PREFERRED when done right, but each module MUST maintain 5:1 teaching density.

#### Why These Thresholds?

**Cognitive Load**:
- Human working memory: ~7±2 items
- Single-file comprehension ceiling: ~2,000 lines even with excellent documentation
- Beyond this, reader loses forest for trees

**Game Development Specific**:
- Compilation time increases non-linearly with file size
- Isolation for testing individual systems becomes critical
- Engine hot-reload performance degrades with large files
- Team collaboration easier with focused modules

**Teaching Code Adjustment**:
- Traditional code: 200-400 line optimal
- Teaching code with 5:1 ratio: 1,000-2,000 line range acceptable
- 2,000+ lines = even with excellent docs, too much to hold mentally

**The Rule**: When file hits 1,500 lines → start planning. When it hits 2,000 → MUST split before next merge.

#### Practical Development Workflow

**While Developing**:
```
File at 800 lines    → ✅ Continue building, maintain teaching quality
File at 1,200 lines  → ⚠️  Check: Do logical sub-modules exist? 
                          YES → Consider modularization
                          NO  → Continue, monitor growth
File at 1,500 lines  → 🟡 START PLANNING modularization strategy
                          - Identify logical boundaries
                          - Design orchestrator pattern
                          - Estimate split points
File at 1,800 lines  → 🟠 ACTIVELY SPLITTING or clear plan exists
                          - Modularization in progress
                          - Or approved exception documented
File at 2,000 lines  → 🔴 HARD STOP — MUST modularize before merge
                          - No exceptions without architectural review
                          - Blocking issue for PR approval
File at 2,500+ lines → ❌ CRITICAL — Architectural violation
                          - Immediate action required
                          - Redesign may be necessary
```

**Game Dev Benefits of Proper Modularization**:
- ✅ Faster compilation (only changed modules rebuild)
- ✅ Easier unit testing (isolated components)
- ✅ Better hot-reload performance
- ✅ Clearer debugging (focused scope)
- ✅ Team collaboration (fewer merge conflicts)
- ✅ Engine integration (smaller headers, faster parsing)

**The Balance**: We WANT modularization for game dev efficiency, but we REQUIRE teaching density in each module.

#### How to Modularize Correctly

**Acceptable triggers**:
- File approaching 1,500 lines AND logical sub-module boundaries exist
- Clear orchestrator pattern can maintain API surface
- Orchestrator pattern can be properly implemented
- Teaching integrity can be maintained across modules

**Unacceptable triggers**:
- "Files should be shorter"
- "This seems verbose"
- "Traditional best practices say..."
- "Let's optimize for line count"

### 4. Teaching Value Over Brevity

**Priority hierarchy**:

1. **Teaching effectiveness** — Does documentation teach the paradigm?
2. **Mathematical precision** — Are coefficients explained accurately?
3. **Kingdom integration** — Is Biblical anchoring clear and authentic?
4. **Paradigm protection** — Will this prevent misguided optimization?
5. **Navigation usability** — Can developers find what they need?
6. **Line count** — (LOWEST PRIORITY — irrelevant if above are satisfied)

---

