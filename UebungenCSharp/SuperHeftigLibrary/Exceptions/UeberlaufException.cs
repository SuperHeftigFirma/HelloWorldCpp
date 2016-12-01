// UeberlaufException.cs

namespace SuperHeftigLibrary.Exceptions
{
    using System;
    using System.Runtime.Serialization;

    /// <summary>
    /// Ausnahmeklasse für fehlerhafte Nummernformate. 
    /// </summary>
    [Serializable]
    public class UeberlaufException : OverflowException
    {
        /// <summary>
        /// Standardkonstruktor ohne Parameter. Gibt Standardmeldung aus.
        /// </summary>
        public UeberlaufException() : base("Overflow des Datentyps (positiv oder negativ)")
        {
        }

        /// <summary>
        /// Konstruktor mit benutzerdefinierter Meldung.
        /// ToDo: Datentyp oder Min- Max-Werte übergeben und in Fehlermeldung anzeigen.
        /// </summary>
        /// <param name="meldung">Benutzerdefinierte Meldung</param>
        public UeberlaufException(string meldung) : base(meldung)
        {
        }

        /// <summary>
        /// Konstruktor mit benutzerdefinierter Meldung und Angabe einer übergeordneten Exception, 
        /// die innerhalb eines try-catch-blocks weiter an diese Exception delegiert wurde.
        /// </summary>
        /// <param name="meldung">Benutzerdefinierte Meldung</param>
        /// <param name="inner">Root-Exception des try-catch-blocks</param>
        public UeberlaufException(string meldung, Exception inner) : base(meldung, inner)
        {
        }

        /// <summary>
        /// Dient der Deserialisierung eines Streams, 
        /// zum Beispiel einer gepufferten Fehlerausgabe von sonstwoher.
        /// </summary>
        /// <param name="info">Überführt den Stream in Werte</param>
        /// <param name="stream">Eingabestream-Kontext mit Daten</param>
        protected UeberlaufException(SerializationInfo info, StreamingContext stream)
            : base(info, stream)
        {
        }
    }
}
