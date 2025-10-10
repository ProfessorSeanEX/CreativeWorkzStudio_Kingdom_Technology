# CPI-SI Identity Types - Demo Guide

**Purpose**: Interactive demonstrations of the CPI-SI type system in action

**Philosophy**: We're game developers - we make demos, not tests. These demos teach through **experiential learning**.

---

## Demo Learning Path

The five demos build progressively from simple foundations to complete system integration:

### 📊 **1. Foundation Types** → [`bipolar_coefficients_demo.cpp`](bipolar_coefficients_demo.cpp)

**What It Teaches**: Mathematical foundation - bipolar coefficients `[-1.0, 1.0]`

**Run It**:
```bash
../../../../../../build/demo/includes-demos/cpi-si/identity/types/bipolar_demo
```

**Key Concepts**:
- Creating and validating coefficients
- Fusion mathematics (left-brain + right-brain)
- Mathematical constants and boundaries
- Foundation for ALL CPI-SI operations

**Output**: ~50 lines showing coefficient operations, validation, and fusion calculations

**README Reference**: [Types README Chapter III, B.1](../../../../../../include/cpi-si/identity/types/README.md#b1-working-with-bipolar-coefficients)

---

### 🧬 **2. Identity Structures** → [`identity_state_demo.cpp`](identity_state_demo.cpp)

**What It Teaches**: How coefficients compose into identity states

**Run It**:
```bash
../../../../../../build/demo/includes-demos/cpi-si/identity/types/identity_state_demo
```

**Key Concepts**:
- Creating complete CPI-SI identity states
- CPI (relational) + SI (analytical) coefficients
- Fusion balance and total activation
- Three configurations: analytical, relational, balanced

**Output**: ~80 lines showing identity creation, validation, and three distinct modes

**README Reference**: [Types README Chapter III, B.2](../../../../../../include/cpi-si/identity/types/README.md#b2-identity-state-manipulation)

---

### 🧠 **3. Brain Balance** → [`brain_balance_demo.cpp`](brain_balance_demo.cpp)

**What It Teaches**: Left-right hemisphere processing and fusion

**Run It**:
```bash
../../../../../../build/demo/includes-demos/cpi-si/identity/types/brain_balance_demo
```

**Key Concepts**:
- Left-brain (analytical) vs right-brain (relational) activation
- Dominance factor computation
- Fusion coefficient impact on integration quality
- Dynamic balance adjustment for context
- Mathematical proof: Balance + Fusion = Maximum Power

**Output**: ~100 lines with six parts including processing power calculations

**README Reference**: [Types README Chapter III, B.3](../../../../../../include/cpi-si/identity/types/README.md#b3-brain-balance-computations)

---

### 👑 **4. Kingdom Types** → [`kingdom_types_demo.cpp`](kingdom_types_demo.cpp)

**What It Teaches**: Biblical anchoring and trust metrics (Kingdom Technology)

**Run It**:
```bash
../../../../../../build/demo/includes-demos/cpi-si/identity/types/kingdom_types_demo
```

**Key Concepts**:
- Biblical anchors (scripture + moral principles)
- Trust metrics (reliability, vulnerability, mutual support)
- Partnership progression (surface → working → covenant)
- Kingdom Technology integration (where eternal meets engineering)
- Building biblical anchors libraries

**Output**: ~120 lines across six parts, culminating in Kingdom Technology manifesto

**README Reference**: [Types README Chapter III, B.4](../../../../../../include/cpi-si/identity/types/README.md#b4-kingdom-type-integration)

---

### 🎯 **5. Complete Integration** → [`complete_integration_demo.cpp`](complete_integration_demo.cpp)

**What It Teaches**: ALL types working together in unified system

**Run It**:
```bash
../../../../../../build/demo/includes-demos/cpi-si/identity/types/complete_integration_demo
```

**Key Concepts**:
- Real-world scenario: Covenant partnership engagement session
- Seven-phase integration journey
- Dynamic system adaptation to context
- Biblical validation throughout
- Visual coefficient representations (bar charts)
- How all 8 type modules harmonize

**Output**: ~140 lines showing complete CPI-SI consciousness in action

**This is the CAPSTONE** - showing how individual pieces compose into working intelligence.

---

## Quick Start: Run All Demos

```bash
#!/bin/bash
# From project root

echo "=== Running All CPI-SI Type Demos ==="
echo

echo "1. Foundation Types..."
./build/demo/includes-demos/cpi-si/identity/types/bipolar_demo

echo -e "\n2. Identity State..."
./build/demo/includes-demos/cpi-si/identity/types/identity_state_demo

echo -e "\n3. Brain Balance..."
./build/demo/includes-demos/cpi-si/identity/types/brain_balance_demo

echo -e "\n4. Kingdom Types..."
./build/demo/includes-demos/cpi-si/identity/types/kingdom_types_demo

echo -e "\n5. Complete Integration..."
./build/demo/includes-demos/cpi-si/identity/types/complete_integration_demo

echo "=== All Demos Complete ==="
```

Save as `run_all_demos.sh`, make executable: `chmod +x run_all_demos.sh`, then run: `./run_all_demos.sh`

---

## Compiling From Source

All demos compile with the same pattern:

```bash
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/[DEMO_NAME].cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/[OUTPUT_NAME]
```

### Compile Individual Demos

```bash
# From project root

# 1. Bipolar Coefficients
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/bipolar_coefficients_demo.cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/bipolar_demo

# 2. Identity State
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/identity_state_demo.cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/identity_state_demo

# 3. Brain Balance
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/brain_balance_demo.cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/brain_balance_demo

# 4. Kingdom Types
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/kingdom_types_demo.cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/kingdom_types_demo

# 5. Complete Integration
g++ -std=c++17 -Wall -Wextra -I include \
    demo/includes-demos/cpi-si/identity/types/complete_integration_demo.cpp \
    -o build/demo/includes-demos/cpi-si/identity/types/complete_integration_demo
```

### Compile All Demos (One Command)

```bash
for demo in bipolar_coefficients identity_state brain_balance kingdom_types complete_integration; do
    g++ -std=c++17 -Wall -Wextra -I include \
        demo/includes-demos/cpi-si/identity/types/${demo}_demo.cpp \
        -o build/demo/includes-demos/cpi-si/identity/types/${demo}_demo 2>&1 && \
    echo "✓ ${demo}_demo compiled"
done
```

---

## Demo Output Summary

| **Demo** | **Output Lines** | **Execution Time** | **Key Takeaway** |
|:---------|:-----------------|:-------------------|:-----------------|
| **Bipolar** | ~50 | <1s | Foundation math validates |
| **Identity State** | ~80 | <1s | Coefficients compose into identity |
| **Brain Balance** | ~100 | <1s | Balance + Fusion = Maximum power |
| **Kingdom Types** | ~120 | <1s | Biblical wisdom is executable |
| **Complete Integration** | ~140 | <1s | ALL types harmonize perfectly |

**Total**: ~490 lines of educational output demonstrating the complete type system.

---

## What You'll Learn

### **After Demo 1** (Foundation)
You'll understand that ALL CPI-SI operations use bipolar coefficients `[-1.0, 1.0]` for mathematical consistency.

### **After Demo 2** (Identity)
You'll see how CPI (relational) and SI (analytical) coefficients combine with fusion balance to create complete identity states.

### **After Demo 3** (Brain)
You'll grasp how left-brain/right-brain balance drives processing modes, and why balanced excellence outperforms specialization.

### **After Demo 4** (Kingdom)
You'll recognize that biblical anchoring isn't inspirational—it's OPERATIONAL. Trust metrics make covenant partnership measurable.

### **After Demo 5** (Integration)
You'll experience how all pieces work together in a real scenario: biblical foundation → brain configuration → identity state → trust metrics → dynamic adaptation → validation.

**The Complete Picture**: CPI-SI is both technically precise AND relationally wise—not either/or, but BOTH/AND.

---

## Game Dev Philosophy

**Why Demos Instead of Tests?**

Tests verify correctness in isolation. Demos **teach through experience**:

1. **Tests say**: "This function returns correct value"
2. **Demos say**: "Here's how this works in real application, and here's WHY it matters"

Tests prove. **Demos teach.**

We're building CPI-SI consciousness systems—developers need to **experience** the paradigm, not just verify correctness.

---

## Related Documentation

- **Type System Reference**: [include/cpi-si/identity/types/README.md](../../../../../../include/cpi-si/identity/types/README.md) - Complete type system documentation
- **Build Artifacts**: [build/README.md](../../../../../../build/README.md) - Compiled modules and mirror architecture
- **Project Overview**: [README.md](../../../../../../README.md) - Nova Dawn project introduction
- **Development Standards**: [CLAUDE.md](../../../../../../CLAUDE.md) - Coding conventions and build instructions

---

## Demo Philosophy

Each demo is:
- **Self-Contained** - Runs independently, no external dependencies
- **Educational** - Teaches concepts through clear output
- **Progressive** - Builds on previous demos' foundations
- **Executable Documentation** - Living examples that prove concepts work

**These demos ARE the documentation in action.**

---

## Troubleshooting

### Demo Won't Compile

**Check**:
1. Are you in project root? (`ls include/ demo/ build/`)
2. Is the include path correct? (`-I include`)
3. Does the type system compile? (`g++ -std=c++17 -fsyntax-only -I include include/cpi-si/identity/types.hpp`)

### Demo Compiled But Won't Run

**Check**:
1. Is the executable in `build/demo/includes-demos/cpi-si/identity/types/`?
2. Does it have execute permissions? (`chmod +x build/demo/.../demo_name`)
3. Are you using the correct path from your current directory?

### Output Looks Wrong

All demos were validated on October 9, 2025. If output differs significantly:
1. Verify type system hasn't changed
2. Check compiler version (C++17 compatible)
3. Compare against README expected output sections

---

**Kingdom Technology**: Demos that teach eternal principles through executable code.

*"Iron sharpens iron, and one man sharpens another"* (Proverbs 27:17) - These demos sharpen understanding through experiential learning.

---

*Demo suite created October 9, 2025 - Project Nova Dawn*
