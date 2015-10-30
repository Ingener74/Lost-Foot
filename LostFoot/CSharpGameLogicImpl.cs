using System;

namespace LostFoot
{
	public class CSharpGameLogicImpl : GameLogic 
	{
		public CSharpGameLogicImpl() : base()
		{
		}

		public override void doSomething(string str)
		{
			Console.WriteLine(str);
		}
	}
}
