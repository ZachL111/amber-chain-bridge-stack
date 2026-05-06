# Amber Chain Bridge Stack Walkthrough

This note is the quickest way to read the extra review model in `amber-chain-bridge-stack`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 212 | ship |
| stress | nonce pressure | 194 | ship |
| edge | settlement risk | 185 | ship |
| recovery | proof depth | 167 | ship |
| stale | event finality | 221 | ship |

Start with `stale` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `recovery` becomes less cautious without a clear reason, I would inspect the drag input first.
