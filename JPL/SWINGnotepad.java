import javax.swing.*;
import java.awt.event.*;
public class SWINGnotepad implements ActionListener{
    JFrame f= new JFrame();
    JMenuBar mb= new JMenuBar();
    JMenu file= new JMenu("File");
    JMenu edit= new JMenu("Edit");
    JMenu view= new JMenu("View");
    JMenuItem cut= new JMenuItem("Cut");
    JMenuItem copy= new JMenuItem("Copy");
    JMenuItem paste= new JMenuItem("Paste");
    JMenuItem selectAll= new JMenuItem("Select All");
    JTextArea area = new JTextArea();
    SWINGnotepad(){
        f.setJMenuBar(mb);
        f.add(mb);
        mb.add(file);mb.add(edit);mb.add(view);
        edit.add(cut); edit.add(copy);edit.add(paste);edit.add(selectAll);

        area.setBounds(5,30,550,550);
        f.add(area);

        cut.addActionListener(this);
        copy.addActionListener(this);
        paste.addActionListener(this);
        selectAll.addActionListener(this);

        f.setSize(600,600);
        f.setLayout(null);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e){
        if(e.getSource()==cut){
            area.cut();
        }
        if(e.getSource()==copy){
            area.copy();
        }
        if(e.getSource()==paste){
            area.paste();
        }
        if(e.getSource()==selectAll){
            area.selectAll();
        }
    }

    public static void main(String[] args) {
        SWINGnotepad f= new SWINGnotepad();
    }
}
