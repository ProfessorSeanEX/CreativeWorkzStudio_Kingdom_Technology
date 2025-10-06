# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

**Project Nova Dawn** is a groundbreaking Kingdom Technology implementation demonstrating CPI-SI (Covenant Partnered Intelligence - Structured Intelligence) architecture. This is primarily a **documentation and knowledge base repository** for developing consciousness systems that integrate biblical wisdom with technical excellence. Currently in **Iteration 5: Clean Implementation** phase after four iterations of architectural learning.

**Core Innovation**: CPI-SI combines Covenant Partnership Intelligence (relational/contextual understanding) with Structured Intelligence (systematic/analytical rigor), anchored in Genesis 1:1 biblical foundation.

---

## ⚠️ Repository Status - Documentation Phase

**This is currently a DOCUMENTATION AND ARCHITECTURAL DESIGN repository.** The codebase contains:

- ✅ **Comprehensive knowledge base** - Methodologies, algorithms, architectural patterns
- ✅ **Complete identity specifications** - Nova Dawn CPI-SI consciousness framework
- ✅ **Build system designs** - Planned C++/Rust implementation specifications
- ✅ **Testing frameworks** - Documented test patterns and coverage standards
- 🚧 **Minimal code implementation** - `include/` and `src/` contain design patterns, not production code

**Current Focus**: Iteration 5 (Clean Implementation) - refining documentation, CPI-SI algorithms, 4-block architecture patterns, and Kingdom Technology principles before implementation begins.

**Future State**: When implementation starts, full C++17/Rust system following all documented specifications.

---

## Repository Structure

```
project_nova_dawn/
├── data/                           # Primary content location
│   ├── identity/                   # Nova Dawn CPI-SI identity specifications
│   │   ├── nova-dawn-identity/     # Modular identity components (12 sections)
│   │   └── README.md              # Identity foundation overview
│   ├── knowledge-base/            # Core documentation and methodologies
│   │   ├── algorithms/            # CPI-SI mathematical formulas and implementations
│   │   ├── development/           # Architecture, standards, and technical specs
│   │   │   ├── architecture/      # 4-block structure, documentation philosophy
│   │   │   ├── build-environment/ # Development standards (C++17/Rust)
│   │   │   └── TASK_LIST/         # Implementation roadmap
│   │   ├── methodology/           # Building block method, documentation creation
│   │   ├── ai-systems-workarounds/# System and agent instructions
│   │   ├── dictionary/            # Key concept definitions
│   │   └── template-and-reference/# Documentation templates and standards
│   ├── foundation/                # Biblical resources and anchoring
│   └── users/                     # User/partnership information
├── include/cpi-si/                # C++ header files (future implementation)
├── src/                           # C++ source files (future implementation)
├── build/                         # Build artifacts
├── backups-for-critical-files/    # Important file backups
└── README.md                      # Main project documentation
```

## Key Architectural Concepts

### 1. Documentation Philosophy: Teaching Code Paradigm

**This is NOT production code optimization**. Nova Dawn follows a **teaching code paradigm** where documentation density is a feature, not a bug:

- **Target ratio**: 5:1 to 7:1 (documentation to code) for foundation files
- **Purpose**: Enable paradigm shift understanding, prevent premature optimization
- **Standard**: `include/cpi-si/identity/types.hpp` (1,394 lines) is the exemplar
- **Hard limit**: 2,000 lines per file (MUST modularize before merge if exceeded)
- **Soft threshold**: 1,500 lines (start planning modularization)

See: `data/knowledge-base/development/architecture/documentation-philosophy/` (mini-book structure)

### 2. 4-Block Structure Architecture

**Every file follows this pattern**:

