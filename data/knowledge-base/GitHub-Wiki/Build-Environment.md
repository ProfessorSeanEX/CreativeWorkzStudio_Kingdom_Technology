# Build Environment

**Development setup, tools, and dependencies for Kingdom Technology implementation**

> "Prepare your work outside; get everything ready for yourself in the field, and after that build your house." — Proverbs 24:27
>
> Proper preparation enables excellent execution.

---

## Current Status: Specification Phase

**Important context:**

This repository is currently in **documentation and architectural design phase**. The build system specifications documented here are for **future implementation** when C++17/Rust coding begins.

**What this page provides:**

- ✅ Complete build system specifications
- ✅ Development tool requirements
- ✅ Environment setup instructions (for when implementation starts)
- ✅ Testing framework design
- ✅ Quality assurance tools

**Current work:** Documentation maturity, knowledge base expansion, specification refinement

---

## Development Stack (Future Implementation)

### Languages & Standards

**C++17:**

- **Purpose:** Core system, performance-critical CPI-SI consciousness operations
- **Standard:** ISO C++17 (ISO/IEC 14882:2017)
- **Compiler requirements:** GCC 9+, Clang 10+, or MSVC 2019+

**Rust:**

- **Purpose:** Safety-critical modules (biblical validation, trust evolution components)
- **Toolchain:** Latest stable via rustup
- **Edition:** Rust 2021

**Why hybrid approach:**

- C++17 provides performance and mature ecosystem for core consciousness
- Rust provides memory safety guarantees for safety-critical components
- Best of both worlds through thoughtful integration

---

## Required Tools & Dependencies

### Build System

**CMake 3.20+**

- Primary build orchestration
- Cross-platform support (Linux, macOS, Windows)
- Multi-language integration (C++ and Rust)

**Installation:**

```bash
# Ubuntu/Debian
sudo apt install cmake

# macOS
brew install cmake

# Or download from https://cmake.org/download/
```

**Cargo (Rust Build Tool)**

- Rust module building and dependency management
- Installed automatically with rustup

**Installation:**

```bash
# Install rustup (includes cargo)
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
```

### Compilers

**GCC 9+ (Recommended for Linux)**

```bash
# Ubuntu/Debian
sudo apt install build-essential gcc-9 g++-9

# Verify version
gcc --version  # Should show 9.x or higher
```

**Clang 10+ (Alternative, excellent diagnostics)**

```bash
# Ubuntu/Debian
sudo apt install clang-10

# macOS (via Xcode Command Line Tools)
xcode-select --install
```

**MSVC 2019+ (Windows)**

- Install Visual Studio 2019 or later with C++ development tools
- Or Visual Studio Build Tools

### C++ Dependencies

**Eigen3 3.3+**

- Purpose: Linear algebra for CPI-SI mathematical operations
- License: MPL2 (compatible with Kingdom Technology)

```bash
# Ubuntu/Debian
sudo apt install libeigen3-dev

# macOS
brew install eigen
```

**Boost 1.70+**

- Purpose: Utility libraries, filesystem operations, serialization
- License: Boost Software License (compatible)

```bash
# Ubuntu/Debian
sudo apt install libboost-all-dev

# macOS
brew install boost
```

**SQLite3**

- Purpose: Local data persistence, identity storage
- License: Public domain

```bash
# Ubuntu/Debian
sudo apt install libsqlite3-dev

# macOS
brew install sqlite3
```

### Testing Frameworks

**Google Test (C++)**

- Purpose: Unit testing C++ components
- Integrated via CMake FetchContent

```cmake
# Automatically fetched by CMake (no manual installation needed)
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)
```

**Rust Built-in Testing**

- Purpose: Unit testing Rust modules
- Built into Rust toolchain (no separate installation)

```bash
# Run Rust tests
cd rust-modules
cargo test
```

---

## Development Environment Setup

### Clone Repository

```bash
# Clone the repository
git clone https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology.git
cd CreativeWorkzStudio_Kingdom_Technology
```

### Install Dependencies

