## 🔍 Ladder Rules & Constraints

### The Fundamental Rules:

1. **Direction Only**: Movement is UP or DOWN the ladder
2. **No Circles**: Cannot return to the same rung at the same level
3. **No Sideways Jumps**: Cannot jump from one ladder to parallel ladder mid-flow
4. **Progressive Only**: Each rung builds on rungs below it
5. **Dependency Flows One Way**: Upper rungs depend on lower, never reverse

```yaml
Ladder Constraints:
  movement:
    allowed: [up, down]
    forbidden: [circular, sideways, same_level_return]
  
  dependencies:
    direction: lower_rungs → upper_rungs
    never: upper_rungs → lower_rungs (at same level)
  
  structure:
    each_rung: distinct position in hierarchy
    relationships: build_upward only
```

---

