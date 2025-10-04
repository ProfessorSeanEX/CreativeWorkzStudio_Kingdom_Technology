## Advanced Features

### Collapsible Sections

**Syntax:**
```markdown
<details>
<summary>Click to expand</summary>

Content hidden by default.

- Can contain
- Any markdown
- Elements

</details>
```

**With Open Attribute:**
```markdown
<details open>
<summary>Expanded by default</summary>
Content visible initially.
</details>
```

---

### Alerts / Callouts (GitHub-Style)

**Syntax:**
```markdown
> [!NOTE]
> Useful information that users should know.

> [!TIP]
> Helpful advice for better outcomes.

> [!IMPORTANT]
> Key information users need to know.

> [!WARNING]
> Urgent info that needs attention.

> [!CAUTION]
> Advises about risks or negative outcomes.
```

---

### Badges (Shields.io Style)

**Syntax:**
```markdown
![Badge Text](https://img.shields.io/badge/Label-Message-Color)
![Build](https://img.shields.io/badge/build-passing-brightgreen)
![Version](https://img.shields.io/badge/version-1.2-blue)
```

---

### Anchors and Table of Contents

**Manual Anchor Links:**
```markdown
[Go to section](#section-heading)

## Section Heading
Content here...
```

**Anchor Rules:**
- Lowercase heading text
- Replace spaces with hyphens
- Remove special characters
- Example: "## My Section!" → `#my-section`

---

### Line Breaks

**Two Methods:**

```markdown
Line with two spaces at end  
Creates line break here.

Line with HTML break<br>
Also creates line break.
```

---

### Comments

**Syntax:**
```markdown
<!-- This is a comment -->
<!-- It won't appear in rendered output -->

<!--
Multi-line
comment
also works
-->
```

---

## Quick Syntax Summary

| Element         | Syntax                              |
| --------------- | ----------------------------------- |
| Heading 1-6     | `# H1` through `###### H6`          |
| Bold            | `**bold**` or `__bold__`            |
| Italic          | `*italic*` or `_italic_`            |
| Bold + Italic   | `***text***`                        |
| Inline Code     | `` `code` ``                        |
| Code Block      | ` ``` ` language<br>code<br>` ``` ` |
| Link            | `[text](url)`                       |
| Image           | `![alt](url)`                       |
| Unordered List  | `* item` or `- item`                |
| Ordered List    | `1. item`                           |
| Task List       | `- [ ] task`                        |
| Blockquote      | `> quote`                           |
| Horizontal Rule | `---` or `***`                      |
| Table           | `\| Header \| Header \|`            |
| Strikethrough   | `~~text~~`                          |
| Footnote        | `[^1]` and `[^1]: note`             |
| Collapsible     | `<details><summary>`                |
| HTML            | Mix with markdown                   |
| Escape          | `\` before character                |

---

## Markdown Philosophy: Invisible Excellence

**Principles for Master-Level Usage:**

1. **Readability First** - Markdown source should be almost as readable as rendered output
2. **Semantic Structure** - Use headers, lists, and emphasis for meaning, not just appearance
3. **Consistency** - Pick conventions (*, -, or + for lists) and stick with them
4. **Restraint** - Don't over-format; let content shine
5. **Accessibility** - Use alt text, semantic HTML, logical structure
6. **Purpose-Driven** - Every formatting choice should serve comprehension
7. **Balance** - Strategic use of visual elements without overwhelming

**The Goal:** Readers feel the quality without noticing the technique.

---