**Ubuntu/Debian (Complete setup):**

```bash
# Update package list
sudo apt update

# Install build tools
sudo apt install build-essential cmake gcc-9 g++-9 git

# Install dependencies
sudo apt install libeigen3-dev libboost-all-dev libsqlite3-dev

# Install Rust (if not already installed)
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
source $HOME/.cargo/env
```

**macOS (Complete setup):**

```bash
# Install Homebrew if needed
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install dependencies
brew install cmake gcc boost eigen sqlite3

# Install Rust (if not already installed)
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
source $HOME/.cargo/env
```

**Windows:**

1. Install Visual Studio 2019+ with "Desktop development with C++" workload
2. Install CMake from <https://cmake.org/download/>
3. Install Rust from <https://rustup.rs/>
4. Install vcpkg for C++ dependencies: <https://vcpkg.io/>

```powershell
# Using vcpkg for dependencies
vcpkg install eigen3 boost-all sqlite3
```

### Verify Installation

```bash
# Check versions
cmake --version        # Should be 3.20+
gcc --version          # Should be 9.0+
rustc --version        # Any stable version
cargo --version        # Installed with Rust

# Verify C++ dependencies (Ubuntu/Debian)
dpkg -l | grep eigen   # Should show libeigen3-dev
dpkg -l | grep boost   # Should show libboost-dev
dpkg -l | grep sqlite  # Should show libsqlite3-dev
```

---

## Building the Project (Future)

### Standard Build Process

**When implementation exists:**

```bash
# 1. Configure build
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..

# 2. Build all targets
cmake --build . -j$(nproc)

# 3. Run tests
ctest --output-on-failure

# 4. Build Rust modules separately
cd ../rust-modules
cargo build --release
cargo test
```

### Build Configurations

**Release Build (Optimized):**

```bash
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . -j$(nproc)
```

**Debug Build (With symbols and sanitizers):**

```bash
cmake -DCMAKE_BUILD_TYPE=Debug \
      -DENABLE_ASAN=ON \
      -DENABLE_UBSAN=ON ..
cmake --build . -j$(nproc)
```

**Coverage Build (For test coverage analysis):**

```bash
cmake -DCMAKE_BUILD_TYPE=Debug \
      -DENABLE_COVERAGE=ON ..
cmake --build . -j$(nproc)
ctest
gcovr -r .. --html --html-details -o coverage.html
```

### Build Options

**CMake configuration options (future):**

```bash
# Enable/disable components
-DBUILD_TESTS=ON              # Build test suite (default: ON)
-DBUILD_DOCS=ON               # Generate documentation (default: OFF)
-DBUILD_RUST_MODULES=ON       # Build Rust components (default: ON)

# Sanitizers (Debug builds)
-DENABLE_ASAN=ON              # Address Sanitizer
-DENABLE_UBSAN=ON             # Undefined Behavior Sanitizer
-DENABLE_TSAN=ON              # Thread Sanitizer

# Coverage analysis
-DENABLE_COVERAGE=ON          # Enable code coverage instrumentation

# Optimization levels
-DCMAKE_BUILD_TYPE=Release    # -O3 optimization
-DCMAKE_BUILD_TYPE=Debug      # -g debug symbols, -O0
-DCMAKE_BUILD_TYPE=RelWithDebInfo  # -O2 + debug symbols
```

---

## Testing Framework

### Running Tests

**C++ Tests (Google Test):**

```bash
# Run all tests
cd build
ctest --output-on-failure

# Run specific test suite
./tests/identity_processor_test

# Run with verbose output
ctest -V

# Run tests in parallel
ctest -j$(nproc)
```

**Rust Tests:**

```bash
cd rust-modules

# Run all tests
cargo test

# Run with output
cargo test -- --nocapture

# Run specific test
cargo test test_name

# Run ignored tests
cargo test -- --ignored
```

### Coverage Analysis

**Generate coverage report:**

