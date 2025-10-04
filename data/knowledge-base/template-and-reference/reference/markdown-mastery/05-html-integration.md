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

