// user_api.cpp - Autogenerated source for ISteamUser
// Copyright (c) 2014 Bryan DeGrendel
//
// See COPYING and license/LICENSE.steambridge for license information

#include "stdafx.h"

#include "logging.h"
#include "state.h"
#include "steam_api_proxy.h"
#include "types.h"

#include "user_api.h"

#include <steam_api_bridge.h>

SteamUser::SteamUser() : steamUser(NULL)
{
  __TRACE("(this=0x%p)", this);
  steamUser = SteamUser_();
  __LOG("Wrapping ISteamUser (0x%p) into (0x%p)", steamUser, this);
}

HSteamUser SteamUser::GetHSteamUser()
{
  __TRACE("()");
  HSteamUser result;
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+0]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
  }
  return result;
}

bool SteamUser::BLoggedOn()
{
  __TRACE("()");
  bool result;
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+4]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, al
    // restore stack
    // including this pointer
    pop eax
  }
  return result;
}

CSteamID SteamUser::GetSteamID()
{
  __TRACE("()");
  CSteamID result;
  void *value = 0;
  printf("Sizeof CSteamID is %lu, location is 0x%p\n", sizeof(result), &result);
  __asm
  {
    // Hidden struct
    lea edx, [esp-8]
    sub esp, 8
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Push hidden pointer to result struct
    push edx
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+8]
    // Call that memory location
    call eax
    // Copy hidden struct to result
    lea ecx, result
    mov value, ecx
    mov edx, [eax+0]
    mov [ecx+0], edx
    mov edx, [eax+4]
    mov [ecx+4], edx
    // Move the returned value into the result
    // (Return value is a hidden struct, should already be set)
    // restore stack
    // including this pointer
    // Hidden struct
    pop eax
    pop eax
    // This
    pop eax
    // Hidden struct pointer
    // should be popped by Linux
    //pop eax
  }
  __TRACE("Pointers are 0x%p,0x%p", &result, value);
  __TRACE("Result is %llu", result);
  return result;
}

int SteamUser::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
  __TRACE("(0x%p,%i,%llu,%u,%hu,%i,)", pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
  int result;
  __asm
  {
    // Push function arguments
    mov al, bSecure
    push eax
    // Push function arguments
    mov ax, usPortServer
    push eax
    // Push function arguments
    mov eax, unIPServer
    push eax
    // Push function arguments
    lea edx, steamIDGameServer
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push function arguments
    mov eax, cbMaxAuthBlob
    push eax
    // Push function arguments
    mov eax, pAuthBlob
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+12]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

void SteamUser::TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)
{
  __TRACE("(%u,%hu,)", unIPServer, usPortServer);
  __asm
  {
    // Push function arguments
    mov ax, usPortServer
    push eax
    // Push function arguments
    mov eax, unIPServer
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+16]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
  }
}

void SteamUser::TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
  __TRACE("(%llu,%i,\"%s\",)", gameID, eAppUsageEvent, pchExtraInfo);
  __asm
  {
    // Push function arguments
    mov eax, pchExtraInfo
    push eax
    // Push function arguments
    mov eax, eAppUsageEvent
    push eax
    // Push function arguments
    lea edx, gameID
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+20]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
}

bool SteamUser::GetUserDataFolder(char *pchBuffer, int cubBuffer)
{
  __TRACE("(0x%p,%i,)", pchBuffer, cubBuffer);
  bool result;
  __asm
  {
    // Push function arguments
    mov eax, cubBuffer
    push eax
    // Push function arguments
    mov eax, pchBuffer
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+24]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, al
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
  }
  return result;
}

void SteamUser::StartVoiceRecording()
{
  __TRACE("()");
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+28]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
  }
}

void SteamUser::StopVoiceRecording()
{
  __TRACE("()");
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+32]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
  }
}

