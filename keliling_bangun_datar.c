#include <stdio.h>

int main() {
    int pilihan;
    float keliling, panjang, lebar, jari_jari, sisi_a, sisi_b, sisi_c, sisi_d;
    const float PI = 3.14159;

    printf("Pilih bangun datar untuk menghitung keliling:\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Segitiga\n");
    printf("5. Jajar Genjang\n");
    printf("6. Trapesium\n");
    printf("7. Belah Ketupat\n");
    printf("8. Layang-Layang\n");
    printf("9. Poligon\n");
    printf("10. Ellips\n");
    printf("=====================================\n");
    printf("Masukkan pilihan (1-10): ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan panjang sisi persegi: ");
            scanf("%f", &sisi_a);
            keliling = 4 * sisi_a;
            printf("Keliling Persegi: %.2f\n", keliling);
            break;
        case 2:
            printf("Masukkan panjang persegi panjang: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar persegi panjang: ");
            scanf("%f", &lebar);
            keliling = 2 * (panjang + lebar);
            printf("Keliling Persegi Panjang: %.2f\n", keliling);
            break;
        case 3:
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            keliling = 2 * PI * jari_jari;
            printf("Keliling Lingkaran: %.2f\n", keliling);
            break;
        case 4:
            printf("Masukkan sisi a segitiga: ");
            scanf("%f", &sisi_a);
            printf("Masukkan sisi b segitiga: ");
            scanf("%f", &sisi_b);
            printf("Masukkan sisi c segitiga: ");
            scanf("%f", &sisi_c);
            keliling = sisi_a + sisi_b + sisi_c;
            printf("Keliling Segitiga: %.2f\n", keliling);
            break;
        case 5:
            printf("Masukkan panjang sisi alas jajar genjang: ");
            scanf("%f", &sisi_a);
            printf("Masukkan panjang sisi miring jajar genjang: ");
            scanf("%f", &sisi_b);
            keliling = 2 * (sisi_a + sisi_b);
            printf("Keliling Jajar Genjang: %.2f\n", keliling);
            break;
        case 6:
            printf("Masukkan panjang sisi sejajar atas trapesium: ");
            scanf("%f", &sisi_a);
            printf("Masukkan panjang sisi sejajar bawah trapesium: ");
            scanf("%f", &sisi_b);
            printf("Masukkan panjang salah satu sisi miring (kaki) trapesium: ");
            scanf("%f", &sisi_c);
            printf("Masukkan panjang sisi miring salah satunya: ");
            scanf("%f", &sisi_d);
            panjang = sisi_a + sisi_b + sisi_c + sisi_d;
            printf("Keliling Trapesium: %.2f\n", panjang);
            break;
        case 7:
            printf("Masukan panjang sisi belah ketupat");
            scanf("%f", &sisi_a);
            keliling = 4 * sisi_a;
            printf("Keliling Belah Ketupat: %.2f\n", keliling);
            break;
        case 8:
            printf("Masukkan panjang sisi layang-layang: 1 (sisi terpanjang): ");
            scanf("%f", &sisi_a);
            printf("Masukkan panjang sisi layang-layang 2 (sisi terpendek): ");
            scanf("%f", &sisi_b);
            keliling = 2 * (sisi_a + sisi_b);
            printf("Keliling Layang-Layang: %.2f\n", keliling);
            break;
        case 9:
            {
                int n, i;
                printf("Masukkan jumlah sisi poligon: ");
                scanf("%d", &n);
                keliling = 0;
                for(i = 1; i <= n; i++) {
                    float sisi;
                    printf("Masukkan panjang sisi %d: ", i);
                    scanf("%f", &sisi);
                    keliling += sisi;
                }
                printf("Keliling Poligon: %.2f\n", keliling);
            }
            break;
        case 10:
            printf("Masukkan panjang sumbu mayor ellips: ");
            scanf("%f", &sisi_a);
            printf("Masukkan panjang sumbu minor ellips: ");
            scanf("%f", &sisi_b);
            keliling = 2 * PI * ((sisi_a + sisi_b) / 2);
            printf("Keliling Ellips (aproksimasi): %.2f\n", keliling);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}