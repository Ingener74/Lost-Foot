using System;
using System.IO;

namespace LostFoot
{
	public class MainClass
	{
		public static void Main()
		{
			Console.WriteLine("current directory " + Directory.GetCurrentDirectory());

			CSharpGameLogicImpl gameLogic = new CSharpGameLogicImpl ();

			CSharpLayerImpl drawLayer = new CSharpLayerImpl ();

			CSTouchSink touchSink = new CSTouchSink ();

			RustyFist rf = new RustyFist (drawLayer, gameLogic, touchSink);

			/*
			rf.setDrawLayer (drawLayer);
			rf.setGameLogic (gameLogic);
			*/

			rf.run ();
		}
	}
}

