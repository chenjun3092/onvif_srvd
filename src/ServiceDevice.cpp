/*
 --------------------------------------------------------------------------
 ServiceDevice.cpp
 
 Implementation of functions (methods) for the service:
 ONVIF devicemgmt.wsdl server side
-----------------------------------------------------------------------------
*/


#include "soapDeviceBindingService.h"
#include "smacros.h"





int DeviceBindingService::GetServices(_tds__GetServices *tds__GetServices, _tds__GetServicesResponse &tds__GetServicesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetServiceCapabilities(_tds__GetServiceCapabilities *tds__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &tds__GetServiceCapabilitiesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDeviceInformation(_tds__GetDeviceInformation *tds__GetDeviceInformation, _tds__GetDeviceInformationResponse &tds__GetDeviceInformationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetSystemDateAndTime(_tds__SetSystemDateAndTime *tds__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &tds__SetSystemDateAndTimeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetSystemDateAndTime(_tds__GetSystemDateAndTime *tds__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &tds__GetSystemDateAndTimeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *tds__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &tds__SetSystemFactoryDefaultResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *tds__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &tds__UpgradeSystemFirmwareResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SystemReboot(_tds__SystemReboot *tds__SystemReboot, _tds__SystemRebootResponse &tds__SystemRebootResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::RestoreSystem(_tds__RestoreSystem *tds__RestoreSystem, _tds__RestoreSystemResponse &tds__RestoreSystemResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetSystemBackup(_tds__GetSystemBackup *tds__GetSystemBackup, _tds__GetSystemBackupResponse &tds__GetSystemBackupResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetSystemLog(_tds__GetSystemLog *tds__GetSystemLog, _tds__GetSystemLogResponse &tds__GetSystemLogResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetSystemSupportInformation(_tds__GetSystemSupportInformation *tds__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &tds__GetSystemSupportInformationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetScopes(_tds__GetScopes *tds__GetScopes, _tds__GetScopesResponse &tds__GetScopesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetScopes(_tds__SetScopes *tds__SetScopes, _tds__SetScopesResponse &tds__SetScopesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::AddScopes(_tds__AddScopes *tds__AddScopes, _tds__AddScopesResponse &tds__AddScopesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::RemoveScopes(_tds__RemoveScopes *tds__RemoveScopes, _tds__RemoveScopesResponse &tds__RemoveScopesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDiscoveryMode(_tds__GetDiscoveryMode *tds__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &tds__GetDiscoveryModeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetDiscoveryMode(_tds__SetDiscoveryMode *tds__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &tds__SetDiscoveryModeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *tds__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &tds__GetRemoteDiscoveryModeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *tds__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &tds__SetRemoteDiscoveryModeResponse)
{
	std::cout << __FUNCTION__ << std::endl;
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDPAddresses(_tds__GetDPAddresses *tds__GetDPAddresses, _tds__GetDPAddressesResponse &tds__GetDPAddressesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetEndpointReference(_tds__GetEndpointReference *tds__GetEndpointReference, _tds__GetEndpointReferenceResponse &tds__GetEndpointReferenceResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetRemoteUser(_tds__GetRemoteUser *tds__GetRemoteUser, _tds__GetRemoteUserResponse &tds__GetRemoteUserResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetRemoteUser(_tds__SetRemoteUser *tds__SetRemoteUser, _tds__SetRemoteUserResponse &tds__SetRemoteUserResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetUsers(_tds__GetUsers *tds__GetUsers, _tds__GetUsersResponse &tds__GetUsersResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::CreateUsers(_tds__CreateUsers *tds__CreateUsers, _tds__CreateUsersResponse &tds__CreateUsersResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::DeleteUsers(_tds__DeleteUsers *tds__DeleteUsers, _tds__DeleteUsersResponse &tds__DeleteUsersResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetUser(_tds__SetUser *tds__SetUser, _tds__SetUserResponse &tds__SetUserResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetWsdlUrl(_tds__GetWsdlUrl *tds__GetWsdlUrl, _tds__GetWsdlUrlResponse &tds__GetWsdlUrlResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetCapabilities(_tds__GetCapabilities *tds__GetCapabilities, _tds__GetCapabilitiesResponse &tds__GetCapabilitiesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetDPAddresses(_tds__SetDPAddresses *tds__SetDPAddresses, _tds__SetDPAddressesResponse &tds__SetDPAddressesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetHostname(_tds__GetHostname *tds__GetHostname, _tds__GetHostnameResponse &tds__GetHostnameResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetHostname(_tds__SetHostname *tds__SetHostname, _tds__SetHostnameResponse &tds__SetHostnameResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *tds__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &tds__SetHostnameFromDHCPResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDNS(_tds__GetDNS *tds__GetDNS, _tds__GetDNSResponse &tds__GetDNSResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetDNS(_tds__SetDNS *tds__SetDNS, _tds__SetDNSResponse &tds__SetDNSResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetNTP(_tds__GetNTP *tds__GetNTP, _tds__GetNTPResponse &tds__GetNTPResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetNTP(_tds__SetNTP *tds__SetNTP, _tds__SetNTPResponse &tds__SetNTPResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDynamicDNS(_tds__GetDynamicDNS *tds__GetDynamicDNS, _tds__GetDynamicDNSResponse &tds__GetDynamicDNSResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetDynamicDNS(_tds__SetDynamicDNS *tds__SetDynamicDNS, _tds__SetDynamicDNSResponse &tds__SetDynamicDNSResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}


int DeviceBindingService::GetNetworkInterfaces(_tds__GetNetworkInterfaces *tds__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &tds__GetNetworkInterfacesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetNetworkInterfaces(_tds__SetNetworkInterfaces *tds__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &tds__SetNetworkInterfacesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetNetworkProtocols(_tds__GetNetworkProtocols *tds__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &tds__GetNetworkProtocolsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetNetworkProtocols(_tds__SetNetworkProtocols *tds__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &tds__SetNetworkProtocolsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *tds__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &tds__GetNetworkDefaultGatewayResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *tds__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &tds__SetNetworkDefaultGatewayResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetZeroConfiguration(_tds__GetZeroConfiguration *tds__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &tds__GetZeroConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetZeroConfiguration(_tds__SetZeroConfiguration *tds__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &tds__SetZeroConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetIPAddressFilter(_tds__GetIPAddressFilter *tds__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &tds__GetIPAddressFilterResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetIPAddressFilter(_tds__SetIPAddressFilter *tds__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &tds__SetIPAddressFilterResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::AddIPAddressFilter(_tds__AddIPAddressFilter *tds__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &tds__AddIPAddressFilterResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *tds__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &tds__RemoveIPAddressFilterResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetAccessPolicy(_tds__GetAccessPolicy *tds__GetAccessPolicy, _tds__GetAccessPolicyResponse &tds__GetAccessPolicyResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetAccessPolicy(_tds__SetAccessPolicy *tds__SetAccessPolicy, _tds__SetAccessPolicyResponse &tds__SetAccessPolicyResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::CreateCertificate(_tds__CreateCertificate *tds__CreateCertificate, _tds__CreateCertificateResponse &tds__CreateCertificateResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetCertificates(_tds__GetCertificates *tds__GetCertificates, _tds__GetCertificatesResponse &tds__GetCertificatesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetCertificatesStatus(_tds__GetCertificatesStatus *tds__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &tds__GetCertificatesStatusResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetCertificatesStatus(_tds__SetCertificatesStatus *tds__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &tds__SetCertificatesStatusResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::DeleteCertificates(_tds__DeleteCertificates *tds__DeleteCertificates, _tds__DeleteCertificatesResponse &tds__DeleteCertificatesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetPkcs10Request(_tds__GetPkcs10Request *tds__GetPkcs10Request, _tds__GetPkcs10RequestResponse &tds__GetPkcs10RequestResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::LoadCertificates(_tds__LoadCertificates *tds__LoadCertificates, _tds__LoadCertificatesResponse &tds__LoadCertificatesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetClientCertificateMode(_tds__GetClientCertificateMode *tds__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &tds__GetClientCertificateModeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetClientCertificateMode(_tds__SetClientCertificateMode *tds__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &tds__SetClientCertificateModeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetRelayOutputs(_tds__GetRelayOutputs *tds__GetRelayOutputs, _tds__GetRelayOutputsResponse &tds__GetRelayOutputsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetRelayOutputSettings(_tds__SetRelayOutputSettings *tds__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &tds__SetRelayOutputSettingsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetRelayOutputState(_tds__SetRelayOutputState *tds__SetRelayOutputState, _tds__SetRelayOutputStateResponse &tds__SetRelayOutputStateResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *tds__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &tds__SendAuxiliaryCommandResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetCACertificates(_tds__GetCACertificates *tds__GetCACertificates, _tds__GetCACertificatesResponse &tds__GetCACertificatesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}


int DeviceBindingService::LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *tds__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &tds__LoadCertificateWithPrivateKeyResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetCertificateInformation(_tds__GetCertificateInformation *tds__GetCertificateInformation, _tds__GetCertificateInformationResponse &tds__GetCertificateInformationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::LoadCACertificates(_tds__LoadCACertificates *tds__LoadCACertificates, _tds__LoadCACertificatesResponse &tds__LoadCACertificatesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *tds__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &tds__CreateDot1XConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetDot1XConfiguration(_tds__SetDot1XConfiguration *tds__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &tds__SetDot1XConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDot1XConfiguration(_tds__GetDot1XConfiguration *tds__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &tds__GetDot1XConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDot1XConfigurations(_tds__GetDot1XConfigurations *tds__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &tds__GetDot1XConfigurationsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *tds__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &tds__DeleteDot1XConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDot11Capabilities(_tds__GetDot11Capabilities *tds__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &tds__GetDot11CapabilitiesResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetDot11Status(_tds__GetDot11Status *tds__GetDot11Status, _tds__GetDot11StatusResponse &tds__GetDot11StatusResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *tds__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &tds__ScanAvailableDot11NetworksResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetSystemUris(_tds__GetSystemUris *tds__GetSystemUris, _tds__GetSystemUrisResponse &tds__GetSystemUrisResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *tds__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &tds__StartFirmwareUpgradeResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::StartSystemRestore(_tds__StartSystemRestore *tds__StartSystemRestore, _tds__StartSystemRestoreResponse &tds__StartSystemRestoreResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetStorageConfigurations(_tds__GetStorageConfigurations *tds__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &tds__GetStorageConfigurationsResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::CreateStorageConfiguration(_tds__CreateStorageConfiguration *tds__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &tds__CreateStorageConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetStorageConfiguration(_tds__GetStorageConfiguration *tds__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &tds__GetStorageConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}




int DeviceBindingService::SetStorageConfiguration(_tds__SetStorageConfiguration *tds__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &tds__SetStorageConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *tds__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &tds__DeleteStorageConfigurationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::GetGeoLocation(_tds__GetGeoLocation *tds__GetGeoLocation, _tds__GetGeoLocationResponse &tds__GetGeoLocationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::SetGeoLocation(_tds__SetGeoLocation *tds__SetGeoLocation, _tds__SetGeoLocationResponse &tds__SetGeoLocationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}



int DeviceBindingService::DeleteGeoLocation(_tds__DeleteGeoLocation *tds__DeleteGeoLocation, _tds__DeleteGeoLocationResponse &tds__DeleteGeoLocationResponse)
{
    DEBUG_MSG("Device: %s\n", __FUNCTION__);
    return SOAP_OK;
}
