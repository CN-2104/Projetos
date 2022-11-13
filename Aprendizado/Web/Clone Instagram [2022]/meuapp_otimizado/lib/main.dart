// Alunos: Chistyan Nantes, Guilherme Moura, Vitor Uenojo
// Informática 7 A

// ignore_for_file: prefer_const_constructors
// ignore_for_file: prefer_const_literals_to_create_immutables

import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(Tela());
}

// Criando o nosso próprio widget
class Tela extends StatelessWidget {
  const Tela({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      theme: ThemeData(
        brightness: Brightness.light,
        primarySwatch: Colors.grey,
        appBarTheme: AppBarTheme(
          backgroundColor: Colors.white,
          elevation: 0,
          centerTitle: true,
        ),
        bottomNavigationBarTheme: BottomNavigationBarThemeData(
          elevation: 5,
        ),
      ),
      home: Scaffold(
        body: ListView(
          children: [
            Divider(
              thickness: 2,
            ),
            Stories(),
            const Card(
                url:
                    'https://images.unsplash.com/photo-1597847511602-f6213e29d13a?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8NHx8eWVsbG93JTIwZmxvd2VyfGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60',
                nomeperf: 'Juju',
                fotoperf:
                    'https://images.unsplash.com/photo-1639506150797-98b897575569?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80'),
            Card(
              url:
                  'https://images.unsplash.com/photo-1654616605705-2ef59f08ae66?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=929&q=80',
              nomeperf: 'Japa',
              fotoperf:
                  'https://images.unsplash.com/photo-1654614087336-4cfc804fdb3f?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80',
            ),
            Card(
              url:
                  'https://images.unsplash.com/photo-1580261450046-d0a30080dc9b?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=709&q=80',
              nomeperf: 'GigaChad',
              fotoperf:
                  'https://images.unsplash.com/photo-1475669913832-fd187510b578?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8N3x8YmV1dGlmdWxsJTIwbWVufGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60',
            ),
            Card(
              url:
                  'https://images.unsplash.com/photo-1624952962903-b6272c309864?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8MXx8dmVnYW4lMjBoZWFsdGh5fGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60',
              nomeperf: 'VMatta',
              fotoperf:
                  'https://images.unsplash.com/photo-1512663150964-d8f43c899f76?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1592&q=80',
            ),
          ],
        ),
        appBar: AppBar(
          title: Image.network(
              "https://www.instagram.com/static/images/web/logged_out_wordmark.png/7a252de00b20.png"),
          leading: IconButton(
            icon: Icon(Icons.photo_camera_outlined),
            onPressed: () {},
          ),
          actions: [
            IconButton(
                onPressed: () {},
                icon: Transform.rotate(
                  angle: -pi / 5,
                  child: Icon(Icons.send_outlined),
                )),
          ],
        ),
        bottomNavigationBar: BarraBaixa(),
      ),
    );
  }
}

//perfil
class Perfil extends StatelessWidget {
  final double raio;
  final bool texto;
  final String url;
  final String nome;

  const Perfil(
      {Key? key,
      this.raio = 28,
      this.texto = true,
      this.nome = 'Perfil',
      this.url = ''})
      : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        CircleAvatar(
          radius: raio,
          backgroundImage: NetworkImage(url),
        ),
        if (texto) ...[
          Text(nome),
        ],
      ],
    );
  }
}

