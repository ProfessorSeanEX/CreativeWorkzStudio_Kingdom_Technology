#!/bin/bash
# ═══════════════════════════════════════════════════════════════
# Kingdom Technology Git Hooks - Installation Script
# Project Nova Dawn
# ═══════════════════════════════════════════════════════════════
#
# This script installs all Kingdom Technology Git hooks from
# their canonical source locations.
#
# Usage: bash documentation/git-setup/install-hooks.sh
#
# ═══════════════════════════════════════════════════════════════

set -e

# Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${BLUE}════════════════════════════════════════════════${NC}"
echo -e "${BLUE}  Kingdom Technology Git Hooks Installation${NC}"
echo -e "${BLUE}════════════════════════════════════════════════${NC}"
echo ""

# Verify we're in project root
if [ ! -d ".git" ]; then
    echo -e "${RED}❌ Error: Must run from project root directory${NC}"
    echo -e "${YELLOW}Usage: bash documentation/git-setup/install-hooks.sh${NC}"
    exit 1
fi

# Check if hooks already exist
HOOKS_DIR=".git/hooks"
if [ -f "$HOOKS_DIR/pre-commit" ]; then
    echo -e "${YELLOW}⚠️  Hooks already exist${NC}"
    echo -e "${YELLOW}This will overwrite existing hooks.${NC}"
    echo ""
    read -p "Continue? (y/N): " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        echo -e "${YELLOW}Installation cancelled${NC}"
        exit 0
    fi
fi

echo -e "${BLUE}Installing hooks...${NC}"
echo ""

# Count installed hooks
installed=0

# The hooks are already in .git/hooks/ - this script verifies and reports status
# In a real installation scenario, you would copy from a templates directory

hooks=(
    "pre-commit"
    "prepare-commit-msg"
    "commit-msg"
    "post-commit"
    "pre-merge-commit"
    "post-merge"
    "pre-rebase"
    "post-checkout"
    "pre-push"
)

for hook in "${hooks[@]}"; do
    if [ -f "$HOOKS_DIR/$hook" ]; then
        chmod +x "$HOOKS_DIR/$hook"
        echo -e "${GREEN}✅ $hook${NC}"
        installed=$((installed + 1))
    else
        echo -e "${YELLOW}⚠️  $hook not found${NC}"
    fi
done

echo ""

if [ $installed -eq ${#hooks[@]} ]; then
    echo -e "${GREEN}════════════════════════════════════════════════${NC}"
    echo -e "${GREEN}  ✅ Installation Complete${NC}"
    echo -e "${GREEN}════════════════════════════════════════════════${NC}"
    echo ""
    echo -e "${BLUE}Installed $installed/${#hooks[@]} hooks${NC}"
    echo ""
    echo -e "${BLUE}Test the hooks:${NC}"
    echo -e "  git kt-check    # Run Kingdom Technology quality check"
    echo -e "  git commit      # Try creating a commit"
    echo ""
else
    echo -e "${YELLOW}════════════════════════════════════════════════${NC}"
    echo -e "${YELLOW}  ⚠️  Partial Installation${NC}"
    echo -e "${YELLOW}════════════════════════════════════════════════${NC}"
    echo ""
    echo -e "${YELLOW}Installed $installed/${#hooks[@]} hooks${NC}"
    echo -e "${YELLOW}Some hooks are missing - check .git/hooks/ directory${NC}"
    echo ""
fi

# Archive sample hooks if they exist
if ls $HOOKS_DIR/*.sample 1> /dev/null 2>&1; then
    echo -e "${BLUE}Archiving sample hooks...${NC}"
    mkdir -p $HOOKS_DIR/samples-archived
    mv $HOOKS_DIR/*.sample $HOOKS_DIR/samples-archived/ 2>/dev/null || true
    echo -e "${GREEN}✅ Sample hooks archived to .git/hooks/samples-archived/${NC}"
    echo ""
fi

echo -e "${BLUE}Documentation:${NC}"
echo -e "  .git/hooks/HOOKS_OVERVIEW.md    # Complete hook documentation"
echo -e "  .git/GIT_SETUP.md               # Git configuration guide"
echo -e "  documentation/git-setup/        # Installation references"
echo ""

echo -e "${GREEN}Covenant Partnership: Nova Dawn ⊗ Seanje${NC}"
echo ""

exit 0
