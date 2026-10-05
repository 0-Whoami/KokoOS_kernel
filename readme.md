<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Tiny5&display=swap" rel="stylesheet">

<style>
    .logo_cont{
        display : flex;
        flex-direction:row;
        position : relative;
        margin-bottom : 5%;
        background : black;
        border-radius : 10px;
    }
    .logo {
        flex : 1;    
    }
    
    .p_name{
        flex : 2;
        margin-top : 2%;
        margin-right : 4%;
    }

    .m{
        position : absolute;
        right : 5%;
        bottom : 5%;
        color : white;
        font-family: "Tiny5", monospace;
        font-weight: 400;
        font-style: normal;
        font-size : 2em;
        text-box-trim: trim-both;
    }
</style>

<div class="logo_cont">
    <img class="logo" src="./docs/icon.svg" alt="Logo of Koko">
    <img class="p_name" src="./docs/name.svg" alt="KokoOS">
    <span class="m">Kernel</span>
</div>

<p align="center">
  A minimal, portable kernel for low-cost devices.<br>
  <a href="https://YOUR-SITE-URL">Website</a> ·
  <a href="#roadmap">Roadmap</a>
</p>

> ⚠️ Early development. APIs and layout will change.

## Features

- Thin architecture layer: ARM and RISC-V targets
- Portable public headers
- pthread-style threading API
- Modular tree: every directory can be removed independently

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