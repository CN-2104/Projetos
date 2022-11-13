import 'package:flutter/material.dart';
import 'package:smooth_page_indicator/smooth_page_indicator.dart';

class SlideShow extends StatelessWidget {
  const SlideShow({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    var controlador = PageController();
    return Stack(
      children: [
        Container(
          height: 400,
          color: Colors.grey,
          child: PageView(
            controller: controlador,
            children: [
              Image.network(
                "https://images.unsplash.com/photo-1652229219551-96d00c057984?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=812&q=80",
                fit: BoxFit.cover,
              ),
              Image.network(
                "https://images.unsplash.com/photo-1652229219871-761d55cf7746?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1247&q=80",
                fit: BoxFit.cover,
              ),
              Image.network(
                "https://images.unsplash.com/photo-1606843802240-d1a94b6116e3?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=687&q=80",
                fit: BoxFit.cover,
              ),
              Image.network(
                "https://images.unsplash.com/photo-1511342541809-f7bb8638a5c7?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1470&q=80",
                fit: BoxFit.cover,
              ),
              Image.network(
                "https://images.unsplash.com/photo-1484929286322-47af05b4d7b0?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=2059&q=80",
                fit: BoxFit.cover,
              ),
            ],
          ),
        ),
        Positioned(
          right:0,
          left: 0,
          bottom: 0,
          child: Container(
            height: 50,
            color: Color.fromARGB(80, 200, 255, 255),
            alignment: Alignment.center,
            child: SmoothPageIndicator(
              count: 5,
              controller: controlador,
              effect: JumpingDotEffect(verticalOffset: 10),
            ),
          ),
        ),
      ],
    );
  }
}
