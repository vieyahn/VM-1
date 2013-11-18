#include "program.h"

Program::Program() {
	executing = false;
	position = 0;
}

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
	executing = true;

	while(executing) {
		opcodes[position]->execute(this);
	}
}

void Program::increment_position() {
	position++;
}

void Program::set_position(int pos) {
	position = pos;
}

int Program::get_position() const {
	return position;
}

void Program::stop() {
	executing = false;
}
