
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_parser_htmlValidator$hTag__
#define __gnu_javax_swing_text_html_parser_htmlValidator$hTag__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
            namespace parser
            {
                class htmlValidator;
                class htmlValidator$hTag;
              namespace models
              {
                  class node;
              }
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
            class HTML$Tag;
          namespace parser
          {
              class Element;
              class TagElement;
          }
        }
      }
    }
  }
}

class gnu::javax::swing::text::html::parser::htmlValidator$hTag : public ::java::lang::Object
{

public: // actually protected
  htmlValidator$hTag(::gnu::javax::swing::text::html::parser::htmlValidator *, ::javax::swing::text::html::parser::TagElement *);
  virtual void forciblyCloseDueContext();
  virtual void forciblyCloseDueEndOfStream();
  ::javax::swing::text::html::parser::Element * __attribute__((aligned(__alignof__( ::java::lang::Object)))) element;
  ::javax::swing::text::html::HTML$Tag * tag;
  ::javax::swing::text::html::parser::TagElement * tgElement;
  jboolean forcibly_closed;
  ::gnu::javax::swing::text::html::parser::models::node * validationTrace;
public: // actually package-private
  ::gnu::javax::swing::text::html::parser::htmlValidator * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_swing_text_html_parser_htmlValidator$hTag__
