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
# SETELAH SUDAH BERHASIL DI INSTALL 
# 1. CEK TERMINALIZER
Masukan prompt

```terminalizer --version```

jika muncul versi, kita lanjut
# 2. Memulai Record Terminalizer
```terminalizer record demo```

jika sudah, bakal muncul seperi ini 
<img width="720" height="124" alt="image" src="https://github.com/user-attachments/assets/72a7c444-653c-482a-835e-6760c6df31a6" />

# 3. Menjalankan MariaDB di Windows
 ``` & "C:\Program Files\MariaDB 12.0\bin\mysql.exe" -u root -p```
masukan pw kalian

# 4. Login MariaDB Berhasil
Jika password benar, akan muncul:
```MariaDB [(none)]>```

# 5. Contoh Perintah Dasar MariaDB
seperti :
```show databases;```
```CREATE TABLE buku (```
```use perpustakaan```
```SELECT * FROM buku;```

# 6. Mengakhiri Record Terminalizer
ketik 
```exit```

lalu

```ctrl+D```

setelah itu pencet 'enter'

bila hasil nya seperti ini :
<img width="944" height="140" alt="image" src="https://github.com/user-attachments/assets/13d7fc2f-f05d-4f5e-952c-ef2db359e190" />
 anda tinggal ketik 

 ```exit```
 nanti muncul 
 <img width="182" height="28" alt="image" src="https://github.com/user-attachments/assets/4cf217ea-673d-49c8-be84-0ae1b0332401" />
 itu berarti record anda berhasil

# 7. cek file demo.yml
ketik :
```dir demo.*```
kalau sudah muncul seperti ini :
<img width="464" height="137" alt="image" src="https://github.com/user-attachments/assets/665de3c9-c6fa-4adf-85bc-2ff07c583c0c" 
 berarti file demo.yml kalian berhasil di simpan
# 8. untuk menjadikan file demo.gif
pastikan kamu di folder terminal kalian : contoh
C:\Users\USER
ketika kalian sudah berada di filder tersebut
kalian jalankan :

```terminalizer render demo```

tunggus sampai muncul :
✔ GIF successfully created
maka file demo.gif kalian sudah muncul di file local dick







