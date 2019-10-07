Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles BtnCalc.Click

        Dim decMiles As Decimal
        Dim decGal As Decimal
        Dim decMPG As Decimal


        Try
            decMiles = CDec(txtMiles.Text)
            decGal = CDec(txtGal.Text)
            decMPG = decMiles / decGal
            lblMPG.Text = decMPG.ToString("N")
        Catch
            MessageBox.Show("All values should be in numeric whole numbers.")
        End Try
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles btnCLear.Click
        txtMiles.Text = String.Empty
        txtGal.Text = String.Empty
        lblMPG.Text = String.Empty
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
