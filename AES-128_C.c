#include <stdio.h>
#include <stdint.h>

#define Nb 4
#define Nk 4
#define Nr 10

typedef uint8_t state_t[4][4];
static state_t* state;

static const uint8_t sbox[256] = {
  // S-box values
};

static const uint8_t rsbox[256] = {
  // Inverse S-box values
};

static const uint8_t Rcon[11] = {
  // Rcon values
};

static uint8_t RoundKey[176];
static uint8_t Key[16];

void KeyExpansion(void) {
  // Implementação da expansão de chave
}

void AddRoundKey(uint8_t round) {
  // Implementação da adição da chave de rodada
}

void SubBytes(void) {
  // Implementação da substituição de bytes
}

void ShiftRows(void) {
  // Implementação do deslocamento de linhas
}

void MixColumns(void) {
  // Implementação da mistura de colunas
}

void Cipher(void) {
  // Implementação da cifra AES
}

void AES128_ECB_encrypt(uint8_t* input, const uint8_t* key, uint8_t *output) {
  // Implementação da criptografia AES-128 no modo ECB
}

int main() {
  uint8_t key[16] = { // Chave de exemplo
    0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
    0xab, 0xf7, 0xcf, 0x45, 0x9f, 0x4f, 0x6a, 0x4b
  };

  uint8_t input[16] = { // Texto claro de exemplo
    0x32, 0x43, 0xf6, 0xa8, 0x88, 0x5a, 0x30, 0x8d,
    0x31, 0x31, 0x98, 0xa2, 0xe0, 0x37, 0x07, 0x34
  };

  uint8_t output[16];

  AES128_ECB_encrypt(input, key, output);

  printf("Texto cifrado:\n");
  for (int i = 0; i < 16; i++) {
    printf("%02x ", output[i]);
  }
  printf("\n");

  return 0;
}
