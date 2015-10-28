using System;

namespace LostFoot
{
	public class RustyImpl : RustyTest{
		public RustyImpl() : base()
		{
		}

		public override void doSomething(string str)
		{
			Console.WriteLine(str);
		}
	}
}