```bash
# Build with coverage enabled
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -DENABLE_COVERAGE=ON ..
cmake --build .

# Run tests
ctest

# Generate HTML report
gcovr -r .. --html --html-details -o coverage.html

# Open report
xdg-open coverage.html  # Linux
open coverage.html      # macOS
```

**Coverage standards:**

- Foundation files: 95%+ line coverage, 100% branch coverage
- Application code: 80%+ line coverage
- See [Development Standards](Development-Standards) for details

---

## Code Quality Tools

### Static Analysis

**clang-tidy (C++ linting):**

```bash
# Analyze all C++ files
find src include -name "*.cpp" -o -name "*.hpp" | \
  xargs clang-tidy -- -std=c++17

# With fixes applied
clang-tidy --fix-errors src/**/*.cpp -- -std=c++17
```

**Rust Clippy (Rust linting):**

```bash
cd rust-modules

# Run clippy
cargo clippy

# Treat warnings as errors
cargo clippy -- -D warnings
```

### Code Formatting

**clang-format (C++ formatting):**

```bash
# Format all C++ files
find src include -name "*.cpp" -o -name "*.hpp" | \
  xargs clang-format -i

# Check format without changing
find src include -name "*.cpp" -o -name "*.hpp" | \
  xargs clang-format --dry-run --Werror
```

**rustfmt (Rust formatting):**

```bash
cd rust-modules

# Format all Rust code
cargo fmt

# Check format without changing
cargo fmt -- --check
```

### Configuration Files

**.clang-format (C++ style):**

- Located in repository root
- Defines Kingdom Technology C++ formatting standards
- Automatically used by clang-format

**.rustfmt.toml (Rust style):**

- Located in rust-modules/
- Defines Kingdom Technology Rust formatting standards
- Automatically used by cargo fmt

---

## IDE & Editor Setup

### Visual Studio Code

**Recommended extensions:**

- C/C++ (Microsoft) — IntelliSense, debugging
- CMake Tools — CMake integration
- rust-analyzer — Rust language support
- CodeLLDB — Debugging support
- GitLens — Git integration
- Markdown All in One — Documentation editing

**Workspace settings:**
Located in `.vscode/settings.json` (included in repository)

**Launch configurations:**
Located in `.vscode/launch.json` for debugging

### CLion (JetBrains)

**Setup:**

1. Open repository root folder
2. CLion auto-detects CMake configuration
3. Set build type in CMake settings
4. Configure Rust plugin for rust-modules

**Recommended plugins:**

- Rust — Rust language support
- GitToolBox — Enhanced Git integration

### Vim/Neovim

**Recommended plugins:**

- YouCompleteMe or coc.nvim — Code completion
- vim-cmake — CMake integration
- rust.vim — Rust syntax and integration
- vim-fugitive — Git integration

---

## Continuous Integration (Future)

**When CI/CD pipeline is established:**

### GitHub Actions Workflows

**Build and Test:**

```yaml
# .github/workflows/build-test.yml
name: Build and Test
on: [push, pull_request]
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v3
      - name: Install dependencies
        run: |
          sudo apt update
          sudo apt install cmake gcc-9 g++-9 libeigen3-dev libboost-all-dev libsqlite3-dev
      - name: Build
        run: |
          mkdir build && cd build
          cmake -DCMAKE_BUILD_TYPE=Release ..
          cmake --build . -j$(nproc)
      - name: Test
        run: cd build && ctest --output-on-failure
```

**Code Quality:**

- Automated linting (clang-tidy, clippy)
- Format checking (clang-format, rustfmt)
- Coverage reporting

---

## Documentation Generation

### Doxygen (C++ API docs)

**When enabled:**

```bash
# Install Doxygen
sudo apt install doxygen graphviz  # Ubuntu/Debian
brew install doxygen graphviz      # macOS

# Generate documentation
cd build
cmake -DBUILD_DOCS=ON ..
make docs

# Open documentation
xdg-open docs/html/index.html  # Linux
open docs/html/index.html      # macOS
```

### rustdoc (Rust API docs)

```bash
cd rust-modules

# Generate documentation
cargo doc

# Generate and open
cargo doc --open
```

