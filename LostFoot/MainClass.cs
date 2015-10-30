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

			RustyFist rf = new RustyFist ();

			rf.setGameLogic (gameLogic);

			rf.run ();
		}
	}
}

