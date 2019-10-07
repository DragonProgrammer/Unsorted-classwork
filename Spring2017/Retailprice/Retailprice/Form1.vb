Public Class Form1
    Dim dblWhole As Decimal
    Dim dblRetail As Decimal
    Dim dblPercent As Decimal
    Function Retail(ByVal dblPercent As Double, ByVal dblWhole As Double) As Double
        dblRetail = dblWhole * dblPercent
        Return dblRetail
    End Function
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Me.Close()
    End Sub


    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Try
            dblPercent = CDec(txtPercent.Text)
            dblPercent = (dblPercent / 100) + 1
            dblWhole = CDec(txtWhole.Text)
        Catch
            MessageBox.Show("Make sure the inputs are positive numbers.")
        End Try
        lblRetail.Text = Retail(dblWhole, dblPercent).ToString("c")
    End Sub
End Class