//stories
class Stories extends StatelessWidget {
  const Stories({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Column(children: [
      Container(
        padding: EdgeInsets.symmetric(horizontal: 10),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.spaceBetween,
          children: <Widget>[
            Text("Stories", style: TextStyle(fontWeight: FontWeight.bold)),
            TextButton.icon(
              onPressed: () {},
              icon: Icon(Icons.play_arrow),
              label: Text("Watch All"),
              style: TextButton.styleFrom(
                textStyle: TextStyle(fontWeight: FontWeight.bold),
                primary: Colors.black,
              ),
            ),
          ],
        ),
      ),
      Container(
        height: 70,
        child: ListView(
          scrollDirection: Axis.horizontal,
          shrinkWrap: true,
          children: [
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'Japa',
              url:
                  'https://images.unsplash.com/photo-1654614087336-4cfc804fdb3f?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80',
            ),
            SizedBox(width: 20),
            Perfil(
              nome: 'Juju',
              url:
                  'https://images.unsplash.com/photo-1639506150797-98b897575569?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80',
              raio: 24,
            ),
            SizedBox(width: 20),
            Perfil(
              nome: 'Ana',
              url:
                  'https://images.unsplash.com/photo-1485043433441-db091a258e5a?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8MTZ8fGJldXRpZnVsbCUyMGdpcmx8ZW58MHx8MHx8&auto=format&fit=crop&w=500&q=60',
              raio: 24,
            ),
            SizedBox(width: 20),
            Perfil(
              nome: 'Marianna',
              url:
                  'https://images.unsplash.com/photo-1507101105822-7472b28e22ac?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8MTF8fGJldXRpZnVsbCUyMGdpcmx8ZW58MHx8MHx8&auto=format&fit=crop&w=500&q=60',
              raio: 24,
            ),
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'GigaChad',
              url:
                  'https://images.unsplash.com/photo-1475669913832-fd187510b578?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8N3x8YmV1dGlmdWxsJTIwbWVufGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60',
            ),
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'MarcosV',
              url:
                  'https://images.unsplash.com/photo-1495638488670-437e54b3bab4?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8Nnx8YmV1dGlmdWxsJTIwbWVufGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60',
            ),
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'Leticia',
              url:
                  'https://images.unsplash.com/photo-1529218164294-0d21b06ea831?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8Mnx8YmV1dGlmdWxsJTIwd29tZW58ZW58MHx8MHx8&auto=format&fit=crop&w=500&q=60',
            ),
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'VMatta',
              url:
                  'https://images.unsplash.com/photo-1512663150964-d8f43c899f76?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1592&q=80',
            ),
            SizedBox(width: 20),
            Perfil(
              raio: 24,
              nome: 'ArmandoP',
              url:
                  'https://images.unsplash.com/photo-1506794778202-cad84cf45f1d?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxzZWFyY2h8NDN8fGJldXRpZnVsbCUyMG1lbnxlbnwwfHwwfHw%3D&auto=format&fit=crop&w=500&q=60',
            ),
            SizedBox(width: 20),
          ],
        ),
      ),
      SizedBox(
        height: 14,
      ),
      Divider(
        thickness: 7,
        height: 17,
      ),
    ]);
  }
}

//card
class Card extends StatelessWidget {
  final String url, nomeperf, fotoperf;
  const Card(
      {Key? key, this.url = '', this.nomeperf = 'Perfil', this.fotoperf = ''})
      : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Container(
          //height: 60,
          child: ListTile(
            leading: Perfil(
              url: fotoperf,
              raio: 20,
              texto: false,
            ),
            title: Text(nomeperf),
            subtitle: Text("Três Lagoas, Brazil"),
            trailing: Icon(Icons.more_horiz, size: 38),
          ),
        ),
        Container(
          child: Image.network(
            url,
            fit: BoxFit.cover,
          ),
        ),
        Row(
          mainAxisAlignment: MainAxisAlignment.start,
          children: <Widget>[
            IconButton(
              onPressed: () {},
              icon: Icon(Icons.favorite_border, size: 25),
            ),
            IconButton(
              onPressed: () {},
              icon: Icon(Icons.mode_comment_outlined, size: 25),
            ),
            IconButton(
              onPressed: () {},
              icon: Transform.rotate(
                  angle: -pi / 5,
                  child: Icon(
                    Icons.send_outlined,
                    size: 25,
                  )),
            ),
            Spacer(),
            IconButton(
              onPressed: () {},
              icon: Icon(
                Icons.bookmark_border,
                size: 25,
              ),
            ),
          ],
        ),
        SizedBox(
          height: 13,
        ),
        Divider(
          thickness: 7,
          height: 7,
        ),
      ],
    );
  }
}

//barrabaixa
class BarraBaixa extends StatelessWidget {
  const BarraBaixa({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return BottomNavigationBar(
      type: BottomNavigationBarType.fixed,
      backgroundColor: Colors.white,
      selectedItemColor: Colors.black,
      unselectedItemColor: Colors.black,
      selectedFontSize: 14,
      unselectedFontSize: 14,
      showSelectedLabels: false,
      showUnselectedLabels: false,
      onTap: (value) {
        // Respond to item press.
      },
      items: [
        BottomNavigationBarItem(
          label: '',
          icon: Icon(Icons.home_outlined),
        ),
        BottomNavigationBarItem(
          label: '',
          icon: Icon(Icons.search),
        ),
        BottomNavigationBarItem(
          label: '',
          icon: Icon(Icons.add_box_outlined),
        ),
        BottomNavigationBarItem(
          label: '',
          icon: Icon(Icons.favorite_border),
        ),
        BottomNavigationBarItem(
          label: '',
          icon: Icon(Icons.person_outlined),
        ),
      ],
    );
  }
}
