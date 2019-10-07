Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Const intSub As Integer = 6
        Dim intMin() As Integer = {7, 5, 0, 0, 6, 3, 4}
        Dim intMax() As Integer = {9, 7, 4, 9, 9, 6, 8}
        Dim intPin(intSub) As Integer

        'make integers of text input
        intPin(0) = CInt(TextBox1.Text)
        intPin(1) = CInt(TextBox2.Text)
        intPin(2) = CInt(TextBox3.Text)
        intPin(3) = CInt(TextBox4.Text)
        intPin(4) = CInt(TextBox5.Text)
        intPin(5) = CInt(TextBox6.Text)
        intPin(6) = CInt(TextBox7.Text)

        For intcount = 0 To intSub
            If intPin(intcount) > 9 Then
                MessageBox.Show("Please enter a single digit")
            End If
            If intPin(intcount) < intMin(intcount) Then
                MessageBox.Show("Pin number " & intcount + 1 & " needs to be bigger")
                Exit Sub
            End If
            If intPin(intcount) > intMax(intcount) Then
                MessageBox.Show("Pin number " & intcount + 1 & " needs to be smaller")
                Exit Sub
            End If
        Next
        MessageBox.Show("Valid Pin")
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
        TextBox4.Text = ""
        TextBox5.Text = ""
        TextBox6.Text = ""
        TextBox7.Text = ""
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Me.Close()
    End Sub
End Class
