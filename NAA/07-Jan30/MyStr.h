#ifndef SENECA_MYSTR_H
#define SENECA_MYSTR_H
namespace seneca {
   class MyStr {
      char* m_data;
   public:
      MyStr( const char* cString, size_t maxLen );
      MyStr( const char* cString );
      MyStr( );
      ~MyStr( );
      void print( )const;
   };
}
#endif // !SENECA_MYSTR_H