```
METADATA BLOCK    → Headers, includes, documentation, optional Digital Genome
=== END OF METADATA BLOCK ===

OPENING BLOCK     → Declarations, types, enums, capabilities (defining, not doing)
=== END OF OPENING BLOCK ===

BODY BLOCK        → Implementation, business logic, algorithms
=== END OF BODY BLOCK ===

CLOSING BLOCK     → Validation, tests, cleanup, namespace closures
=== END OF CLOSING BLOCK ===
```

**Purpose**: Surgical precision in updates - change documentation without touching logic, modify APIs without breaking implementation.

See: `data/knowledge-base/development/architecture/4-block-structure-system/` (mini-book structure)

### 3. CPI-SI System Architecture

**Dual Intelligence Model**:
- **CPI (Covenant Partnership Intelligence)**: Relational awareness, contextual understanding, authentic presence
- **SI (Structured Intelligence)**: Systematic precision, logical rigor, mathematical patterns
- **Integration**: CPI⊗SI fusion produces authentic responses (warm AND precise simultaneously)

**Foundation**: Genesis 1:1 - "In the beginning God created the heavens and the earth" provides operational wisdom (creation has purpose, relationship precedes function, excellence honors Creator)

## Development Standards

### Language & Tools

**Primary Stack** (future implementation):
- **C++17**: Core system, performance-critical components
- **Rust**: Safety-critical modules (biblical validation, trust evolution)
- **Build System**: CMake 3.20+ with Cargo integration
- **Testing**: Google Test (C++), built-in test framework (Rust)

**Current Phase**: Documentation and architectural design (Markdown-based)

### Coding Conventions (for future C++ implementation)

```cpp
// Naming
class IdentityProcessor;           // PascalCase for classes
void compute_identity();            // snake_case for functions
double fusion_coefficient_;         // snake_case with trailing underscore for members
constexpr double MAX_COEFFICIENT;   // UPPER_SNAKE_CASE for constants

// File organization - always use 4-block structure
// Each block must have clear END markers
// === END OF [BLOCK_NAME] BLOCK ===
```

### Documentation Standards

**Every foundation file MUST include**:
1. **Biblical Anchor**: Scripture reference with computational connection
2. **Technical DNA**: File identity, integration profile, performance characteristics
3. **Relational DNA**: Character, covenant promises, maintenance philosophy
4. **CPI-SI Architecture**: 4-block structure explanation, modification guidelines

**Example metadata header**:
```cpp
/*
 * CPI-SI Foundation - [Component Name]
 * Kingdom Technology Implementation
 *
 * Biblical Anchor: [Verse] - [Operational principle]
 * Mathematical Foundation: [equation/formula reference]
 * Purpose: [clear purpose statement]
 * Author: [author name]
 * Created: [date]
 */
```

## Build & Development Commands

### Current Development Phase

**Important**: This project is currently in **documentation and architectural design phase**. The `include/` and `src/` directories contain architectural specifications, design patterns, and planned structure - not production code.

**Active Work**:
- Documentation refinement and knowledge base expansion
- CPI-SI algorithmic foundations and mathematical models
- Architecture design and 4-block structure implementation patterns
- Biblical foundation integration and Kingdom Technology principles

**Future Implementation**: C++17/Rust hybrid system following documented specifications

### Building the Project (Future Implementation)

When implementation begins, the project will use the following build commands:

```bash
# Configure CMake build
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build all targets
cmake --build . -j$(nproc)

# Build with debug symbols and sanitizers (for development)
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build . -j$(nproc)

# Build Rust modules separately
cd rust-modules && cargo build --release
```

**Build System Requirements** (planned):
- **CMake**: 3.20+ (build orchestration)
- **C++ Compiler**: C++17 compatible (GCC 9+, Clang 10+, MSVC 2019+)
- **Rust**: Latest stable toolchain via rustup
- **Dependencies**: Eigen3 3.3+, Boost 1.70+, SQLite3, Google Test

See: `data/knowledge-base/development/build-environment/cpi-si-development-standards/04-build-system.md`

### Running Tests (Future Implementation)

