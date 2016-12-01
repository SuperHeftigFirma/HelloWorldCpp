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
            KonsoleOutput.WriteLineBunt(
                "Beliebige Anzahl von Zahlen eingeben, die am Ende summiert werden sollen."
                + "Nach Eingabe eines ungültigen Zeichens wird summiert.\n",
                KonsoleOutput.Farben.Info);

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
                KonsoleOutput.WriteLineBunt("\n" + nfex.Message, KonsoleOutput.Farben.Fehler);
            }
            catch (UeberlaufException uebex)
            {
                KonsoleOutput.WriteLineBunt(
                    string.Format(
                        "\n{0:s}\n[Max]{1:d}\t[Min]{2:d}\n",
                        uebex.Message,
                        int.MaxValue,
                        int.MinValue),
                    KonsoleOutput.Farben.Fehler);
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
            KonsoleOutput.WriteLineBunt(
                string.Format(
                    "\nDie Summe der eingegebenen gültigen Zahlen ist: {0:d}\n", zahl),
                KonsoleOutput.Farben.Erfolg);
        }
    }
}