// Mathe.cs

namespace SuperHeftigLibrary.Tools
{
    /// <summary>
    /// Stellt Rechenmethoden zur Verfügung.
    /// </summary>
    public static class Mathe
    {
        /// <summary>
        /// Nimmt eine unbestimmte Anzahl an Parametern entgegen und gibt deren Gesamt-Summe aus.
        /// </summary>
        /// <param name="zahlen">Array von Zahlen</param>
        /// <returns>Summe als Integer</returns>
        public static int BerechneSumme(params int[] zahlen)
        {
            int summe = 0;
            foreach (int zahl in zahlen)
            {
                try
                {
                    summe = checked(summe + zahl);
                }
                catch (System.OverflowException)
                {
                    throw new Exceptions.UeberlaufException();
                }
            }

            return summe;
        }
    }
}
