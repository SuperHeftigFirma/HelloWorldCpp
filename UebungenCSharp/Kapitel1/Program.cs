// Program.cs
namespace Uebungen.Kapitel1
{
    using SuperHeftigLibrary.Exceptions;
    using SuperHeftigLibrary.IO;
    using SuperHeftigLibrary.Konstanten;
    using SuperHeftigLibrary.Tools;

    /// <summary>
    /// Eintrittspunkt für Kapitel1.
    /// </summary>
    public class Program
    {
        /// <summary>
        /// Ausführbare Main-Methode für die Anwendung.
        /// </summary>
        public static void Main()
        {
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Info);
            System.Console.WriteLine("Beliebige Anzahl von Zahlen eingeben, die am Ende summiert werden sollen.");
            System.Console.WriteLine("Nach Eingabe eines ungültigen Zeichens wird summiert.\n");
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Standard);

            int x = 0;

            try
            {
                while (!Welt.SchweineFlugtauglich || !Welt.HoelleZugefroren)
                {
                    x = Mathe.BerechneSumme(x, KonsoleInput.LeseEingabeAlsInteger());
                }
            }
            catch (NummerFormatException nfex)
            {
                KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Fehler);
                System.Console.WriteLine("\n" + nfex.Message);
                KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Standard);
            }
            finally
            {
                System.Console.WriteLine();
                SchreibeSummeInKonsole(x);
            }
        }

        /// <summary>
        /// Gibt Summe angegebener Zahlen formatiert in der Konsole aus.
        /// </summary>
        /// <param name="zahl">Auszugebende Zahl</param>
        private static void SchreibeSummeInKonsole(int zahl)
        {
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Erfolg);
            System.Console.WriteLine(string.Format(
                    "\nDie Summe der eingegebenen gültigen Zahlen ist: {0:d}\n", zahl));
            KonsoleOutput.SetzeKonsolenFarbe(KonsoleOutput.Farben.Standard);
        }
    }
}