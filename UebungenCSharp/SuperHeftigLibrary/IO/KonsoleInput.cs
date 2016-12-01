// KonsoleInput.cs
namespace SuperHeftigLibrary.IO
{
    /// <summary>
    /// Stellt Methoden für den Input per Konsole zur Verfügung.
    /// </summary>
    public static class KonsoleInput
    {
        /// <summary>
        /// Lese Benutzereingabe aus Konsole und gebe diese als Integer zurück.
        /// </summary>
        /// <returns>Integer Benutzereingabe</returns>
        /// <exception cref="Exceptions.NummerFormatException">Bei Fehleingabe</exception>
        public static int LeseEingabeAlsInteger()
        {
            int output;
            System.Console.Write("Bitte geben Sie eine ganze Zahl ein: ");
            if (!int.TryParse(System.Console.ReadLine(), out output))
            {
                throw new Exceptions.NummerFormatException();
            }

            return output;
        }
    }
}
