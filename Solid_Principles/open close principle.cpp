// 2. open close principle :open for extension but closed for modification

//not following the open close principle
class InvoiceDao {
  private:
      Invoice invoice; // Invoice instance
  
  public:
      InvoiceDao(const Invoice& invoice) {
          this->invoice = invoice; // 
      }
  
      void saveDB() {
          // Save to database
      }
       
      void saveToFile(const string& filename) {
          // Save to file
      }

  };
  