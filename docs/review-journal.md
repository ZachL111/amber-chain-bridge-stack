# Review Journal

This journal records the domain cases that matter before widening the public API.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 212, lane `ship`
- `stress`: `nonce pressure`, score 194, lane `ship`
- `edge`: `settlement risk`, score 185, lane `ship`
- `recovery`: `proof depth`, score 167, lane `ship`
- `stale`: `event finality`, score 221, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
