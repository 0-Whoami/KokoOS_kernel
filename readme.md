<img style="width:100%" src="./docs/name.svg" alt="Koko">


<p align="center">
  A minimal, portable kernel for low-cost devices.<br>
  Used in <a href="Website">KokoOs</a><br>
  <a href="https://YOUR-SITE-URL">Website</a> ·
  <a href="./docs">Docs</a> ·
  <a href="#roadmap">Roadmap</a>
</p>

> ⚠️ Early development. APIs and layout will change.

## Features

- Thin architecture layer
- Portable public headers
- pthread-style threading API
- Modular tree

## Layout

| Path       | Purpose                                   |
|------------|-------------------------------------------|
| `arch/`    | Per-architecture code and platform stubs  |
| `include/` | Public headers (arch definitions, threads)|
| `src/`     | Kernel implementation                     |
| `tests/`   | Regression and verification tests         |
| `docs/`    | Documentation and assets                  |

## Build

```sh
# TODO: toolchain + target
make ARCH=arm
```

## Run / Test

```sh
# TODO: emulator (e.g. QEMU) command
make test
```

## Design notes

- **Portability:** all hardware access lives in `arch/`; `src/` never touches it directly.
- **Threading:** pthread-style API, so existing code ports easily.

## Roadmap

- [ ] Arch init and boot support
- [ ] Kernel utilities and OS abstractions
- [ ] Complete threading primitives
- [ ] Test coverage and CI
- [ ] Multi-target support via a clean platform interface
- [ ] GUI layer (LVGL under evaluation)

## Contributing

Open an issue before large changes. Keep changes confined to one layer (`arch/` vs `src/`) where possible.

## License

TODO