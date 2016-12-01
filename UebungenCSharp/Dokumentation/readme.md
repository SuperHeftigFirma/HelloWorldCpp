## Extensions

[Visual StyleCop](https://marketplace.visualstudio.com/items?itemName=ChristopheHEISER.VisualStyleCop)

## Struktur

* Projektmappe in Wurzelverzeichnis
* Kapitel in Subprojekten organisiert (jeweils eigenes Verzeichnis)
* Namespaces f�r Kapitel `Uebungen.Projektname.Unterordner` 
	* Zum Beispiel: `Uebungen.Kapitel1.GUI`
* Namespaces f�r eigene Library `Projektname.Unterordner`
	* Zum Beispiel: `SuperHeftigLibrary.Tools`
* Dokumentation in `root/Dokumentation`
 
## Konfiguration

* Subprojekt-Einstellungen
	* Verweise ben�tigen die SuperHeftigLibrary als Projektverweis oder als DLL
* StyleCop-Einstellungen
	* Gesamte Projektmappe in `root/Settings.StyleCop`
	* Zu ignorierende Dateien in jeweiliger .csproj:
```
<ItemGroup>
    <Compile Include="Program.cs" />
    <Compile Include="Properties\AssemblyInfo.cs">
      <ExcludeFromStyleCop>True</ExcludeFromStyleCop>
    </Compile>
  </ItemGroup>
```
* Projektmappen-Einstellungen in .sln-Datei
* Dokumentation manuell in Projektmappenexplorer eingebunden
	* Per Rechtsklick auf Doku -> Hinzuf�gen -> Vorhandenes Element

