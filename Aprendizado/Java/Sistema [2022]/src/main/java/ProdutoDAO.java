
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;


/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author 06470200176
 */
public class ProdutoDAO {

    Produto p = new Produto();

    Util util = new Util();
    Statement stmt;
    ResultSet rs;
    Connection con = util.getConnection();

    public Produto buscaPorID(String codigo)  {
        
        
        
 
        
        try {
        
        stmt = con.createStatement();

        String SQL = "select * from produto p where p.barcode like " + codigo;

// executing SELECT query
        rs = stmt.executeQuery(SQL);
System.out.println(SQL);
        while (rs.next()) {
//            System.out.println(rs.getString(2));
         
           

            p.descricao = rs.getString(2);
            p.caminho = rs.getString(3);
            p.preco = Double.parseDouble(rs.getString(5));
            p.idProduto = Integer.parseInt(rs.getString(1));

            
            
             
        }
        
                    
        } catch (Exception e) {
            e.printStackTrace();
        }

        return p;

    }

}
