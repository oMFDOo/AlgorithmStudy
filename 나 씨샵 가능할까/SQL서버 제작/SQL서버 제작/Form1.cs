using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SQL서버_제작
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Btn_Click(object sender, EventArgs e)
        {
            if (TbID.Text == "Mfdo" && TbPW.Text == "Mfd123")
            {
                this.Hide();
                Form2 Nform = new Form2();   //새로운 객체 생성
                Nform.Show();
            }
            else {
                MessageBox.Show("아이디나 비밀번호가 틀렸습니다");
            }
        }   
    }
}
