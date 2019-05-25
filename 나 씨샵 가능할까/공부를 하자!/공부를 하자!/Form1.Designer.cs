namespace 공부를_하자_
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.TbNd = new System.Windows.Forms.TextBox();
            this.TbSt = new System.Windows.Forms.TextBox();
            this.TbRd = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // TbNd
            // 
            this.TbNd.Font = new System.Drawing.Font("타이포_팩토리 M", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.TbNd.Location = new System.Drawing.Point(256, 81);
            this.TbNd.Name = "TbNd";
            this.TbNd.Size = new System.Drawing.Size(100, 38);
            this.TbNd.TabIndex = 0;
            this.TbNd.TextChanged += new System.EventHandler(this.TbNd_TextChanged);
            // 
            // TbSt
            // 
            this.TbSt.Font = new System.Drawing.Font("타이포_팩토리 M", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.TbSt.Location = new System.Drawing.Point(60, 81);
            this.TbSt.Name = "TbSt";
            this.TbSt.Size = new System.Drawing.Size(100, 38);
            this.TbSt.TabIndex = 1;
            this.TbSt.TextChanged += new System.EventHandler(this.TbSt_TextChanged);
            // 
            // TbRd
            // 
            this.TbRd.Font = new System.Drawing.Font("타이포_팩토리 M", 16.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.TbRd.Location = new System.Drawing.Point(467, 81);
            this.TbRd.Name = "TbRd";
            this.TbRd.Size = new System.Drawing.Size(100, 38);
            this.TbRd.TabIndex = 2;
            this.TbRd.TextChanged += new System.EventHandler(this.TbRd_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(199, 88);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(23, 24);
            this.label2.TabIndex = 4;
            this.label2.Text = "+";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("굴림", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(404, 88);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(23, 24);
            this.label3.TabIndex = 5;
            this.label3.Text = "=";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.button1.Location = new System.Drawing.Point(60, 171);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(507, 96);
            this.button1.TabIndex = 6;
            this.button1.Text = "이모~ 여기 계산이요!";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(624, 321);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.TbRd);
            this.Controls.Add(this.TbSt);
            this.Controls.Add(this.TbNd);
            this.Name = "Form1";
            this.Text = "더하기";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox TbNd;
        private System.Windows.Forms.TextBox TbSt;
        private System.Windows.Forms.TextBox TbRd;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button button1;
    }
}