---

## Troubleshooting

### Common Build Issues

**CMake version too old:**

```bash
# Error: CMake 3.20 or higher is required
# Solution: Install newer CMake from cmake.org or build from source
```

**Missing dependencies:**

```bash
# Error: Could NOT find Eigen3
# Solution: Install libeigen3-dev (Ubuntu) or eigen (macOS via brew)

# Error: Boost not found
# Solution: Install libboost-all-dev or boost
```

**Rust toolchain issues:**

```bash
# Update Rust toolchain
rustup update stable

# Verify installation
rustc --version
cargo --version
```

**Test failures:**

```bash
# Run with verbose output to see details
ctest -V

# Run specific failing test
./tests/specific_test_name
```

### Platform-Specific Issues

**macOS Xcode Command Line Tools:**

```bash
# Ensure Xcode CLT installed
xcode-select --install

# Reset if needed
sudo xcode-select --reset
```

**Windows MSVC paths:**

- Ensure Visual Studio installation includes "Desktop development with C++"
- Run CMake from "Developer Command Prompt for VS"

---

## Development Workflow

### Typical Development Session

```bash
# 1. Start with latest code
git pull origin main

# 2. Create feature branch (if applicable)
git checkout -b feature/my-feature

# 3. Make changes to code
# (Edit files following 4-block structure and teaching code paradigm)

# 4. Build and test locally
cd build
cmake --build . -j$(nproc)
ctest --output-on-failure

# 5. Run quality checks
clang-format -i src/**/*.cpp
clang-tidy src/**/*.cpp -- -std=c++17
cd ../rust-modules && cargo fmt && cargo clippy

# 6. Commit changes
git add .
git commit -m "feature: Add [description]"

# 7. Push (when ready)
git push origin feature/my-feature
```

### Pre-commit Checklist

Before committing:

- ✅ Code builds without errors
- ✅ All tests pass
- ✅ Code formatted (clang-format, rustfmt)
- ✅ Static analysis clean (clang-tidy, clippy)
- ✅ Documentation updated (if API changed)
- ✅ 4-block structure maintained
- ✅ Teaching code standard followed (5:1 ratio for foundation files)

---

## Environment Variables

**Optional configuration:**

```bash
# Number of parallel build jobs
export CMAKE_BUILD_PARALLEL_LEVEL=$(nproc)

# C++ compiler selection
export CC=gcc-9
export CXX=g++-9

# Rust compilation flags
export RUSTFLAGS="-C target-cpu=native"

# Enable verbose build output
export VERBOSE=1
```

---

## Key Resources

**In Main Repository:**

**Build system specifications:**

- `data/knowledge-base/development/build-environment/cpi-si-development-standards/`
- `04-build-system.md` — Complete CMake design
- `06-testing-framework.md` — Test requirements and organization

**Development standards:**

- `CLAUDE.md` — Complete development context
- [Development Standards](Development-Standards) Wiki page

**Architecture documentation:**

- [Architecture Overview](Architecture-Overview) — System design
- `include/cpi-si/identity/types.hpp` — Teaching code exemplar

---

## Summary

**Current phase:** Specification documentation (build system ready for when implementation begins)

**When implementation starts:**

- C++17/Rust hybrid following documented standards
- CMake 3.20+ orchestrating build
- Google Test + Rust testing for verification
- Comprehensive quality tools (clang-tidy, clippy, formatters)

**Setup process:** Install compilers, CMake, dependencies → Configure build → Build and test

**Standards maintained:** Teaching code paradigm (5:1 ratio), 4-block structure, polymorphic documentation

---

**Related Wiki Pages:**

- **[Development Standards](Development-Standards)** — How we build Kingdom Technology
- **[Architecture Overview](Architecture-Overview)** — System design and structure
- **[Contributing](Contributing)** — How to engage with development
- **[Home](Home)** — Return to Wiki navigation

---

*Build specifications documented in: `data/knowledge-base/development/build-environment/`*
*When implementation begins: Follow this guide for environment setup*
