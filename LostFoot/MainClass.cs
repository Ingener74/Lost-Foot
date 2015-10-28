using System;

namespace LostFoot
{
	public class MainClass
	{
		public static void Main(){
			RustyFist rf = new RustyFist ();
			RustyImpl ri = new RustyImpl ();
			rf.setTest (ri);
			rf.test ();
		}
	}
}

