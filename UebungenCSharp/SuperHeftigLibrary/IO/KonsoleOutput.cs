// KonsoleOutput.cs
namespace SuperHeftigLibrary.IO
{
    /// <summary>
    /// Stellt Methoden für den Output per Konsole zur Verfügung.
    /// </summary>
    public static class KonsoleOutput
    {
        /// <summary>
        /// Enum für Konsolenfarben.
        /// </summary>
        public enum Farben : int
        {
#pragma warning disable CS1591 // Fehledes XML-Kommentar für öffentlich sichtbaren Typ oder Element
            Standard = 0,
            Erfolg = 1,
            Fehler = 2,
            Info = 3,
#pragma warning restore CS1591 // Fehledes XML-Kommentar für öffentlich sichtbaren Typ oder Element
        }

        /// <summary>
        /// Ändere Farben der Ausgabekonsole, falls möglich.
        /// </summary>
        /// <param name="farbenIndex">Index der Farbe entsprechend Enum</param>
        public static void SetzeKonsolenFarbe(Farben farbenIndex)
        {
            switch ((int)farbenIndex)
            {
                case (int)Farben.Standard:
                    System.Console.ResetColor();
                    break;
                case (int)Farben.Erfolg:
                    System.Console.ForegroundColor = System.ConsoleColor.Green;
                    System.Console.BackgroundColor = System.ConsoleColor.Black;
                    break;
                case (int)Farben.Fehler:
                    System.Console.ForegroundColor = System.ConsoleColor.Red;
                    System.Console.BackgroundColor = System.ConsoleColor.Black;
                    break;
                case (int)Farben.Info:
                    System.Console.ForegroundColor = System.ConsoleColor.Yellow;
                    System.Console.BackgroundColor = System.ConsoleColor.Black;
                    break;
                default:
                    SetzeKonsolenFarbe(Farben.Standard);
                    break;
            }
        }
    }
}