EVoiceResult SteamUser::GetAvailableVoice(uint32 *pcbCompressed, uint32 *pcbUncompressed, uint32 nUncompressedVoiceDesiredSampleRate)
{
  __TRACE("(0x%p,0x%p,%u,)", pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
  EVoiceResult result;
  __asm
  {
    // Push function arguments
    mov eax, nUncompressedVoiceDesiredSampleRate
    push eax
    // Push function arguments
    mov eax, pcbUncompressed
    push eax
    // Push function arguments
    mov eax, pcbCompressed
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+36]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

EVoiceResult SteamUser::GetVoice(bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten, uint32 nUncompressedVoiceDesiredSampleRate)
{
  __TRACE("(%i,0x%p,%u,0x%p,%i,0x%p,%u,0x%p,%u,)", bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
  EVoiceResult result;
  __asm
  {
    // Push function arguments
    mov eax, nUncompressedVoiceDesiredSampleRate
    push eax
    // Push function arguments
    mov eax, nUncompressBytesWritten
    push eax
    // Push function arguments
    mov eax, cbUncompressedDestBufferSize
    push eax
    // Push function arguments
    mov eax, pUncompressedDestBuffer
    push eax
    // Push function arguments
    mov al, bWantUncompressed
    push eax
    // Push function arguments
    mov eax, nBytesWritten
    push eax
    // Push function arguments
    mov eax, cbDestBufferSize
    push eax
    // Push function arguments
    mov eax, pDestBuffer
    push eax
    // Push function arguments
    mov al, bWantCompressed
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+40]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

EVoiceResult SteamUser::DecompressVoice(const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, uint32 nDesiredSampleRate)
{
  __TRACE("(%i,%u,0x%p,%u,0x%p,%u,)", pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
  EVoiceResult result;
  __asm
  {
    // Push function arguments
    mov eax, nDesiredSampleRate
    push eax
    // Push function arguments
    mov eax, nBytesWritten
    push eax
    // Push function arguments
    mov eax, cbDestBufferSize
    push eax
    // Push function arguments
    mov eax, pDestBuffer
    push eax
    // Push function arguments
    mov eax, cbCompressed
    push eax
    // Push function arguments
    mov eax, pCompressed
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+44]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

uint32 SteamUser::GetVoiceOptimalSampleRate()
{
  __TRACE("()");
  uint32 result;
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+48]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
  }
  return result;
}

HAuthTicket SteamUser::GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
  __TRACE("(0x%p,%i,0x%p,)", pTicket, cbMaxTicket, pcbTicket);
  HAuthTicket result;
  __asm
  {
    // Push function arguments
    mov eax, pcbTicket
    push eax
    // Push function arguments
    mov eax, cbMaxTicket
    push eax
    // Push function arguments
    mov eax, pTicket
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+52]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

EBeginAuthSessionResult SteamUser::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
  __TRACE("(%i,%i,%llu,)", pAuthTicket, cbAuthTicket, steamID);
  EBeginAuthSessionResult result;
  __asm
  {
    // Push function arguments
    lea edx, steamID
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push function arguments
    mov eax, cbAuthTicket
    push eax
    // Push function arguments
    mov eax, pAuthTicket
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+56]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

void SteamUser::EndAuthSession(CSteamID steamID)
{
  __TRACE("(%llu,)", steamID);
  __asm
  {
    // Push function arguments
    lea edx, steamID
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+60]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
  }
}

void SteamUser::CancelAuthTicket(HAuthTicket hAuthTicket)
{
  __TRACE("(%u,)", hAuthTicket);
  __asm
  {
    // Push function arguments
    mov eax, hAuthTicket
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+64]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
    pop eax
  }
}

EUserHasLicenseForAppResult SteamUser::UserHasLicenseForApp(CSteamID steamID, AppId_t appID)
{
  __TRACE("(%llu,%u,)", steamID, appID);
  EUserHasLicenseForAppResult result;
  __asm
  {
    // Push function arguments
    mov eax, appID
    push eax
    // Push function arguments
    lea edx, steamID
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+68]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, eax
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

bool SteamUser::BIsBehindNAT()
{
  __TRACE("()");
  bool result;
  __asm
  {
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+72]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, al
    // restore stack
    // including this pointer
    pop eax
  }
  return result;
}

void SteamUser::AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
  __TRACE("(%llu,%u,%hu,)", steamIDGameServer, unIPServer, usPortServer);
  __asm
  {
    // Push function arguments
    mov ax, usPortServer
    push eax
    // Push function arguments
    mov eax, unIPServer
    push eax
    // Push function arguments
    lea edx, steamIDGameServer
    mov eax, [edx+4]
    push eax
    mov eax, [edx+0]
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+76]
    // Call that memory location
    call eax
    // Move the returned value into the result
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
    pop eax
  }
}

SteamAPICall_t SteamUser::RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude)
{
  __TRACE("(0x%p,%i,)", pDataToInclude, cbDataToInclude);
  SteamAPICall_t result;
  __asm
  {
    // Push function arguments
    mov eax, cbDataToInclude
    push eax
    // Push function arguments
    mov eax, pDataToInclude
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+80]
    // Call that memory location
    call eax
    // Move the returned value into the result
    lea ecx, result
    mov [ecx+0], eax
    mov [ecx+4], edx
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
  }
  return result;
}

bool SteamUser::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
  __TRACE("(0x%p,%i,0x%p,)", pTicket, cbMaxTicket, pcbTicket);
  bool result;
  __asm
  {
    // Push function arguments
    mov eax, pcbTicket
    push eax
    // Push function arguments
    mov eax, cbMaxTicket
    push eax
    // Push function arguments
    mov eax, pTicket
    push eax
    // Push Linux-side 'this'
    mov eax, [this]
    mov eax, [eax]this.steamUser
    push eax
    // Get the vtable (pointer at this)
    mov eax, [eax]
    // Lookup the pointer in the vtable
    mov eax, [eax+84]
    // Call that memory location
    call eax
    // Move the returned value into the result
    mov result, al
    // restore stack
    // including this pointer
    pop eax
    pop eax
    pop eax
    pop eax
  }
  return result;
}

#include "user_api_code.inc"

