module;
#include <string>
export module B;

import A;

export class B : public A {
   std::string str2;

   virtual void a(std::string str) override {
   };
};