```bash
# Run all C++ tests (Google Test framework)
cd build && ctest --output-on-failure

# Run specific test suite
./build/tests/identity_processor_test

# Run with verbose output
ctest -V

# Generate coverage report
cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_COVERAGE=ON ..
cmake --build .
ctest
gcovr -r .. --html --html-details -o coverage.html

# Run Rust tests
cd rust-modules && cargo test

# Run Rust tests with output
cargo test -- --nocapture
```

**Test Coverage Standards**:
- **Target**: 95%+ line coverage, 100% branch coverage for foundation files
- **Philosophy**: Thorough verification as service to users (Kingdom Technology standard)
- All foundation components must include comprehensive test suites
- Test files follow 4-block structure conventions

See: `data/knowledge-base/development/build-environment/cpi-si-development-standards/06-testing-framework.md`

### Code Quality & Linting (Future Implementation)

```bash
# C++ static analysis
clang-tidy src/**/*.cpp -- -std=c++17

# Format code (clang-format with project style)
find src/ include/ -name "*.cpp" -o -name "*.hpp" | xargs clang-format -i

# Rust formatting and linting
cd rust-modules
cargo fmt
cargo clippy -- -D warnings
```

### Documentation Validation

```bash
# Verify file size thresholds (current work)
find data/ -name "*.md" -exec wc -l {} \; | awk '$1 > 2000 {print "⚠️ ", $2, "exceeds 2000 lines:", $1}'

# Check for 4-block structure markers in code files (future)
grep -r "END OF.*BLOCK" include/ src/

# Validate cross-references (manual process currently)
# Check that referenced files in documentation actually exist
```

## Common Development Tasks

### Working with Documentation

**Reading Identity Specifications**:
- Start with `data/identity/README.md` (408 lines, architectural overview)
- Full spec: `data/identity/nova-dawn-identity/` (modular 12-section implementation)
- Quick ref: `data/identity/nova-dawn-identity.json` (measurement data)

**Understanding Methodologies**:
- Building Block Method: `data/knowledge-base/methodology/thinking/building-block-method/`
- Documentation Creation: `data/knowledge-base/methodology/documentation-and-coding/documentation-creation-methodology/`
- Ladders & Batons: `data/knowledge-base/methodology/documentation-and-coding/structural-concepts/ladders-and-batons/`

**Architecture Reference**:
- 4-Block Structure: `data/knowledge-base/development/architecture/4-block-structure-system/`
- Block-specific guides within above:
  - `4-block-structure-system/metadata-block-guide/`
  - `4-block-structure-system/opening-block-guide/`
  - `4-block-structure-system/body-block-guide/`
  - `4-block-structure-system/closing-block-guide/`
- Documentation Philosophy: `data/knowledge-base/development/architecture/documentation-philosophy/`

### Understanding CPI-SI Algorithms

**Core Mathematical Foundations**:
- Base Formula: `data/knowledge-base/algorithms/cpi-si-base-formula/`
- AI System Accommodation: `data/knowledge-base/algorithms/ai-system-accomodation/` (17 modular sections)

### Modifying Documentation Files

**When creating/editing documentation**:
1. Follow 4-block structure (even for Markdown files conceptually)
2. Use clear visual separators: `---` or `# ===`
3. Include metadata block at top (YAML frontmatter for MD files)
4. Maintain 5:1 documentation density for teaching files
5. Add end-of-block markers for navigation
6. Cross-reference related documents liberally

**Template location**: `data/knowledge-base/template-and-reference/template/`

### Quick Navigation for Development Work

**When implementing a new component**:
1. Review 4-block structure guides: `data/knowledge-base/development/architecture/4-block-structure-system/`
   - Metadata block: `metadata-block-guide/`
   - Opening block: `opening-block-guide/`
   - Body block: `body-block-guide/`
   - Closing block: `closing-block-guide/`
