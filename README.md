# Cara Install Terminalizer di Windows dan menggunakan mariadb
# 1. Pasang Node.js
Download Node.js versi 22.21.1 LTS dari link berikut

https://nodejs.org/dist/v22.21.1/node-v22.21.1-x64.msi

Jalankan file installer.

Ikuti proses instalasi sampai selesai.

# 2. Buka Command Prompt
Tekan Windows + R.
Ketik cmd
Tekan Enter.
# 3. Install Terminalizer Secara Global`
Jalankan perintah berikut:
npm install -g terminalizer
Jika sudah selesai tampilannya akan seperti ini
<img width="425" height="87" alt="image" src="https://github.com/user-attachments/assets/6feaca7c-c5f6-44c6-ad0a-2cbc7b342912" />
# record mariadb
# 1. CEK TERMINALIZER
Masukan prompt

```bash
terminalizer --version
```

jika muncul versi, kita lanjut
# 2. Memulai Record Terminalizer
buat nama folder record 
contoh:
```bash
terminalizer record hakim
```

jika sudah, bakal muncul seperi ini 

<img width="720" height="124" alt="image" src="https://github.com/user-attachments/assets/72a7c444-653c-482a-835e-6760c6df31a6" />

# 3. Menjalankan MariaDB di Windows
jika di prompt mariadb nya 
ketik
```bash
mysql -u root -p
```
jika di cmd 
ketik
```bash
& "C:\Program Files\MariaDB 12.0\bin\mysql.exe" -u root -p
```
masukan pw kalian

# 4. Login MariaDB Berhasil
Jika password benar, akan muncul:
```bash
MariaDB [(none)]>
```

# 5. Contoh Perintah Dasar MariaDB
seperti :
```bash
show databases;
```
```bash
create database perpustakaan; use perpustakaan;
```
```bash
CREATE TABLE buku (no INT AUTO_INCREMENT PRIMARY KEY, judul VARCHAR(100), pengarang VARCHAR(100), penerbit VARCHAR(100), tahun_terbit YEAR); INSERT INTO buku (judul, pengarang, penerbit, tahun_terbit) VALUES ('aku hebat','luqman hakim','gramedia',2005),('bunga mawar','burhan','kompas',2003),('terjun bebas','agoy','media tap',2002);
```
```bash
SELECT * FROM buku;
```
```bash
CREATE TABLE anggota (id_anggota INT AUTO_INCREMENT PRIMARY KEY, nama VARCHAR(100), alamat VARCHAR(200)); INSERT INTO anggota (nama, alamat) VALUES ('luqman hakim', 'Jl. Kenanga No. 8'), ('rehan caur', 'Jl. legoso No. 3');
```
```bash
select * anggota;
```
```bash
CREATE TABLE peminjaman (id_peminjaman INT AUTO_INCREMENT PRIMARY KEY, id_anggota INT, id_buku INT, tanggal_pinjam DATE, FOREIGN KEY (id_anggota) REFERENCES anggota(id_anggota)); INSERT INTO peminjaman (id_anggota, id_buku, tanggal_pinjam) VALUES (1, 10, '2025-02-03'), (2, 5, '2025-02-04');
```
```bash
select * from pemijaman;
```

# 6. Mengakhiri Record Terminalizer
ketik 
```bash
exit
```

lalu

```bash
ctrl+D
```

setelah itu pencet 'enter'

bila hasil nya seperti ini :
<img width="944" height="140" alt="image" src="https://github.com/user-attachments/assets/13d7fc2f-f05d-4f5e-952c-ef2db359e190" />
 anda tinggal ketik 

 ```bash
 exit
```
 nanti muncul 
 <img width="182" height="28" alt="image" src="https://github.com/user-attachments/assets/4cf217ea-673d-49c8-be84-0ae1b0332401" />
 itu berarti record anda berhasil

# 7. cek file demo.yml
ketik :
```bash
dir demo.*
```
kalau sudah muncul seperti ini :

<img width="459" height="139" alt="image" src="https://github.com/user-attachments/assets/197b81e0-c681-4c5a-8e33-f06195867548" />

 berarti file demo.yml kalian berhasil di simpan
# 8. untuk menjadikan file demo.gif
pastikan kamu di folder terminal kalian : contoh

```C:\Users\USER```

ketika kalian sudah berada di filder tersebut

kalian jalankan :

```bash
terminalizer render hakim
```

tunggus sampai muncul :

✔ GIF successfully created

maka file demo.gif kalian sudah muncul di local dick c

contoh file demo.gif

<img width="884" height="435" alt="image" src="https://github.com/user-attachments/assets/ffc2b061-5dec-4563-a455-41073bab9c75" />








