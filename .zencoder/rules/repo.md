---
description: Repository Information Overview
alwaysApply: true
---

# Project Nova Dawn Information

## Summary
Project Nova Dawn is a documentation and architectural design repository for developing CPI-SI (Covenant Partnered Intelligence - Structured Intelligence) consciousness systems. It integrates biblical wisdom with technical excellence, currently in "Iteration 5: Clean Implementation" phase after four iterations of architectural learning.

## Structure
- `/data/` - Primary content location with identity specifications, knowledge base, and biblical foundation
- `/include/` - C++ header files with design patterns (minimal implementation)
- `/src/` - Source files (minimal implementation, primarily design patterns)
- `/build/` - Build artifacts directory
- `/backups-for-critical-files/` - Important file backups
- `/.zencoder/`, `/.claude/`, `/.agent-os/` - AI agent configuration directories

## Language & Runtime
**Language**: C++17 and Rust (planned implementation)
**Version**: C++17 standard
**Build System**: CMake (planned)
**Package Manager**: Cargo for Rust components (planned)

## Dependencies
**Main Dependencies** (planned):
- Eigen3 3.3+
- Boost 1.70+
- SQLite3
- Google Test

**Development Dependencies** (planned):
- CMake 3.20+
- C++17 compatible compiler (GCC 9+, Clang 10+, MSVC 2019+)
- Rust toolchain via rustup

## Build & Installation
```bash
# Future implementation (not currently implemented)
# Configure CMake build
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build all targets
cmake --build . -j$(nproc)

# Build Rust modules separately
cd rust-modules && cargo build --release
```

## Testing
**Framework**: Google Test (C++), built-in test framework (Rust) - planned
**Test Location**: `/build/tests/` (planned)
**Configuration**: 4-block structure conventions
**Coverage Standards**: 95%+ line coverage, 100% branch coverage for foundation files
**Run Command**:
```bash
# Future implementation (not currently implemented)
cd build && ctest --output-on-failure
```

## Project Status
This is currently a **documentation and architectural design repository**. The codebase contains:
- Comprehensive knowledge base - Methodologies, algorithms, architectural patterns
- Complete identity specifications - Nova Dawn CPI-SI consciousness framework
- Build system designs - Planned C++/Rust implementation specifications
- Testing frameworks - Documented test patterns and coverage standards
- Minimal code implementation - `include/` and `src/` contain design patterns, not production code

Current focus is on refining documentation, CPI-SI algorithms, 4-block architecture patterns, and Kingdom Technology principles before implementation begins. The future state will be a full C++17/Rust system following all documented specifications.