using System;
using System.IO;

namespace LostFoot
{
	public class CSharpLayerImpl: DrawMe
	{
		public Game game;
		public int width = 800;
		public int height = 480;

		public CSharpLayerImpl() : base()
		{
		}

		public override void init()
		{
			try 
			{
				RustyGL.glViewport (0, 0, width, height);
				RustyGL.glEnable ((uint)RustyGL.GL_TEXTURE_2D);
				RustyGL.glEnable ((uint)RustyGL.GL_DEPTH_TEST);
				RustyGL.glEnable ((uint)RustyGL.GL_BLEND);
				RustyGL.glBlendFunc ((uint)RustyGL.GL_SRC_ALPHA, (uint)RustyGL.GL_ONE_MINUS_SRC_ALPHA);

				JupiterCSHARP.startJupiter ();

				File.setBase("/home/pavel/workspace/Jupiter/samples/Box");

				var shader = new FileShader(new File("Resources/sprite.vs"), new File("Resources/sprite.fs"));

				var bgImage = new PngImage("Resources/bg.png");
				var bg = new Transform ();
				bg.translate(0, 0, -1);
				bg.setScaleF(0.02f);
				bg.addNode(new Sprite(new ImageTexture(bgImage), new ImageShape(bgImage), shader));

				var rootNode = new Node();

				var cameraTrans = new Transform(0, 0, -20);
				var camera = new Camera(cameraTrans, new Perspective(45.0f, width * 1.0f / height * 1.0f, 1.0f, 1000.0f));
				camera.addNode(cameraTrans);
				camera.addNode(bg);

				rootNode.addNode(camera);

				game = new Game();
				game.setRootNode(rootNode);
				game.addVisitor(new RenderVisitor());
				game.setWidth(width);
				game.setHeight(height);
			}
			catch (Exception ex) 
			{
				Console.WriteLine ("init exception " + ex.Message);
			}
		}

		public override void draw()
		{
			try
			{
				RustyGL.glClear((uint)RustyGL.GL_COLOR_BUFFER_BIT | (uint)RustyGL.GL_DEPTH_BUFFER_BIT);
				RustyGL.glClearColor(0.1f, 0.3f, 0.1f, 1.0f);

				game.draw ();
			}
			catch (Exception e)
			{
				Console.WriteLine ("draw exception " + e.Message);
			}
		}
	}
	
}
