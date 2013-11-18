#ifndef VM_OPCODE_ASSIGN_OPCODE_H_
#define VM_OPCODE_ASSIGN_OPCODE_H_

#include <string>
#include <map>

#include "opcode.h"

class AssignOpcode : public Opcode {
  public:
  	AssignOpcode(std::string variable, int value);
  	~AssignOpcode() {}

  	int get_id();
  	std::string get_name();

  	void execute(Program *program);

   private:
  	std::string variable;
  	int value;
};

#endif
