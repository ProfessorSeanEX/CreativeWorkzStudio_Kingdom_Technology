## 📈 Ladder Recognition Patterns

### How to Recognize Ladder Structure:

```yaml
Ladder_Present_When:
  - Clear hierarchical layers exist
  - Dependencies flow one direction only
  - Each level builds exclusively on levels below
  - No circular references present
  - Progressive complexity maintained

Ladder_Broken_When:
  - Circular references appear (A→B→C→A)
  - Dependencies flow both directions between levels
  - Context loops back to same understanding point
  - Parallel structures cross mid-flow
  - Logic returns to same level without progression
```

### How to Apply Ladder Thinking:

1. **Identify the layers** in your system/documentation/code
2. **Establish the direction** (which way is "up"?)
3. **Check dependencies** - do they ALL flow one direction?
4. **Find circles** - any references that loop back at same level?
5. **Break circles** - restructure to maintain linear flow
6. **Verify progression** - does each level build ONLY on levels below?

---

