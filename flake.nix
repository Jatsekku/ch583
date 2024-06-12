{
  description = "Nix-flake for riscv development";

  inputs = { nixpkgs.url = "github:nixos/nixpkgs/nixos-24.05"; };

  outputs = { self, nixpkgs, ... }:
    let system = "x86_64-linux";
    in {
      formatter."${system}" = nixpkgs.legacyPackages."${system}".nixfmt-classic;
      devShells."${system}".default =
        let pkgs = import nixpkgs { inherit system; };
        in pkgs.mkShell {
          name = "riscv32-shell";
          packages = with pkgs.pkgsCross.riscv32-embedded.buildPackages;
            [ gcc ];

          shellHook = ''
            riscv32-none-elf-gcc --version
          '';
        };
    };
}
