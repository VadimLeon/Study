using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ThreeDecks
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void Shuffle(ref int[] deck, int n, Random rng) 
        {

            for (int i = 0; i < n; i++)
            {
                int temp = deck[i];
                int j = i + rng.Next(n  - i);
                deck[i] = deck[j];
                deck[j] = temp;
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            dataGridView2.Rows.Clear();
            dataGridView3.Rows.Clear();
            //dataGridView3.Rows.Clear();
            double ExpectedValue = 0;
            double Variance = 0;
            double SampleMean = 0;
            double SampleVariance = 0;
            double R = 0;
            Random rng = new Random();
            int n = Convert.ToInt32(textBox1.Text);
            int[] count = new int[4];
            for (int z = 0; z < n; z++) 
            {
                int[] deck1 = new int[36];
                int[] deck2 = new int[27];
                int[] deck3 = new int[32];
                int j = 0;
                int k = 0;
                for (int i = 0; i < 36; i++)
                {
                    deck1[i] = i;
                    if (i != 15 && i != 16 && i != 17 && i != 18 && i != 19 && i < 32)
                    {
                        deck2[j] = i;
                        j++;
                    }
                    if (i != 20 && i != 21 && i != 22 && i != 23)
                    {
                        deck3[k] = i;
                        k++;
                    }
                }
                Shuffle(ref deck1, 36, rng);
                Shuffle(ref deck2, 27, rng);
                Shuffle(ref deck3, 32, rng);
                int deck1SelectedCard = deck1[rng.Next(36)];
                int deck2SelectedCard = deck2[rng.Next(27)];
                int deck3SelectedCard = deck3[rng.Next(32)];
                count[Convert.ToInt32(deck1SelectedCard > 19) + Convert.ToInt32(deck2SelectedCard > 19) + Convert.ToInt32(deck3SelectedCard > 19)]++;
            }
            dataGridView1.Rows.Add(count[0], count[1], count[2], count[3]);
            dataGridView1.Rows.Add((double)count[0] / n, (double)count[1] / n, (double)count[2] / n, (double)count[3] / n);
            /////////////////////////////////////////////



            /////////////////////////////////////////////
            count[0] = 0;
            count[1] = 0;
            count[2] = 0;
            count[3] = 0;
            for (int z = 0; z < n; z++) 
            {
                count[(Convert.ToInt32(rng.NextDouble() < 0.444444444) + Convert.ToInt32(rng.NextDouble() < 0.444444444) + Convert.ToInt32(rng.NextDouble() < 0.375))]++;
            }
            dataGridView2.Rows.Add(count[0], count[1], count[2], count[3]);
            dataGridView2.Rows.Add((double)count[0] / n, (double)count[1] / n, (double)count[2] / n, (double)count[3] / n);
            /////////////////////////////////////////////
            ExpectedValue = (0 * 0.1929 + 1 * 0.424382 + 2 * 0.30864 + 3 * 0.074);
            dataGridView3.Rows.Add("Eη", ExpectedValue);
            //textBox2.Text = "" + ExpectedValue;
            for (int i = 0; i < 4; i++)
            {
                Variance += ((double)count[i] / n)*((double)count[i] / n); 
            }
            SampleMean = (0 * (double)count[0] + 1 * (double)count[1] + 2 * (double)count[2] + 3 * (double)count[3]) / n;
            dataGridView3.Rows.Add("x̅", SampleMean);
            dataGridView3.Rows.Add("|Eη - x̅|", Math.Abs(ExpectedValue - SampleMean));
            dataGridView3.Rows.Add("Dη", Variance);
            for (int i = 0; i < 4; i++)
            {
                SampleVariance += (i - SampleMean)*(i - SampleMean);
            }
            SampleVariance /= n;
            dataGridView3.Rows.Add("S^2", SampleVariance);
            dataGridView3.Rows.Add("|Dη - S^2|", Variance - SampleVariance);
            dataGridView3.Rows.Add("Me", "1,5");
            dataGridView3.Rows.Add("R̄", "4");
            //textBox3.Text = "" + variance;

        }
        
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }

    
    
}
