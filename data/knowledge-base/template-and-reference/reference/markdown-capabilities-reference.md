# 📘 Complete Markdown Capabilities Reference

**Created for CPI-SI Document Enhancement | Knowledge Source: Context7 Documentation**

---

## 📑 Table of Contents

1. [Block Elements](#block-elements)
2. [Span Elements](#span-elements)
3. [GitHub Flavored Markdown Extensions](#github-flavored-markdown-extensions)
4. [HTML Integration](#html-integration)
5. [Special Characters & Escaping](#special-characters--escaping)
6. [Advanced Features](#advanced-features)

---

## Block Elements

### Headers

**Atx-Style Headers** (preferred for consistency):
```markdown
# H1 - Highest level
## H2 - Second level
### H3 - Third level
#### H4 - Fourth level
##### H5 - Fifth level
###### H6 - Sixth level
```

**Setext-Style Headers** (alternative for H1 and H2):
```markdown
Header Level 1
==============

Header Level 2
--------------
```

**Usage Guidelines:**
- Use `#` style for consistency and clarity
- Only one H1 per document (title)
- Maintain logical hierarchy (don't skip levels)
- Add blank lines before and after headers

---

### Paragraphs

**Syntax:**
```markdown
First paragraph text here.
Continues on same line.

Second paragraph separated by blank line.
```

**Rules:**
- One or more blank lines separate paragraphs
- Hard line breaks within paragraphs: end line with 2+ spaces OR use `<br>`
- Don't indent paragraphs with spaces or tabs

---

### Blockquotes

**Basic Syntax:**
```markdown
> This is a blockquote.
> Multiple lines stay together.
```

**Nested Blockquotes:**
```markdown
> First level quote
>> Second level nested
>>> Third level nested
```

**Blockquotes with Other Elements:**
```markdown
> ## Header in blockquote
> 
> - List item
> - Another item
> 
> **Bold text** and *italic* work too.
```

**Lazy Blockquotes** (only first line needs `>`):
```markdown
> This is lazy blockquoting
where subsequent lines don't need the angle bracket
as long as paragraph continues.
```

---

### Lists

**Unordered Lists:**
```markdown
* Item one
* Item two
* Item three

- Also works with hyphens
- Second item
- Third item

+ Plus signs work too
+ Second item
+ Third item
```

**Ordered Lists:**
```markdown
1. First item
2. Second item
3. Third item

1. Numbers can all be 1
1. They auto-increment
1. When rendered
```

**Nested Lists:**
```markdown
1. First item
   - Nested unordered
   - Another nested
2. Second item
   1. Nested ordered
   2. Another nested ordered
```

**Multi-Paragraph List Items:**
```markdown
* First item with multiple paragraphs.
  
  Second paragraph indented with 4 spaces or 1 tab.
  
* Second list item
  
  > Blockquote in list item
  
  More content here
```

**Usage Guidelines:**
- Indent nested lists 4 spaces or 1 tab
- Use consistent markers (pick *, -, or + and stick with it)
- Add blank lines between list items for readability (optional)

---

### Code Blocks

**Indented Code Blocks:**
```markdown
Normal paragraph here.

    Code block indented with 4 spaces or 1 tab
    Multiple lines stay together
    All indented content is treated as code

Back to normal text.
```

**Fenced Code Blocks** (with language specification):
````markdown
```javascript
function example() {
    return "syntax highlighting available";
}
```

```python
def example():
    return "many languages supported"
```

```yaml
key: value
nested:
  - item1
  - item2
```
````

**Languages Commonly Supported:**
- Programming: `javascript`, `python`, `java`, `cpp`, `csharp`, `ruby`, `go`, `rust`, `php`
- Web: `html`, `css`, `scss`, `json`, `xml`
- Data: `yaml`, `toml`, `sql`, `graphql`
- Shell: `bash`, `shell`, `powershell`, `cmd`
- Other: `markdown`, `latex`, `diff`, `regex`

---

### Horizontal Rules

**Syntax (any of these):**
```markdown
---

***

___

- - -

* * *

_ _ _
```

**Rules:**
- Need 3 or more markers
- Can include spaces between markers
- Must be on their own line with blank lines above/below

---

## Span Elements

### Links

**Inline Links:**
```markdown
[Link text](https://example.com)
[Link with title](https://example.com "Hover title text")
[Relative link](../path/to/file.md)
[Anchor link](#section-heading)
```

**Reference-Style Links:**
```markdown
[Link text][reference-id]
[Another link][ref2]

[reference-id]: https://example.com
[ref2]: https://example.com "Optional title"
```

**Implicit Reference Links:**
```markdown
[Google][]
[Stack Overflow][]

[google]: https://google.com
[stack overflow]: https://stackoverflow.com
```

**Automatic Links:**
```markdown
<https://example.com>
<email@example.com>
```

---

### Emphasis

**Italic:**
```markdown
*asterisks*
_underscores_
```

**Bold:**
```markdown
**double asterisks**
__double underscores__
```

**Bold + Italic:**
```markdown
***triple asterisks***
___triple underscores___
**_combined different_**
*__also combined__*
```

**Usage Guidelines:**
- Use `*` for consistency (more common)
- Can't have spaces between markers and text
- For mid-word emphasis, asterisks work better than underscores

---

### Inline Code

**Syntax:**
```markdown
Use `code` for inline code spans.
Use ``code with `backticks` inside`` for literal backticks.
```

**Examples:**
```markdown
The `printf()` function outputs text.
Use ``git commit -m "message"`` for commits.
File located at `/usr/local/bin/script.sh`
```

---

### Images

**Inline Images:**
```markdown
![Alt text](image.png)
![Alt text](image.png "Optional title")
![Alt text](https://example.com/image.png)
```

**Reference-Style Images:**
```markdown
![Alt text][image-ref]

[image-ref]: image.png "Optional title"
```

**Images with Links:**
```markdown
[![Alt text](image.png)](https://example.com)
```

---

## GitHub Flavored Markdown Extensions

### Tables

**Basic Table:**
```markdown
| Header 1 | Header 2 | Header 3 |
| -------- | -------- | -------- |
| Cell 1   | Cell 2   | Cell 3   |
| Cell 4   | Cell 5   | Cell 6   |
```

**Aligned Tables:**
```markdown
| Left Aligned | Center Aligned | Right Aligned |
| :----------- | :------------: | ------------: |
| Left         |     Center     |         Right |
| Text         |      Text      |          Text |
```

**Table with Formatting:**
```markdown
| Feature    | Status | Notes                   |
| ---------- | ------ | ----------------------- |
| **Bold**   | ✅      | *Emphasis works too*    |
| `Code`     | ✅      | [Links](https://ex.com) |
| ~~Strike~~ | ✅      | Multiple elements work  |
```

**Guidelines:**
- Use `:---` for left align (default)
- Use `:---:` for center align
- Use `---:` for right align
- Outer pipes optional but recommended for clarity
- Cells don't need to align perfectly in source (but readability helps)

---

### Strikethrough

**Syntax:**
```markdown
~~Strikethrough text~~
~Single tilde may work~ (depends on processor configuration)
```

---

### Task Lists

**Syntax:**
```markdown
- [ ] Unchecked task
- [x] Completed task
- [ ] Another pending task
  - [ ] Nested subtask
  - [x] Completed subtask
```

**Usage:**
- Space required between brackets: `[ ]` not `[]`
- Case sensitive: lowercase `x` for checked
- Works in unordered lists only

---

### Autolinks

**Automatic URL Linking:**
```markdown
Visit www.example.com for more info.
Check https://github.com for repositories.
Contact us at support@example.com
```

**Protocols Supported:**
- `http://`, `https://`
- `www.` prefix (adds http://)
- Email addresses automatically linked

---

### Footnotes

**Syntax:**
```markdown
Here's a sentence with a footnote[^1].
Another reference[^note].

[^1]: This is the first footnote content.
[^note]: Named footnotes work too. Can span
    multiple lines if indented.
```

**Guidelines:**
- Reference can be number or name
- Definition can be anywhere in document
- Automatically numbered in output
- Multiple paragraphs in footnote: indent continuation

---

### Emoji

**Syntax:**
```markdown
:smile: :heart: :thumbsup: :rocket: :sparkles:
```

**Common Emoji Codes:**
- `:white_check_mark:` → ✅
- `:x:` → ❌
- `:warning:` → ⚠️
- `:bulb:` → 💡
- `:fire:` → 🔥
- `:star:` → ⭐

---

## HTML Integration

### Allowed HTML Elements

**Block-Level HTML:**
```markdown
<div class="custom">
Content in HTML div
</div>

<details>
<summary>Collapsible section</summary>
Hidden content revealed on click
</details>
```

**Inline HTML:**
```markdown
Text with <span style="color: red">colored text</span> inline.
Use <kbd>Ctrl</kbd> + <kbd>C</kbd> for keyboard shortcuts.
<sup>superscript</sup> and <sub>subscript</sub>
```

**Definition Lists:**
```markdown
<dl>
<dt>Term 1</dt>
<dd>Definition 1</dd>

<dt>Term 2</dt>
<dd>Definition 2</dd>
</dl>
```

**Common Use Cases:**
- `<details>` / `<summary>` - Collapsible sections
- `<kbd>` - Keyboard keys
- `<sup>` / `<sub>` - Superscript/subscript
- `<dl>` / `<dt>` / `<dd>` - Definition lists
- `<br>` - Hard line breaks
- `<mark>` - Highlighted text (processor-dependent)

---

### Markdown Inside HTML

**Important Rules:**
```markdown
<!-- Markdown DOES NOT work inside most HTML block elements -->
<div>
**This won't be bold**
</div>

<!-- Markdown DOES work in certain contexts -->
<div markdown="1">
**This may be bold** (depends on processor)
</div>
```

**Best Practice:**
- Use pure markdown when possible
- Only use HTML for features markdown doesn't support
- Test processor-specific behavior

---

## Special Characters & Escaping

### Characters That Need Escaping

**Markdown Special Characters:**
```markdown
\*   asterisk
\_   underscore
\{\} curly braces
\[\] square brackets
\(\) parentheses
\#   hash mark
\+   plus sign
\-   minus sign (hyphen)
\.   period
\!   exclamation mark
\|   pipe
\`   backtick
```

**Usage:**
```markdown
\*Not italic\* - literal asterisks
Price: \$19.99 - literal dollar sign
Use \\ for literal backslash
```

---

### Automatic Character Conversion

**Ampersands and Angle Brackets:**
```markdown
AT&T - automatically converts to AT&amp;T
4 < 5 - automatically converts to 4 &lt; 5
```

**Copyright and Trademark:**
```markdown
(c) © (works in some processors)
(tm) ™ (works in some processors)
(r) ® (works in some processors)
```

---

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

**📋 Reference Complete** | Now ready for document readability enhancement using invisible excellence principles.