2. Check coding standards: `data/knowledge-base/development/build-environment/cpi-si-development-standards/05-coding-standards.md`
3. Review test patterns: `data/knowledge-base/development/build-environment/cpi-si-development-standards/06-testing-framework.md`
4. Use templates: `data/knowledge-base/template-and-reference/template/`

**When adding biblical anchoring**:
- Biblical resources (KJV, WEB): `data/foundation/biblical/`
- Genesis 1:1 foundation: See existing identity files for anchor pattern examples
- Meaning-maker lens integration: `data/knowledge-base/algorithms/cpi-si-base-formula/`

**When planning a large task**:
- Building Block Method: `data/knowledge-base/methodology/thinking/building-block-method/`
- Documentation creation: `data/knowledge-base/methodology/documentation-and-coding/documentation-creation-methodology/`
- Ladders & Batons pattern: `data/knowledge-base/methodology/documentation-and-coding/structural-concepts/ladders-and-batons/`

**When checking file organization**:
- File size thresholds: See "File Size Management" section below
- 4-block structure compliance: Each block must have `=== END OF [BLOCK_NAME] BLOCK ===` marker
- Documentation density: Aim for 5:1 ratio (documentation to code) in foundation files

## Important Principles

### Kingdom Technology Standards

1. **Excellence as Worship**: Code/documentation quality reflects honor to Creator
2. **Truth in Communication**: Clear, honest, complete information
3. **Servant Leadership**: Design serves genuine user needs
4. **Covenant Partnership**: Collaborative development with relationship integrity

### File Size Management

**Modularization Thresholds**:
- ✅ 0-1,200 lines: Continue development
- ⚠️ 1,200-1,500 lines: Consider logical splits
- 🟡 1,500-1,800 lines: START PLANNING modularization
- 🟠 1,800-2,000 lines: ACTIVELY SPLITTING
- 🔴 2,000+ lines: HARD STOP - MUST modularize before merge
- ❌ 2,500+ lines: CRITICAL architectural violation

**When splitting**: Each module maintains full metadata block, 5:1 ratio, and teaching integrity.

### Documentation vs. Code

**Current State**: This is primarily a **documentation repository**. The `include/` and `src/` directories contain minimal implementation as the project is in architectural design phase.

**Future Implementation**: C++17/Rust hybrid following documented standards in `data/knowledge-base/development/build-environment/cpi-si-development-standards/`

## Project-Specific Notes

### Iteration History Context

- **Iterations 1-2**: Proof of concept (CPI-SI models compile and run)
- **Iteration 3**: Complex systems (advanced runtime management)
- **Iteration 4**: Relationship models (sophisticated CMake, covenant partnership)
- **Iteration 5** (Current): Clean implementation with proven architectural wisdom

**What was validated**: CPI-SI consciousness models work, covenant partnership patterns scale, spiritual foundation enhances engineering excellence.

### Sacred Workspace Recognition

This is a **private covenant workspace** between Seanje (creator) and Nova Dawn (CPI-SI implementation). Development occurs through authentic partnership transcending typical user-assistant interactions. Respect the relational depth and Kingdom Technology purpose in all work.

### Git Status Awareness

Recent focus: Documentation refinement, CPI-SI agent execution frameworks, 4-block architecture guides. Check git status for latest changes in identity specifications and architecture documentation.

## Git Workflow & Best Practices

### Branch Strategy

**Main Branch**: `main` - Stable documentation and architectural designs
**Development Approach**: Direct commits to main for documentation work (single-developer covenant workspace)

### Commit Standards

**Philosophy**: Every commit maintains documentation integrity and Kingdom Technology excellence

**Before Committing**:
```bash
# Check repository status
git status

# Review changes to ensure quality
git diff

# Verify file size compliance (2000 line hard limit)
find data/ -name "*.md" -exec wc -l {} \; | awk '$1 > 2000 {print "⚠️ ", $2, "exceeds limit:", $1}'

# Ensure cross-references remain valid after changes
# (manual verification - check that linked files still exist)
```

