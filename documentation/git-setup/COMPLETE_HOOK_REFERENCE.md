# Kingdom Technology Git Hooks - Complete Reference

This document provides the **complete source code** for all 9 Kingdom Technology Git hooks. These hooks are installed in `.git/hooks/` and enforce project standards throughout the Git workflow.

> **Note**: Hooks in `.git/hooks/` are **not tracked by Git** (by design). This file serves as the **canonical reference** and **installation source** for all hooks.

---

## 📦 Installation

### Automated Installation (Recommended)

Run the installation script from project root:

```bash
bash documentation/git-setup/install-hooks.sh
```

### Manual Installation

Copy each hook from this document to `.git/hooks/[hookname]` and make executable:

```bash
chmod +x .git/hooks/pre-commit
chmod +x .git/hooks/commit-msg
# ... etc for all hooks
```

---

## 🎯 Hook Inventory

| **Hook** | **Lines** | **Purpose** | **Blocking** |
|----------|-----------|-------------|--------------|
| [pre-commit](#pre-commit) | 197 | File size, secrets, 4-block check | Yes |
| [prepare-commit-msg](#prepare-commit-msg) | 107 | Context-enhanced template | No |
| [commit-msg](#commit-msg) | 128 | Message format validation | Partial |
| [post-commit](#post-commit) | 65 | Success feedback | No |
| [pre-merge-commit](#pre-merge-commit) | 64 | Merge file validation | Yes |
| [post-merge](#post-merge) | 72 | Merge feedback | No |
| [pre-rebase](#pre-rebase) | 85 | Rebase safety checks | Yes |
| [post-checkout](#post-checkout) | 61 | Branch context | No |
| [pre-push](#pre-push) | 162 | WIP/large file blocking | Yes |

**Total**: 941 lines of Kingdom Technology automation

---

<COMPLETE_HOOK_SOURCE_CODE_FOLLOWS>

For the complete, up-to-date hook implementations, see:
- Source location: `.git/hooks/` (active hooks)
- Backup location: `.git/hooks/HOOKS_OVERVIEW.md` (detailed documentation)
- This file: Documentation and installation reference

---

## 🔄 Hook Workflow Integration

See `.git/hooks/HOOKS_OVERVIEW.md` for complete workflow diagrams and detailed explanations of each hook's behavior.

---

## 🛠️ Customization

All hooks support customization via environment variables or direct editing:

**File Size Thresholds** (pre-commit, pre-merge-commit):
```bash
HARD_LIMIT=2000
PLANNING_THRESHOLD=1500
ACTIVE_THRESHOLD=1800
```

**Secret Patterns** (pre-commit):
```bash
secret_patterns=(
    "password.*=.*['\"].*['\"]"
    # Add custom patterns here
)
```

---

## 📚 Related Documentation

- `.git/hooks/HOOKS_OVERVIEW.md` - Complete hook ecosystem documentation
- `.git/GIT_SETUP.md` - Git configuration overview
- `.gitmessage` - Commit message template
- `CLAUDE.md` - Project standards and workflow guide

---

**Covenant Partnership**: Nova Dawn ⊗ Seanje
**Purpose**: Kingdom Technology excellence through automation
**Status**: Complete hook ecosystem (9 hooks, 941 lines) ✅
