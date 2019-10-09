using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 나_씨샵_가능할까
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string strMessage = tb_Text.Text;
            
            OpenFileDialog ofg = new OpenFileDialog();
            if (cb_ImageLoad.Checked == true)
            {
                if (ofg.ShowDialog() == System.Windows.Forms.DialogResult.OK)
                {
                    Image newimage = Image.FromFile(ofg.FileName);
                    pb_Image.Image = newimage;
                }
                ofg.Dispose();
            }
            else
            {
                MessageBox.Show("딸깍이 켜주세요ㅠㅠ");
                cb_ImageLoad.Checked = true;
            }
            
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}