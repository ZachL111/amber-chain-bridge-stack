# amber-chain-bridge-stack

`amber-chain-bridge-stack` is a C project in blockchain tooling. Its focus is to implement a C blockchain tooling project for bridge graph analysis, using node-edge fixtures and cycle and reachability reports.

## Problem It Tries To Make Smaller

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Amber Chain Bridge Stack Review Notes

For a quick review, compare `event finality` with `proof depth` before reading the middle cases.

## Working Pieces

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/amber-chain-bridge-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `proof depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Design Notes

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Example Run

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Known Limits

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
