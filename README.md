# My 64-bit OS!

#### 🔴 This code is not all written by me. Most of it was written following [this](https://www.youtube.com/playlist?list=PLZQftyCk7_SeZRitx5MjBKzTtvk0pHMtp) tutorial by CodePulse on Youtube, as well as following the [OSdev wiki](https://wiki.osdev.org/)

## Setup

Build an image for the build-environment: `docker build buildenv -t x64-os`

(If you're having issues with apt, run the above command with `--network host`)

## Build

Enter build environment:
 - Linux or MacOS: `docker run --rm -it -v "$pwd":/root/env x64-os`
 - Windows (CMD): `docker run --rm -it -v "%cd%":/root/env x64-os`
 - Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" x64-os`
 - NOTE: If you are having trouble with an unshared drive, ensure your docker daemon has access to the drive you're development environment is in. For Docker Desktop, this is in "Settings > Shared Drives" or "Settings > Resources > File Sharing".

Build for x86 (other architectures may come in the future):
 - `make build-x86_64`

To leave the build environment, enter `exit`.

## Emulate

You can emulate your operating system using [Qemu](https://www.qemu.org/):

 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
 - NOTE: When building your operating system, if changes to your code fail to compile, ensure your QEMU emulator has been closed, as this will block writing to `kernel.iso`.

Alternatively, you should be able to load the operating system on a USB drive and boot into it when you turn on your computer.

## Cleanup

Remove the build-evironment image:
 - `docker rmi x64-os -f`
