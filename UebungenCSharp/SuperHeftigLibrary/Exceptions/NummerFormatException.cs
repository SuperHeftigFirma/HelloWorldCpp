// NummerFormatException.cs

namespace SuperHeftigLibrary.Exceptions
{
    using System;
    using System.Runtime.Serialization;

    /// <summary>
    /// Ausnahmeklasse für fehlerhafte Nummernformate. 
    /// </summary>
    [Serializable]
    public class NummerFormatException : ArgumentException
    {
        /// <summary>
        /// Standardkonstruktor ohne Parameter. Gibt Standardmeldung aus.
        /// </summary>
        public NummerFormatException() : base("Keine gueltige Nummer eingegeben")
        {
        }

        /// <summary>
        /// Konstruktor mit benutzerdefinierter Meldung.
        /// </summary>
        /// <param name="meldung">Benutzerdefinierte Meldung</param>
        public NummerFormatException(string meldung) : base(meldung)
        {
        }

        /// <summary>
        /// Konstruktor mit benutzerdefinierter Meldung und Angabe einer übergeordneten Exception, 
        /// die innerhalb eines try-catch-blocks weiter an diese Exception delegiert wurde.
        /// </summary>
        /// <param name="meldung">Benutzerdefinierte Meldung</param>
        /// <param name="inner">Root-Exception des try-catch-blocks</param>
        public NummerFormatException(string meldung, Exception inner) : base(meldung, inner)
        {
        }

        /// <summary>
        /// Dient der Deserialisierung eines Streams, 
        /// zum Beispiel einer gepufferten Fehlerausgabe von sonstwoher.
        /// </summary>
        /// <param name="info">Überführt den Stream in Werte</param>
        /// <param name="stream">Eingabestream-Kontext mit Daten</param>
        protected NummerFormatException(SerializationInfo info, StreamingContext stream)
            : base(info, stream)
        {
        }
    }
}
