using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 공부를_하자_
{
    public partial class Form1 : Form
    {
        int sum1 = 0, sum2 = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void TbSt_TextChanged(object sender, EventArgs e)
        {

        }

        private void TbNd_TextChanged(object sender, EventArgs e)
        {

        }

        private void TbRd_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            int ho = 0;
            int dadak = 0;
            bool bFirstisInt = int.TryParse(TbSt.Text, out ho);
            bool bSecondisInt = int.TryParse(TbNd.Text, out dadak);
            if (bFirstisInt == true && bSecondisInt == true)    // TbSt랑 TbNd얘네가 숫자 일 때
            {
                TbRd.Text = (ho + dadak).ToString();
            }
            else
            {
                MessageBox.Show(string.Format("{0}, {1} 이게 숫자냐?", TbSt.Text, TbNd.Text));
            }

            //if (TryParse) {                              
            //    int ho = int.Parse(TbSt.Text);
            //    int dadak = int.Parse(TbNd.Text);
            //    TbRd.Text = (ho + dadak).ToString();
            //    /* TbRd 텍스트 박스의 텍스트는 호&다닥 - 정수형 문자형으로 변환.ToString() */
            //}
            //else {
            //    MessageBox.Show("이모 바쁘다~");
            //}
            
        }
    }
}
