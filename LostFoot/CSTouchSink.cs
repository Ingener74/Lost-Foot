using System;

namespace LostFoot
{
	public class CSTouchSink: TouchSink
	{
		public CSTouchSink () : base()
		{
		}

		public override void touch(VectorTouch vt)
		{
			Console.WriteLine ("get touches");
			for (int i = 0; i < vt.Capacity; ++i) 
			{
				Console.WriteLine ("touch " + vt [i].id + " (" + vt [i].x + " x " + vt [i].y + ")");
			}
		}

		public override void mouse(MousePos mp)
		{
			Console.WriteLine ("mouse pos " + mp.x + " x " + mp.y);
		}
	}
}

