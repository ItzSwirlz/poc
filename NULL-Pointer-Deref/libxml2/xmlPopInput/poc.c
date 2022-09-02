#include <libxml/parser.h>

int main() {
	struct _xmlParserCtxt *ctxtData = malloc(300);
	ctxtData->inputNr = 5;
	ctxtData->inSubset = 0;
	ctxtData->instate = XML_PARSER_EOF;
	ctxtData->inputTab = realloc(ctxtData->inputTab, 2 * sizeof(ctxtData->inputTab[0]));

	xmlParserCtxtPtr ctxt = (xmlParserCtxtPtr) ctxtData;

	xmlPopInput(ctxt);
}
