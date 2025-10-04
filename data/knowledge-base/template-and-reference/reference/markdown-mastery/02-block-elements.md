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

