// Program.cs
namespace Uebungen.Kapitel4
{
    using SuperHeftigLibrary.IO;

    /// <summary>
    /// Eintrittspunkt für Kapitel4.
    /// </summary>
    public class Program
    {
        /// <summary>
        /// Ausführbare Main-Methode für die Anwendung.
        /// </summary>
        public static void Main()
        {
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Info);
            System.Console.WriteLine("Text");
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Standard);
        }
    }
}