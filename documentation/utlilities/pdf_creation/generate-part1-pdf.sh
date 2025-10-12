#!/bin/bash

# CreativeWorkzStudio Documentation Standards
# Part 1 PDF Generation Script
# Transforms Markdown to professional textbook-style PDF

set -e  # Exit on error

# Colors for output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║   CreativeWorkzStudio Documentation Standards - Part 1    ║${NC}"
echo -e "${BLUE}║   Professional PDF Generation with Textbook Typography    ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}"
echo ""

# Input/Output files
INPUT_FILE="${1:-documentation-template.md}"
OUTPUT_FILE="${2:-${INPUT_FILE%.md}-part1.pdf}"

echo -e "${YELLOW}📄 Input:${NC}  $INPUT_FILE"
echo -e "${YELLOW}📄 Output:${NC} $OUTPUT_FILE"
echo ""

# Check if input file exists
if [ ! -f "$INPUT_FILE" ]; then
    echo -e "${RED}❌ Error: Input file '$INPUT_FILE' not found!${NC}"
    exit 1
fi

echo -e "${BLUE}⚙️  Part 1 Settings Applied:${NC}"
echo "   • Page Size: Letter (8.5×11\")"
echo "   • Margins: 1 inch all sides"
echo "   • Font: TeX Gyre Pagella (Palatino alternative)"
echo "   • Font Size: 11pt"
echo "   • Line Spacing: 1.4× (140% leading)"
echo "   • Template: Eisvogel (professional LaTeX)"
echo ""

echo -e "${BLUE}🔨 Generating PDF...${NC}"

# Generate PDF with Part 1 standards
pandoc "$INPUT_FILE" \
  -o "$OUTPUT_FILE" \
  --template eisvogel \
  --pdf-engine=xelatex \
  --metadata-file=pandoc-part1-config.yaml \
  2>&1 | grep -v "Missing character" || true

# Check if PDF was created
if [ -f "$OUTPUT_FILE" ]; then
    FILE_SIZE=$(ls -lh "$OUTPUT_FILE" | awk '{print $5}')
    PAGE_COUNT=$(pdfinfo "$OUTPUT_FILE" 2>/dev/null | grep "Pages:" | awk '{print $2}')

    echo ""
    echo -e "${GREEN}✅ PDF Generated Successfully!${NC}"
    echo -e "${GREEN}   File: $OUTPUT_FILE${NC}"
    echo -e "${GREEN}   Size: $FILE_SIZE${NC}"
    echo -e "${GREEN}   Pages: $PAGE_COUNT${NC}"
    echo ""
    echo -e "${BLUE}📖 To view in VS Code:${NC}"
    echo "   code $OUTPUT_FILE"
    echo ""
    echo -e "${BLUE}🔍 To verify Part 1 compliance:${NC}"
    echo "   pdfinfo $OUTPUT_FILE"
else
    echo -e "${RED}❌ Error: PDF generation failed!${NC}"
    exit 1
fi