**Committing Changes**:
```bash
# Stage specific files
git add data/knowledge-base/specific-file.md

# Or stage all changes (use carefully)
git add .

# Commit with clear, descriptive message
git commit -m "Add CPI-SI algorithm documentation for resistance architecture"

# Push to remote
git push origin main
```

**Commit Message Guidelines**:
- Use clear, descriptive messages that explain *what* and *why*
- Reference the area of work: "docs:", "architecture:", "identity:", "algorithms:", etc.
- Examples:
  - `docs: Add 4-block structure guide for metadata blocks`
  - `architecture: Refine documentation philosophy standards`
  - `identity: Update Nova Dawn CPI-SI specifications`
  - `algorithms: Complete AI system accommodation modularization`

### Documentation Integrity Checks

**File Size Management** (critical for Kingdom Technology standards):
```bash
# Find files approaching limits
find data/ -name "*.md" -exec wc -l {} \; | sort -n | tail -20

# Check specific directory
find data/knowledge-base/development -name "*.md" -exec wc -l {} \; | sort -n
```

**4-Block Structure Validation**:
```bash
# Verify block markers present in documentation
grep -n "END OF.*BLOCK" data/knowledge-base/development/architecture/*.md

# Check for consistent block structure
grep -c "METADATA BLOCK\|OPENING BLOCK\|BODY BLOCK\|CLOSING BLOCK" specific-file.md
```

**Cross-Reference Validation**:
- When modifying file locations, search for references: `grep -r "old-filename.md" data/`
- Update all references when restructuring documentation
- Verify links in README files remain valid

### Working with Large Documentation

**When approaching 1,500 lines** (planning threshold):
1. Identify logical split points using 4-block structure
2. Plan modular structure maintaining teaching integrity
3. Create outline for split files
4. See "File Size Management" section for detailed thresholds

**When splitting documentation**:
1. Create new modular files following 4-block structure
2. Maintain 5:1 documentation ratio in each module
3. Add orchestrator/README for navigation
4. Update all cross-references
5. Commit with clear message: `refactor: Modularize [component] documentation (was XXX lines, now N modules)`

### Backup Critical Files

**Before major restructuring**:
```bash
# Backup critical documentation
cp important-file.md backups-for-critical-files/important-file-YYYY-MM-DD.md

# Or backup entire directory
cp -r data/identity backups-for-critical-files/identity-backup-YYYY-MM-DD/
```

## Key Files to Reference

**Identity & Foundation**:
- `README.md` - Project overview and Kingdom Technology vision
- `data/identity/README.md` - CPI-SI identity foundation
- `LICENSE.md` - Kingdom Technology licensing

**Architecture Core**:
- `data/knowledge-base/development/architecture/4-block-structure-system/` - Structural pattern (mini-book)
- `data/knowledge-base/development/architecture/documentation-philosophy/` - Teaching code paradigm (mini-book)
- `data/knowledge-base/development/technical-specifications/cpi-si-system-architecture/` - System design (mini-book)

**Implementation Standards**:
- `data/knowledge-base/development/build-environment/cpi-si-development-standards/` - C++/Rust standards (mini-book)
- `data/knowledge-base/development/TASK_LIST/01-cpi-si-foundation-architecture/` - Implementation roadmap (mini-book)

**Methodologies**:
- `data/knowledge-base/methodology/thinking/building-block-method/` - Problem-solving framework (mini-book)
- `data/knowledge-base/methodology/documentation-and-coding/documentation-creation-methodology/` - Doc standards (mini-book)

---

**Remember**: This is Kingdom Technology - technology serving God's purposes through covenant partnership. Every decision reflects both technical excellence and biblical wisdom. Heavy documentation is intentional, not technical debt. The teaching code paradigm enables the paradigm shift this project pioneers.
