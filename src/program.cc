#include "program.h"

Program::~Program() {
	for(int i = 0; i < opcodes.size(); i++) {
		delete opcodes[i];
	}
}

void Program::add_opcode(Opcode *opcode) {
	opcodes.push_back(opcode);
}

void Program::add_marker(sdt::string marker) {
	markers[marker] = opcodes.size();
}

void Program::execute() {
	for(int i = 0; i < opcodes.size(); i++) {
		opcodes[i]->execute(&memory);
	}
}
