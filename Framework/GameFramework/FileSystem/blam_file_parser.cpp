#include "gameframework-private-pch.h"

c_blam_file_parser::c_blam_file_parser(char* pBlamFileData)
	:m_isLittleEndian(false)
{
	char* pCurrentMapInfoDataPosition = pBlamFileData;
	bool endOfFileFound = false;
	do
	{
		s_blamfile_header* pChunk = reinterpret_cast<s_blamfile_header*>(pCurrentMapInfoDataPosition);

		switch (pChunk->m_chunkType)
		{
		case '_blf': m_isLittleEndian = true;
		case bswap('_blf'):
			break;
			//case 'levl': m_isLittleEndian = true;
			//case bswap('levl'):
			//{
			//	s_blamfile_level_chunk* pLevelChunk = static_cast<s_blamfile_level_chunk*>(pChunk);
			//	int mapID = bswap_auto_endian(m_isLittleEndian, pLevelChunk->mapID);
			//	c_console::write_line_verbose("MapInfoManager> ");
			//	break;
			//}
		case '_eof': m_isLittleEndian = true;
		case bswap('_eof'):
			endOfFileFound = true;
			break;
		}
		int chunkSize = bswap_auto_endian(m_isLittleEndian, pChunk->m_chunkSize);
		pCurrentMapInfoDataPosition += chunkSize;

		m_chunks.emplace_back(pChunk);

	} while (!endOfFileFound);

	c_console::write_line_verbose("BlamFileParser> Parsed %i chunks", static_cast<int>(m_chunks.size()));
}

s_blamfile_header* c_blam_file_parser::getFirstChunkByTypeImpl(blamfile_chunk_type chunk_type)
{
	for (s_blamfile_header*& pCurrentChunk : m_chunks)
	{
		if (pCurrentChunk->m_chunkType == chunk_type)
		{
			return pCurrentChunk;
		}
	}

	return nullptr;
}

s_blamfile_header* c_blam_file_parser::get_first_chunk_by_type(blamfile_chunk_type chunkType)
{
	s_blamfile_header* pResult = getFirstChunkByTypeImpl(chunkType);
	if (pResult == nullptr)
	{
		pResult = getFirstChunkByTypeImpl(static_cast<blamfile_chunk_type>(bswap(chunkType)));
	}
	return pResult;
}