# GitHub Wiki Pages - Drafting Folder

**Purpose:** Draft and maintain GitHub Wiki pages for the CreativeWorkzStudio_Kingdom_Technology repository

**Location:** These files are drafted here in the knowledge base, then copied to the actual GitHub Wiki when ready

---

## How to Use This Folder

### Drafting Process

1. **Create/edit pages here** in markdown format
2. **Review and refine** as needed with full version control
3. **Copy to GitHub Wiki** when page is ready to publish

### Publishing to GitHub Wiki

**Two methods:**

**Method A: Web Interface (Easiest)**
1. Go to https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology/wiki
2. Click "New Page" or edit existing page
3. Copy content from file in this folder
4. Paste into GitHub Wiki editor
5. Save page

**Method B: Git Clone (Advanced)**
```bash
# Clone the wiki as a git repository
git clone https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology.wiki.git

# Copy files from this folder to wiki repo
cp data/knowledge-base/GitHub-Wiki/*.md CreativeWorkzStudio_Kingdom_Technology.wiki/

# Commit and push
cd CreativeWorkzStudio_Kingdom_Technology.wiki
git add .
git commit -m "Add/update Wiki pages"
git push
```

---

## Current Wiki Pages

### Published
*(None yet - ready to publish)*

### Drafted (In This Folder)

**Core Navigation:**
- ✅ **Home.md** — Wiki homepage and navigation hub
- ✅ **Getting-Started.md** — Introduction for newcomers

**Planned:**
- 📋 **CPI-SI-Architecture.md** — Consciousness model deep dive
- 📋 **Kingdom-Technology.md** — Full stack vision overview
- 📋 **Timeline.md** — Historical evolution guide
- 📋 **Dictionary.md** — Key terms and concepts
- 📋 **Development-Standards.md** — Teaching code, 4-block structure
- 📋 **Architecture-Overview.md** — Technical specifications
- 📋 **Contributing.md** — Engagement guidelines
- 📋 **Build-Environment.md** — Development setup

---

## Wiki Structure Philosophy

### Purpose

**GitHub Wiki serves as:**
- Accessible entry point for newcomers
- Navigation hub to deeper documentation
- Quick reference for common questions
- Public-facing overview of private covenant workspace

### Content Strategy

**Wiki pages should:**
- Be welcoming and accessible (everyman understanding)
- Provide clear navigation to full documentation
- Explain concepts without overwhelming detail
- Link to deeper content in main repository
- Serve as "front door" to knowledge base

**Main repository documentation should:**
- Maintain polymorphic documentation standard (PhD rigor + accessibility)
- Provide complete technical depth
- Preserve historical context and timeline
- Enable dissertation/book extraction

**Division of labor:**
- **Wiki** = Overview, introduction, navigation
- **Repository docs** = Complete depth, technical precision, historical preservation

---

## Maintenance Notes

### When to Update Wiki

**Trigger events:**
- Major phase transitions (new iteration, milestone reached)
- New key concepts added to dictionary
- Architecture changes affecting overview
- Timeline updates reaching new quarter
- Significant documentation additions

### Version Control

**These draft files are version controlled** in the main repository, allowing:
- Track changes over time
- Revert if needed
- Collaborate on updates
- Maintain consistency with main documentation

**GitHub Wiki itself is also git-based** but separate from main repo

---

## Cross-Reference Maintenance

### Internal Wiki Links

**Format:** `[Page Title](Page-Name)`

**Example:** `[Getting Started](Getting-Started)`

**Note:** GitHub Wiki auto-creates links from page titles (spaces become hyphens)

### Links to Repository Documentation

**Use full GitHub URLs** for linking to specific files:

**Format:** `[Link Text](https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology/blob/main/path/to/file.md)`

**Example:** `[Main README](https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology/blob/main/README.md)`

---

## Quality Standards

### All Wiki Pages Should:

✅ **Be accessible** — Everyman can understand core concepts
✅ **Provide navigation** — Clear links to related pages and deeper docs
✅ **Stay current** — Reflect actual repository state
✅ **Avoid overspiritualization** — Biblical wisdom applied, not decorated
✅ **Demonstrate excellence** — Quality that makes people curious about foundation

### Avoid:

❌ **Overwhelming technical depth** — Save for main repository docs
❌ **Redundant content** — Link to full docs instead of duplicating
❌ **Stale information** — Update when repository evolves
❌ **Inaccessible jargon** — Explain terms or link to dictionary

---

## Next Steps

1. **Review drafted pages** (Home, Getting-Started)
2. **Create remaining planned pages** as needed
3. **Publish to actual GitHub Wiki** when ready
4. **Maintain synchronization** between drafts and published Wiki

---

*This folder maintained as part of Project Nova Dawn knowledge base*
*Wiki access: https://github.com/ProfessorSeanEX/CreativeWorkzStudio_Kingdom_Technology/wiki*
