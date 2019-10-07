Imports System.IO
Imports System.Net ' for web client
Imports System.Drawing

Module view
    Public strCard As String
    Dim strSite As String
    Sub cView(strCard)
        'If strCard = "twiddle" Then
        'strSite = "hhttp://static.starcitygames.com/sales/cardscans/MTG/7ED/en/foil/Twiddle.jpg"
        'frmCView.lblTest.Text = "Twiddle"
        'End If
        Try
            Dim wc As New WebClient
            Dim strSite As String
            Dim bytes() As Byte = wc.DownloadData(strSite)
            Dim Imgstream As New MemoryStream(bytes)
            frmCView.pbCard.Image = Image.FromStream(Imgstream)
        Catch
            'MessageBox = "Error"
        End Try
    End Sub
End Module


