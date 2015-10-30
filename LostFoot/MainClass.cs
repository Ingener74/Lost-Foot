using System;
using System.IO;
// using OpenTK.Graphics.OpenGL;

namespace LostFoot
{
	public class CSharpLayerImpl: DrawMe
	{
		public CSharpLayerImpl() : base()
		{
		}

		public override void init(TestIntPtr t)
		{
			try 
			{
				/*
				var context = t.getContext();

				using( 
					var dummy = new OpenTK.Graphics.GraphicsContext(
						new OpenTK.ContextHandle(context),
						(name) => { return t.getAddress(name); },
						() => { return new OpenTK.ContextHandle(t.getContext()); }
					) 
				);
				*/
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
				/*
				GL.Clear (ClearBufferMask.ColorBufferBit | ClearBufferMask.DepthBufferBit);
				GL.ClearColor (0.1f, 0.3f, 0.1f, 1.0f);
				*/
				Console.WriteLine("draw");

				MonoGLo.glClear(MonoGLo.GL_COLOR_BUFFER_BIT | MonoGLo.GL_DEPTH_BUFFER_BIT);
				MonoGLo.glClearColor(0.1f, 0.3f, 0.1f, 1.0f);
			}
			catch (Exception e)
			{
				Console.WriteLine ("draw exception " + e.Message);
			}
		}
	}

	public class MainClass
	{
		public static void Main()
		{
			Console.WriteLine("current directory " + Directory.GetCurrentDirectory());

			CSharpGameLogicImpl gameLogic = new CSharpGameLogicImpl ();

			CSharpLayerImpl drawLayer = new CSharpLayerImpl ();

			RustyFist rf = new RustyFist ();

			rf.setDrawLayer (drawLayer);
			rf.setGameLogic (gameLogic);

			rf.run ();
		}
	}
}

