#ifndef HUAWEICLOUD_SDK_IOTDA_V5_IoTDAClient_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_IoTDAClient_H_

#include <huaweicloud/iotda/v5/IoTDAExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/iotda/v5/model/CreateAccessCodeRequest.h>
#include <huaweicloud/iotda/v5/model/CreateAccessCodeRequestBody.h>
#include <huaweicloud/iotda/v5/model/CreateAccessCodeResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddQueueRequest.h>
#include <huaweicloud/iotda/v5/model/AddQueueResponse.h>
#include <huaweicloud/iotda/v5/model/BatchShowQueueRequest.h>
#include <huaweicloud/iotda/v5/model/BatchShowQueueResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteQueueRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteQueueResponse.h>
#include <huaweicloud/iotda/v5/model/QueueInfo.h>
#include <huaweicloud/iotda/v5/model/ShowQueueRequest.h>
#include <huaweicloud/iotda/v5/model/ShowQueueResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddApplication.h>
#include <huaweicloud/iotda/v5/model/AddApplicationRequest.h>
#include <huaweicloud/iotda/v5/model/AddApplicationResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteApplicationRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteApplicationResponse.h>
#include <huaweicloud/iotda/v5/model/ShowApplicationRequest.h>
#include <huaweicloud/iotda/v5/model/ShowApplicationResponse.h>
#include <huaweicloud/iotda/v5/model/ShowApplicationsRequest.h>
#include <huaweicloud/iotda/v5/model/ShowApplicationsResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateApplicationDTO.h>
#include <huaweicloud/iotda/v5/model/UpdateApplicationRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateApplicationResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AsyncDeviceCommandRequest.h>
#include <huaweicloud/iotda/v5/model/CountAsyncHistoryCommandsRequest.h>
#include <huaweicloud/iotda/v5/model/CountAsyncHistoryCommandsResponse.h>
#include <huaweicloud/iotda/v5/model/CreateAsyncCommandRequest.h>
#include <huaweicloud/iotda/v5/model/CreateAsyncCommandResponse.h>
#include <huaweicloud/iotda/v5/model/ListAsyncCommandsRequest.h>
#include <huaweicloud/iotda/v5/model/ListAsyncCommandsResponse.h>
#include <huaweicloud/iotda/v5/model/ListAsyncHistoryCommandsRequest.h>
#include <huaweicloud/iotda/v5/model/ListAsyncHistoryCommandsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowAsyncDeviceCommandRequest.h>
#include <huaweicloud/iotda/v5/model/ShowAsyncDeviceCommandResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddBacklogPolicy.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingBacklogPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingBacklogPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingBacklogPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingBacklogPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ListRoutingBacklogPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ListRoutingBacklogPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingBacklogPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingBacklogPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateBacklogPolicy.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingBacklogPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingBacklogPolicyResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/BatchTargets.h>
#include <huaweicloud/iotda/v5/model/CreateBatchTask.h>
#include <huaweicloud/iotda/v5/model/CreateBatchTaskRequest.h>
#include <huaweicloud/iotda/v5/model/CreateBatchTaskResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteBatchTaskRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteBatchTaskResponse.h>
#include <huaweicloud/iotda/v5/model/ListBatchTasksRequest.h>
#include <huaweicloud/iotda/v5/model/ListBatchTasksResponse.h>
#include <huaweicloud/iotda/v5/model/RetryBatchTaskRequest.h>
#include <huaweicloud/iotda/v5/model/RetryBatchTaskResponse.h>
#include <huaweicloud/iotda/v5/model/ShowBatchTaskRequest.h>
#include <huaweicloud/iotda/v5/model/ShowBatchTaskResponse.h>
#include <huaweicloud/iotda/v5/model/StopBatchTaskRequest.h>
#include <huaweicloud/iotda/v5/model/StopBatchTaskResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/DeleteBatchTaskFileRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteBatchTaskFileResponse.h>
#include <huaweicloud/iotda/v5/model/ListBatchTaskFilesRequest.h>
#include <huaweicloud/iotda/v5/model/ListBatchTaskFilesResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddBridge.h>
#include <huaweicloud/iotda/v5/model/AddBridgeRequest.h>
#include <huaweicloud/iotda/v5/model/AddBridgeResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteBridgeRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteBridgeResponse.h>
#include <huaweicloud/iotda/v5/model/ListBridgesRequest.h>
#include <huaweicloud/iotda/v5/model/ListBridgesResponse.h>
#include <huaweicloud/iotda/v5/model/ResetBridgeSecret.h>
#include <huaweicloud/iotda/v5/model/ResetBridgeSecretRequest.h>
#include <huaweicloud/iotda/v5/model/ResetBridgeSecretResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/BroadcastMessageRequest.h>
#include <huaweicloud/iotda/v5/model/BroadcastMessageResponse.h>
#include <huaweicloud/iotda/v5/model/DeviceBroadcastRequest.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/AddCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/CheckCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/CheckCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/CreateCertificateDTO.h>
#include <huaweicloud/iotda/v5/model/DeleteCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ListCertificatesRequest.h>
#include <huaweicloud/iotda/v5/model/ListCertificatesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ShowCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateCertificateDTO.h>
#include <huaweicloud/iotda/v5/model/UpdateCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/VerifyCertificateDTO.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateCommandRequest.h>
#include <huaweicloud/iotda/v5/model/CreateCommandResponse.h>
#include <huaweicloud/iotda/v5/model/DeviceCommandRequest.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateAuthenticationTemplate.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceAuthenticationTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceAuthenticationTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceAuthenticationTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceAuthenticationTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceAuthenticationTemplatesRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceAuthenticationTemplatesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceAuthenticationTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceAuthenticationTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateAuthenticationTemplate.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceAuthenticationTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceAuthenticationTemplateResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateDeviceAuthorizer.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceAuthorizerRequest.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceAuthorizerResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceAuthorizerRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceAuthorizerResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceAuthorizersRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceAuthorizersResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceAuthorizerRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceAuthorizerResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceAuthorizer.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceAuthorizerRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceAuthorizerResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/DeleteDeviceCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceByDeviceCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceByDeviceCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceCertificate.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceCertificateResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddDeviceGroupDTO.h>
#include <huaweicloud/iotda/v5/model/AddDeviceGroupRequest.h>
#include <huaweicloud/iotda/v5/model/AddDeviceGroupResponse.h>
#include <huaweicloud/iotda/v5/model/CreateOrDeleteDeviceInGroupRequest.h>
#include <huaweicloud/iotda/v5/model/CreateOrDeleteDeviceInGroupResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceGroupRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceGroupResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceGroupsRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceGroupsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceGroupRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceGroupResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDevicesInGroupRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDevicesInGroupResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceGroupDTO.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceGroupRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceGroupResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddDevice.h>
#include <huaweicloud/iotda/v5/model/AddDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/AddDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/ChangeGateway.h>
#include <huaweicloud/iotda/v5/model/ChangeGatewayRequest.h>
#include <huaweicloud/iotda/v5/model/ChangeGatewayResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/FreezeDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/FreezeDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceGroupsByDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceGroupsByDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/ListDevicesRequest.h>
#include <huaweicloud/iotda/v5/model/ListDevicesResponse.h>
#include <huaweicloud/iotda/v5/model/ResetDeviceSecret.h>
#include <huaweicloud/iotda/v5/model/ResetDeviceSecretRequest.h>
#include <huaweicloud/iotda/v5/model/ResetDeviceSecretResponse.h>
#include <huaweicloud/iotda/v5/model/ResetFingerprint.h>
#include <huaweicloud/iotda/v5/model/ResetFingerprintRequest.h>
#include <huaweicloud/iotda/v5/model/ResetFingerprintResponse.h>
#include <huaweicloud/iotda/v5/model/SearchDevicesRequest.h>
#include <huaweicloud/iotda/v5/model/SearchDevicesResponse.h>
#include <huaweicloud/iotda/v5/model/SearchSql.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/UnfreezeDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/UnfreezeDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDevice.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddDeviceProxy.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceProxyRequest.h>
#include <huaweicloud/iotda/v5/model/CreateDeviceProxyResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceProxyRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceProxyResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceProxiesRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceProxiesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceProxyRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceProxyResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceProxy.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceProxyRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceProxyResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/DeleteDeviceShadowRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceShadowResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceShadowRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceShadowResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDesireds.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceShadowDesiredDataRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDeviceShadowDesiredDataResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateDomainConfigurationDTO.h>
#include <huaweicloud/iotda/v5/model/CreateDomainConfigurationRequest.h>
#include <huaweicloud/iotda/v5/model/CreateDomainConfigurationResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDomainConfigurationRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDomainConfigurationResponse.h>
#include <huaweicloud/iotda/v5/model/ListDomainConfigurationsRequest.h>
#include <huaweicloud/iotda/v5/model/ListDomainConfigurationsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDomainConfigurationRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDomainConfigurationResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDomainConfigurationDTO.h>
#include <huaweicloud/iotda/v5/model/UpdateDomainConfigurationRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDomainConfigurationResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddExportTask.h>
#include <huaweicloud/iotda/v5/model/CreateExportTaskRequest.h>
#include <huaweicloud/iotda/v5/model/CreateExportTaskResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteExportTaskRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteExportTaskResponse.h>
#include <huaweicloud/iotda/v5/model/ListExportTasksRequest.h>
#include <huaweicloud/iotda/v5/model/ListExportTasksResponse.h>
#include <huaweicloud/iotda/v5/model/ShowExportTaskRequest.h>
#include <huaweicloud/iotda/v5/model/ShowExportTaskResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddFlowControlPolicy.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingFlowControlPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingFlowControlPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingFlowControlPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingFlowControlPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ListRoutingFlowControlPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ListRoutingFlowControlPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingFlowControlPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingFlowControlPolicyResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateFlowControlPolicy.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingFlowControlPolicyRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingFlowControlPolicyResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddFunctionsRequest.h>
#include <huaweicloud/iotda/v5/model/AddFunctionsResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteFunctionsRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteFunctionsResponse.h>
#include <huaweicloud/iotda/v5/model/FunctionRequestDTO.h>
#include <huaweicloud/iotda/v5/model/ListFunctionsRequest.h>
#include <huaweicloud/iotda/v5/model/ListFunctionsResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddHarmonySoftBusDTO.h>
#include <huaweicloud/iotda/v5/model/AddHarmonySoftBusRequest.h>
#include <huaweicloud/iotda/v5/model/AddHarmonySoftBusResponse.h>
#include <huaweicloud/iotda/v5/model/CreateSyncHarmonySoftBusRequest.h>
#include <huaweicloud/iotda/v5/model/CreateSyncHarmonySoftBusResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteHarmonySoftBusRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteHarmonySoftBusResponse.h>
#include <huaweicloud/iotda/v5/model/ListHarmonySoftBusRequest.h>
#include <huaweicloud/iotda/v5/model/ListHarmonySoftBusResponse.h>
#include <huaweicloud/iotda/v5/model/ResetHarmonySoftBusKeyRequest.h>
#include <huaweicloud/iotda/v5/model/ResetHarmonySoftBusKeyResponse.h>
#include <huaweicloud/iotda/v5/model/ShowHarmonySoftBusRequest.h>
#include <huaweicloud/iotda/v5/model/ShowHarmonySoftBusResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateMessageRequest.h>
#include <huaweicloud/iotda/v5/model/CreateMessageResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceMessageRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceMessageResponse.h>
#include <huaweicloud/iotda/v5/model/DeviceMessageRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceMessagesRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceMessagesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceMessageRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceMessageResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateOtaModule.h>
#include <huaweicloud/iotda/v5/model/CreateOtaModuleRequest.h>
#include <huaweicloud/iotda/v5/model/CreateOtaModuleResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteOtaModuleRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteOtaModuleResponse.h>
#include <huaweicloud/iotda/v5/model/ListOtaModulesRequest.h>
#include <huaweicloud/iotda/v5/model/ListOtaModulesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowOtaModuleRequest.h>
#include <huaweicloud/iotda/v5/model/ShowOtaModuleResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateOtaModule.h>
#include <huaweicloud/iotda/v5/model/UpdateOtaModuleRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateOtaModuleResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateOtaPackage.h>
#include <huaweicloud/iotda/v5/model/CreateOtaPackageRequest.h>
#include <huaweicloud/iotda/v5/model/CreateOtaPackageResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteOtaPackageRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteOtaPackageResponse.h>
#include <huaweicloud/iotda/v5/model/ListOtaPackageInfoRequest.h>
#include <huaweicloud/iotda/v5/model/ListOtaPackageInfoResponse.h>
#include <huaweicloud/iotda/v5/model/ShowOtaPackageRequest.h>
#include <huaweicloud/iotda/v5/model/ShowOtaPackageResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/BindDevicePolicy.h>
#include <huaweicloud/iotda/v5/model/BindDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/BindDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/CreateDevicePolicy.h>
#include <huaweicloud/iotda/v5/model/CreateDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/CreateDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ListDevicePoliciesRequest.h>
#include <huaweicloud/iotda/v5/model/ListDevicePoliciesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyRequestBody.h>
#include <huaweicloud/iotda/v5/model/ShowTargetsInDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/UnBindDevicePolicy.h>
#include <huaweicloud/iotda/v5/model/UnbindDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/UnbindDevicePolicyResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateDevicePolicy.h>
#include <huaweicloud/iotda/v5/model/UpdateDevicePolicyRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateDevicePolicyResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddProduct.h>
#include <huaweicloud/iotda/v5/model/CreateProductRequest.h>
#include <huaweicloud/iotda/v5/model/CreateProductResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteProductRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteProductResponse.h>
#include <huaweicloud/iotda/v5/model/ListProductsRequest.h>
#include <huaweicloud/iotda/v5/model/ListProductsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowProductRequest.h>
#include <huaweicloud/iotda/v5/model/ShowProductResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateProduct.h>
#include <huaweicloud/iotda/v5/model/UpdateProductRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateProductResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/DevicePropertiesRequest.h>
#include <huaweicloud/iotda/v5/model/ListPropertiesRequest.h>
#include <huaweicloud/iotda/v5/model/ListPropertiesResponse.h>
#include <huaweicloud/iotda/v5/model/UpdatePropertiesRequest.h>
#include <huaweicloud/iotda/v5/model/UpdatePropertiesResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateProvisioningTemplate.h>
#include <huaweicloud/iotda/v5/model/CreateProvisioningTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/CreateProvisioningTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteProvisioningTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteProvisioningTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/ListProvisioningTemplatesRequest.h>
#include <huaweicloud/iotda/v5/model/ListProvisioningTemplatesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowProvisioningTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/ShowProvisioningTemplateResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateProvisioningTemplate.h>
#include <huaweicloud/iotda/v5/model/UpdateProvisioningTemplateRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateProvisioningTemplateResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddActionReq.h>
#include <huaweicloud/iotda/v5/model/AddRuleReq.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingRuleRequest.h>
#include <huaweicloud/iotda/v5/model/CreateRoutingRuleResponse.h>
#include <huaweicloud/iotda/v5/model/CreateRuleActionRequest.h>
#include <huaweicloud/iotda/v5/model/CreateRuleActionResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingRuleRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteRoutingRuleResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteRuleActionRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteRuleActionResponse.h>
#include <huaweicloud/iotda/v5/model/ListRoutingRulesRequest.h>
#include <huaweicloud/iotda/v5/model/ListRoutingRulesResponse.h>
#include <huaweicloud/iotda/v5/model/ListRuleActionsRequest.h>
#include <huaweicloud/iotda/v5/model/ListRuleActionsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingRuleRequest.h>
#include <huaweicloud/iotda/v5/model/ShowRoutingRuleResponse.h>
#include <huaweicloud/iotda/v5/model/ShowRuleActionRequest.h>
#include <huaweicloud/iotda/v5/model/ShowRuleActionResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateActionReq.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingRuleRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateRoutingRuleResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateRuleActionRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateRuleActionResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateRuleReq.h>
#include <string>

#include <huaweicloud/iotda/v5/model/ChangeRuleStatusRequest.h>
#include <huaweicloud/iotda/v5/model/ChangeRuleStatusResponse.h>
#include <huaweicloud/iotda/v5/model/CreateRuleRequest.h>
#include <huaweicloud/iotda/v5/model/CreateRuleResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteRuleRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteRuleResponse.h>
#include <huaweicloud/iotda/v5/model/ListRulesRequest.h>
#include <huaweicloud/iotda/v5/model/ListRulesResponse.h>
#include <huaweicloud/iotda/v5/model/Rule.h>
#include <huaweicloud/iotda/v5/model/RuleStatus.h>
#include <huaweicloud/iotda/v5/model/ShowRuleRequest.h>
#include <huaweicloud/iotda/v5/model/ShowRuleResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateRuleRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateRuleResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddSecurityProfileDTO.h>
#include <huaweicloud/iotda/v5/model/CreateSecurityProfileRequest.h>
#include <huaweicloud/iotda/v5/model/CreateSecurityProfileResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteSecurityProfileRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteSecurityProfileResponse.h>
#include <huaweicloud/iotda/v5/model/ListSecurityProfilesRequest.h>
#include <huaweicloud/iotda/v5/model/ListSecurityProfilesResponse.h>
#include <huaweicloud/iotda/v5/model/ShowSecurityProfileRequest.h>
#include <huaweicloud/iotda/v5/model/ShowSecurityProfileResponse.h>
#include <huaweicloud/iotda/v5/model/UpdateSecurityProfileDTO.h>
#include <huaweicloud/iotda/v5/model/UpdateSecurityProfileRequest.h>
#include <huaweicloud/iotda/v5/model/UpdateSecurityProfileResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/CreateServerCertificateDTO.h>
#include <huaweicloud/iotda/v5/model/CreateServerCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/CreateServerCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteServerCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteServerCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ListServerCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ListServerCertificateResponse.h>
#include <huaweicloud/iotda/v5/model/ShowServerCertificateRequest.h>
#include <huaweicloud/iotda/v5/model/ShowServerCertificateResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/BindTagsDTO.h>
#include <huaweicloud/iotda/v5/model/ListResourcesByTagsRequest.h>
#include <huaweicloud/iotda/v5/model/ListResourcesByTagsResponse.h>
#include <huaweicloud/iotda/v5/model/QueryResourceByTagsDTO.h>
#include <huaweicloud/iotda/v5/model/TagDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/TagDeviceResponse.h>
#include <huaweicloud/iotda/v5/model/UnbindTagsDTO.h>
#include <huaweicloud/iotda/v5/model/UntagDeviceRequest.h>
#include <huaweicloud/iotda/v5/model/UntagDeviceResponse.h>
#include <string>

#include <huaweicloud/iotda/v5/model/AddTunnelDto.h>
#include <huaweicloud/iotda/v5/model/AddTunnelRequest.h>
#include <huaweicloud/iotda/v5/model/AddTunnelResponse.h>
#include <huaweicloud/iotda/v5/model/CloseDeviceTunnelRequest.h>
#include <huaweicloud/iotda/v5/model/CloseDeviceTunnelResponse.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceTunnelRequest.h>
#include <huaweicloud/iotda/v5/model/DeleteDeviceTunnelResponse.h>
#include <huaweicloud/iotda/v5/model/ListDeviceTunnelsRequest.h>
#include <huaweicloud/iotda/v5/model/ListDeviceTunnelsResponse.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceTunnelRequest.h>
#include <huaweicloud/iotda/v5/model/ShowDeviceTunnelResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Iotda::V5::Model;

class HUAWEICLOUD_IOTDA_V5_EXPORT  IoTDAClient : public Client
{
public:

    IoTDAClient();

    virtual ~IoTDAClient();

    static ClientBuilder<IoTDAClient> newBuilder();

    // 生成接入凭证
    //
    // 接入凭证是用于客户端使用AMQP等协议与平台建链的一个认证凭据。只保留一条记录，如果重复调用只会重置接入凭证，使得之前的失效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccessCodeResponse> createAccessCode(
        CreateAccessCodeRequest &request
    );

    // 创建AMQP队列
    //
    // 应用服务器可调用此接口在物联网平台创建一个AMQP队列。每个租户只能创建100个队列，若超过规格，则创建失败，若队列名称与已有的队列名称相同，则创建失败。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddQueueResponse> addQueue(
        AddQueueRequest &request
    );
    // 查询AMQP列表
    //
    // 应用服务器可调用此接口查询物联网平台中的AMQP队列信息列表。可通过队列名称作模糊查询，支持分页。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowQueueResponse> batchShowQueue(
        BatchShowQueueRequest &request
    );
    // 删除AMQP队列
    //
    // 应用服务器可调用此接口在物联网平台上删除指定AMQP队列。若当前队列正在使用，则会删除失败。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteQueueResponse> deleteQueue(
        DeleteQueueRequest &request
    );
    // 查询单个AMQP队列
    //
    // 应用服务器可调用此接口查询物联网平台中指定队列的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQueueResponse> showQueue(
        ShowQueueRequest &request
    );

    // 创建资源空间
    //
    // 资源空间对应的是物联网平台原有的应用，在物联网平台的含义与应用一致，只是变更了名称。应用服务器可以调用此接口创建资源空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddApplicationResponse> addApplication(
        AddApplicationRequest &request
    );
    // 删除资源空间
    //
    // 删除指定资源空间。删除资源空间属于高危操作，删除资源空间后，该空间下的产品、设备等资源将不可用，请谨慎操作！
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationResponse> deleteApplication(
        DeleteApplicationRequest &request
    );
    // 查询资源空间
    //
    // 资源空间对应的是物联网平台原有的应用，在物联网平台的含义与应用一致，只是变更了名称。应用服务器可以调用此接口查询指定资源空间详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApplicationResponse> showApplication(
        ShowApplicationRequest &request
    );
    // 查询资源空间列表
    //
    // 资源空间对应的是物联网平台原有的应用，在物联网平台的含义与应用一致，只是变更了名称。应用服务器可以调用此接口查询资源空间列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApplicationsResponse> showApplications(
        ShowApplicationsRequest &request
    );
    // 更新资源空间
    //
    // 应用服务器可以调用此接口更新资源空间的名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationResponse> updateApplication(
        UpdateApplicationRequest &request
    );

    // 统计设备下的历史命令总数
    //
    // 统计设备下的历史命令总数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountAsyncHistoryCommandsResponse> countAsyncHistoryCommands(
        CountAsyncHistoryCommandsRequest &request
    );
    // 下发异步设备命令
    //
    // 设备的产品模型中定义了物联网平台可向设备下发的命令，应用服务器可调用此接口向指定设备下发异步命令，以实现对设备的控制。平台负责将命令发送给设备，并将设备执行命令结果异步通知应用服务器。 命令执行结果支持灵活的数据流转，应用服务器通过调用物联网平台的创建规则触发条件（Resource:device.command.status，Event:update）、创建规则动作并激活规则后，当命令状态变更时，物联网平台会根据规则将结果发送到规则指定的服务器，如用户自定义的HTTP服务器，AMQP服务器，以及华为云的其他储存服务器等, 详情参考[[设备命令状态变更通知](https://support.huaweicloud.com/api-iothub/iot_06_v5_01212.html)](tag:hws)[[设备命令状态变更通知](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_01212.html)](tag:hws_hk)。
    // 注意：
    // - 此接口适用于NB设备异步命令下发，暂不支持其他协议类型设备命令下发。
    // - 此接口仅支持单个设备异步命令下发，如需多个设备异步命令下发，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAsyncCommandResponse> createAsyncCommand(
        CreateAsyncCommandRequest &request
    );
    // 查询设备下队列中的命令
    //
    // 查询设备下队列中的命令（处理中的命令），包含PENDING、SENT、DELIVERED三种状态，注意：DELIVERED状态的命令经过系统设定的一段时间（具体以系统配置为准）仍然没有更新，就会从队列中移除，变为历史命令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsyncCommandsResponse> listAsyncCommands(
        ListAsyncCommandsRequest &request
    );
    // 查询设备下的历史命令
    //
    // 查询设备下发的历史异步命令，包含EXPIRED、SUCCESSFUL、FAILED、TIMEOUT、DELIVERED五种状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsyncHistoryCommandsResponse> listAsyncHistoryCommands(
        ListAsyncHistoryCommandsRequest &request
    );
    // 查询指定id的命令
    //
    // 物联网平台可查询指定id的命令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAsyncDeviceCommandResponse> showAsyncDeviceCommand(
        ShowAsyncDeviceCommandRequest &request
    );

    // 新建数据流转积压策略
    //
    // 应用服务器可调用此接口在物联网平台创建数据流转积压策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRoutingBacklogPolicyResponse> createRoutingBacklogPolicy(
        CreateRoutingBacklogPolicyRequest &request
    );
    // 删除数据流转积压策略
    //
    // 应用服务器可调用此接口在物联网平台删除指定数据流转积压策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRoutingBacklogPolicyResponse> deleteRoutingBacklogPolicy(
        DeleteRoutingBacklogPolicyRequest &request
    );
    // 查询数据流转积压策略列表
    //
    // 应用服务器可调用此接口查询在物联网平台设置的数据流转积压策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRoutingBacklogPolicyResponse> listRoutingBacklogPolicy(
        ListRoutingBacklogPolicyRequest &request
    );
    // 查询数据流转积压策略
    //
    // 应用服务器可调用此接口在物联网平台查询指定数据流转积压策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRoutingBacklogPolicyResponse> showRoutingBacklogPolicy(
        ShowRoutingBacklogPolicyRequest &request
    );
    // 修改数据流转积压策略
    //
    // 应用服务器可调用此接口在物联网平台修改指定数据流转积压策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRoutingBacklogPolicyResponse> updateRoutingBacklogPolicy(
        UpdateRoutingBacklogPolicyRequest &request
    );

    // 创建批量任务
    //
    // 应用服务器可调用此接口为创建批量处理任务，对多个设备进行批量操作。当前支持批量软固件升级、批量创建设备、批量删除设备、批量冻结设备、批量解冻设备、批量创建命令、批量创建消息任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBatchTaskResponse> createBatchTask(
        CreateBatchTaskRequest &request
    );
    // 删除批量任务
    //
    // 应用服务器可调用此接口删除物联网平台中已经完成（状态为成功，失败，部分成功，已停止）的批量任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBatchTaskResponse> deleteBatchTask(
        DeleteBatchTaskRequest &request
    );
    // 查询批量任务列表
    //
    // 应用服务器可调用此接口查询物联网平台中批量任务列表，每一个任务又包括具体的任务内容、任务状态、任务完成情况统计等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBatchTasksResponse> listBatchTasks(
        ListBatchTasksRequest &request
    );
    // 重试批量任务
    //
    // 应用服务器可调用此接口重试批量任务，目前只支持task_type为firmwareUpgrade，softwareUpgrade。如果task_id对应任务已经成功、停止、正在停止、等待中或初始化中，则不可以调用该接口。如果请求Body为{}，则调用该接口后会重新执行所有状态为失败、失败待重试和已停止的子任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryBatchTaskResponse> retryBatchTask(
        RetryBatchTaskRequest &request
    );
    // 查询批量任务
    //
    // 应用服务器可调用此接口查询物联网平台中指定批量任务的信息，包括任务内容、任务状态、任务完成情况统计以及子任务列表等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBatchTaskResponse> showBatchTask(
        ShowBatchTaskRequest &request
    );
    // 停止批量任务
    //
    // 应用服务器可调用此接口停止批量任务，目前只支持task_type为firmwareUpgrade，softwareUpgrade。如果task_id对应任务已经完成（成功、失败、部分成功，已经停止）或正在停止中，则不可以调用该接口。如果请求Body为{}，则调用该接口后会停止所有正在执行中、等待中和失败待重试状态的子任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBatchTaskResponse> stopBatchTask(
        StopBatchTaskRequest &request
    );

    // 删除批量任务文件
    //
    // 应用服务器可调用此接口删除批量任务文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBatchTaskFileResponse> deleteBatchTaskFile(
        DeleteBatchTaskFileRequest &request
    );
    // 查询批量任务文件列表
    //
    // 应用服务器可调用此接口查询批量任务文件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBatchTaskFilesResponse> listBatchTaskFiles(
        ListBatchTaskFilesRequest &request
    );

    // 创建网桥
    //
    // 应用服务器可调用此接口在物联网平台创建一个网桥，仅在创建后的网桥才可以接入物联网平台。
    // - 一个实例最多支持20个网桥。
    // - 仅**标准版实例、企业版实例**支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddBridgeResponse> addBridge(
        AddBridgeRequest &request
    );
    // 删除网桥
    //
    // 应用服务器可调用此接口在物联网平台上删除指定网桥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBridgeResponse> deleteBridge(
        DeleteBridgeRequest &request
    );
    // 查询网桥列表
    //
    // 应用服务器可调用此接口在物联网平台查询网桥列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBridgesResponse> listBridges(
        ListBridgesRequest &request
    );
    // 重置网桥密钥
    //
    // 应用服务器可调用此接口在物联网平台上重置网桥密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetBridgeSecretResponse> resetBridgeSecret(
        ResetBridgeSecretRequest &request
    );

    // 下发广播消息
    //
    // 应用服务器可调用此接口向订阅了指定Topic的所有在线设备发布广播消息。应用将广播消息下发给平台后，平台会先返回应用响应结果，再将消息广播给设备。
    // 注意：
    // - 此接口只适用于使用MQTT协议接入的设备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BroadcastMessageResponse> broadcastMessage(
        BroadcastMessageRequest &request
    );

    // 上传设备CA证书
    //
    // 应用服务器可调用此接口在物联网平台上传设备CA证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddCertificateResponse> addCertificate(
        AddCertificateRequest &request
    );
    // 验证设备CA证书
    //
    // 应用服务器可调用此接口在物联网平台验证设备的CA证书，目的是为了验证用户持有设备CA证书的私钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckCertificateResponse> checkCertificate(
        CheckCertificateRequest &request
    );
    // 删除设备CA证书
    //
    // 应用服务器可调用此接口在物联网平台删除设备CA证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCertificateResponse> deleteCertificate(
        DeleteCertificateRequest &request
    );
    // 获取设备CA证书列表
    //
    // 应用服务器可调用此接口在物联网平台获取设备CA证书列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCertificatesResponse> listCertificates(
        ListCertificatesRequest &request
    );
    // 查询CA证书
    //
    // 应用服务器可调用此接口在物联网平台查询CA证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCertificateResponse> showCertificate(
        ShowCertificateRequest &request
    );
    // 更新CA证书
    //
    // 应用服务器可调用此接口在物联网平台上更新CA证书。仅标准版实例、企业版实例支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCertificateResponse> updateCertificate(
        UpdateCertificateRequest &request
    );

    // 下发设备命令
    //
    // 设备的产品模型中定义了物联网平台可向设备下发的命令，应用服务器可调用此接口向指定设备下发命令，以实现对设备的同步控制。平台负责将命令以同步方式发送给设备，并将设备执行命令结果同步返回, 如果设备没有响应，平台会返回给应用服务器超时，平台超时时间是20秒。如果命令下发需要超过20秒，建议采用[[消息下发](https://support.huaweicloud.com/api-iothub/iot_06_v5_0059.html)](tag:hws)[[消息下发](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0059.html)](tag:hws_hk)。
    // 注意：
    // - 此接口适用于MQTT设备同步命令下发，暂不支持NB-IoT设备命令下发。
    // - 此接口仅支持单个设备同步命令下发，如需多个设备同步命令下发，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCommandResponse> createCommand(
        CreateCommandRequest &request
    );

    // 创建设备鉴权模板
    //
    // 应用服务器可调用此接口在物联网平台创建一个设备鉴权模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeviceAuthenticationTemplateResponse> createDeviceAuthenticationTemplate(
        CreateDeviceAuthenticationTemplateRequest &request
    );
    // 删除设备鉴权模板
    //
    // 应用服务器可调用此接口在物联网平台上删除指定设备鉴权模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceAuthenticationTemplateResponse> deleteDeviceAuthenticationTemplate(
        DeleteDeviceAuthenticationTemplateRequest &request
    );
    // 查询设备鉴权模板列表
    //
    // 应用服务器可调用此接口在物联网平台查询设备鉴权模板列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceAuthenticationTemplatesResponse> listDeviceAuthenticationTemplates(
        ListDeviceAuthenticationTemplatesRequest &request
    );
    // 查询设备鉴权模板详情
    //
    // 应用服务器可调用此接口在物联网平台查询指定设备鉴权模板ID的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceAuthenticationTemplateResponse> showDeviceAuthenticationTemplate(
        ShowDeviceAuthenticationTemplateRequest &request
    );
    // 修改设备鉴权模板
    //
    // 应用服务器可调用此接口在物联网平台上修改指定设备鉴权模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceAuthenticationTemplateResponse> updateDeviceAuthenticationTemplate(
        UpdateDeviceAuthenticationTemplateRequest &request
    );

    // 创建自定义鉴权
    //
    // 应用服务器可调用此接口在物联网平台创建一个自定义鉴权。自定义鉴权是指用户可以通过函数服务自定义实现鉴权逻辑，以对接入平台的设备进行身份认证。
    // - 单个实例最大可配置10个自定义鉴权
    // - 仅标准版实例、企业版实例支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeviceAuthorizerResponse> createDeviceAuthorizer(
        CreateDeviceAuthorizerRequest &request
    );
    // 删除自定义鉴权
    //
    // 应用服务器可调用此接口在物联网平台上删除指定自定义鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceAuthorizerResponse> deleteDeviceAuthorizer(
        DeleteDeviceAuthorizerRequest &request
    );
    // 查询自定义鉴权列表
    //
    // 应用服务器可调用此接口在物联网平台查询自定义鉴权列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceAuthorizersResponse> listDeviceAuthorizers(
        ListDeviceAuthorizersRequest &request
    );
    // 查询自定义鉴权详情
    //
    // 应用服务器可调用此接口在物联网平台查询指定自定义鉴权ID的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceAuthorizerResponse> showDeviceAuthorizer(
        ShowDeviceAuthorizerRequest &request
    );
    // 更新指定id的自定义鉴权
    //
    // 应用服务器可调用此接口在物联网平台更新指定id的自定义鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceAuthorizerResponse> updateDeviceAuthorizer(
        UpdateDeviceAuthorizerRequest &request
    );

    // 删除设备证书
    //
    // 应用服务器可调用此接口在物联网平台删除一个设备证书。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceCertificateResponse> deleteDeviceCertificate(
        DeleteDeviceCertificateRequest &request
    );
    // 查询使用指定设备证书的设备列表
    //
    // 应用服务器可调用此接口在物联网平台查询使用指定设备证书的设备列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceByDeviceCertificateResponse> listDeviceByDeviceCertificate(
        ListDeviceByDeviceCertificateRequest &request
    );
    // 查询设备证书列表
    //
    // 应用服务器可调用此接口在物联网平台查询设备证书列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceCertificateResponse> listDeviceCertificate(
        ListDeviceCertificateRequest &request
    );
    // 查询设备证书
    //
    // 应用服务器可调用此接口在物联网平台更新一个设备证书状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceCertificateResponse> showDeviceCertificate(
        ShowDeviceCertificateRequest &request
    );
    // 更新设备证书
    //
    // 应用服务器可调用此接口在物联网平台更新一个设备证书状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceCertificateResponse> updateDeviceCertificate(
        UpdateDeviceCertificateRequest &request
    );

    // 添加设备组
    //
    // 应用服务器可调用此接口新建设备组，一个华为云账号下最多可有1,000个设备组，包括父设备组和子设备组。设备组的最大层级关系不超过5层，即群组形成的关系树最大深度不超过5。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDeviceGroupResponse> addDeviceGroup(
        AddDeviceGroupRequest &request
    );
    // 管理设备组中的设备
    //
    // 应用服务器可调用此接口管理设备组中的设备。单个设备组内最多添加20,000个设备，一个设备最多可以被添加到10个设备组中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOrDeleteDeviceInGroupResponse> createOrDeleteDeviceInGroup(
        CreateOrDeleteDeviceInGroupRequest &request
    );
    // 删除设备组
    //
    // 应用服务器可调用此接口删除指定设备组，如果该设备组存在子设备组或者该设备组中存在设备，必须先删除子设备组并将设备从该设备组移除，才能删除该设备组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceGroupResponse> deleteDeviceGroup(
        DeleteDeviceGroupRequest &request
    );
    // 查询设备组列表
    //
    // 应用服务器可调用此接口查询物联网平台中的设备组信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceGroupsResponse> listDeviceGroups(
        ListDeviceGroupsRequest &request
    );
    // 查询设备组
    //
    // 应用服务器可调用此接口查询指定设备组详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceGroupResponse> showDeviceGroup(
        ShowDeviceGroupRequest &request
    );
    // 查询设备组设备列表
    //
    // 应用服务器可调用此接口查询指定设备组下的设备列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDevicesInGroupResponse> showDevicesInGroup(
        ShowDevicesInGroupRequest &request
    );
    // 修改设备组
    //
    // 应用服务器可调用此接口修改物联网平台中指定设备组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceGroupResponse> updateDeviceGroup(
        UpdateDeviceGroupRequest &request
    );

    // 创建设备
    //
    // 应用服务器可调用此接口在物联网平台创建一个设备，仅在创建后设备才可以接入物联网平台。
    // 
    // - 该接口支持使用gateway_id参数指定在父设备下创建一个子设备，并且支持多级子设备，当前最大支持二级子设备。
    // - 该接口同时还支持对设备进行初始配置，接口会读取创建设备请求参数product_id对应的产品详情，如果产品的属性有定义默认值，则会将该属性默认值写入该设备的设备影子中。
    // - 用户还可以使用创建设备请求参数shadow字段为设备指定初始配置，指定后将会根据service_id和desired设置的属性值与产品中对应属性的默认值比对，如果不同，则将以shadow字段中设置的属性值为准写入到设备影子中。
    // - 该接口仅支持创建单个设备，如需批量注册设备，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDeviceResponse> addDevice(
        AddDeviceRequest &request
    );
    // 修改设备网关
    //
    // 应用服务器可调用此接口在物联网平台修改子设备网关。
    // - 只允许子设备修改网关。
    // - 目标网关必须和当前设备在同一个资源空间。
    // - 网关id不能和当前子设备网关id相同。
    // - 设备如果有下级子设备，则不允许切换网关。
    // - 支持多级子设备，当前最大支持二级子设备。
    // - 该接口仅支持创建单个设备切换网关，如需批量切换设备网关，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeGatewayResponse> changeGateway(
        ChangeGatewayRequest &request
    );
    // 删除设备
    //
    // 应用服务器可调用此接口在物联网平台上删除指定设备。若设备下连接了非直连设备，则必须把设备下的非直连设备都删除后，才能删除该设备。该接口仅支持删除单个设备，如需批量删除设备，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceResponse> deleteDevice(
        DeleteDeviceRequest &request
    );
    // 冻结设备
    //
    // 应用服务器可调用此接口冻结设备，设备冻结后不能再连接上线，可以通过解冻设备接口解除设备冻结。注意，当前仅支持冻结与平台直连的设备。该接口仅支持冻结单个设备，如需批量冻结设备，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<FreezeDeviceResponse> freezeDevice(
        FreezeDeviceRequest &request
    );
    // 查询指定设备加入的设备组列表
    //
    // 应用服务器可调用此接口查询物联网平台中的某个设备加入的设备组信息列表。仅标准版实例、企业版实例支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceGroupsByDeviceResponse> listDeviceGroupsByDevice(
        ListDeviceGroupsByDeviceRequest &request
    );
    // 查询设备列表
    //
    // 应用服务器可调用此接口查询物联网平台中的设备信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevicesResponse> listDevices(
        ListDevicesRequest &request
    );
    // 重置设备密钥
    //
    // 应用服务器可调用此接口重置设备密钥，携带指定密钥时平台将设备密钥重置为指定的密钥，不携带密钥时平台将自动生成一个新的随机密钥返回。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetDeviceSecretResponse> resetDeviceSecret(
        ResetDeviceSecretRequest &request
    );
    // 重置设备指纹
    //
    // 应用服务器可调用此接口重置设备指纹。携带指定设备指纹时将之重置为指定值；不携带时将之置空，后续设备第一次接入时，该设备指纹的值将设置为第一次接入时的证书指纹。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetFingerprintResponse> resetFingerprint(
        ResetFingerprintRequest &request
    );
    // 灵活搜索设备列表
    //
    // #### 接口说明
    // 
    // 应用服务器使用SQL语句调用该接口，灵活的搜索所需要的设备资源列表
    // 
    // #### 限制
    // 
    // - 仅**标准版实例、企业版实例**支持该接口调用，基础版不支持。
    // - 单账号调用该接口的 TPS 限制最大为1/S(每秒1次请求数)
    // 
    // #### 类SQL语法使用说明
    // 
    // 类SQL语句有select、from、where(可选)、order by(可选)、limit子句(可选)组成，长度限制为400个字符。子句里的内容大小写敏感，SQL语句的关键字大小写不敏感。
    // 
    // 示例：
    // 
    // &#x60;&#x60;&#x60;
    // select * from device where device_id &#x3D; &#39;as********&#39; limit 0,5
    // &#x60;&#x60;&#x60;
    // 
    // ##### SELECT子句
    // 
    // &#x60;&#x60;&#x60;
    // select [field]/[count(*)/count(1)] from device
    // &#x60;&#x60;&#x60;
    // 
    // 其中field为需要获取的字段，请参考响应参数字段名称，也可填*，获取所有字段。
    // 
    // 如果需要统计搜索的设备个数，请填count(*)或者count(1).
    // 
    // ##### FROM子句
    // 
    // &#x60;&#x60;&#x60;
    // from device
    // &#x60;&#x60;&#x60;
    // 
    // from后为要查询的资源名，当前支持\&quot;device\&quot;
    // 
    // ##### WHERE子句(可选)
    // 
    // &#x60;&#x60;&#x60;
    // WHERE [condition1] AND [condition2]
    // &#x60;&#x60;&#x60;
    // 
    // 最多支持5个condition，不支持嵌套；支持的检索字段请参见下面的**搜索条件字段说明**和**支持的运算符**章节
    // 
    // 连接词支持AND、OR，优先级参考标准SQL语法，默认AND优先级高于OR。
    // 
    // ##### LIMIT子句(可选)
    // 
    // &#x60;&#x60;&#x60;
    // limit [offset,] rows
    // &#x60;&#x60;&#x60;
    // 
    // offset标识搜索的偏移量，rows标识返回搜索结果的最大行数，例如：
    // 
    // - limit n ;示例(select * from device limit 10)
    // 
    //   最大返回n条结果数据
    //   
    // - limit m,n; 示例(select * from device limit 20,10) 
    //   搜索偏移量为m，最大返回n条结果数据
    // 
    // ###### 限制
    // 
    //  offset 最大 500， rows最大50，如果不填写limit子句，默认为limit 10
    // 
    // ##### ORDER BY子句(可选)
    // 
    // 用于实现自定义排序，当前支持自定义排序的字段为：\&quot;marker\&quot;。
    // 
    // &#x60;&#x60;&#x60;
    // order by marker [asc]/[desc]
    // &#x60;&#x60;&#x60;
    // 
    // 子句不填写时默认逻辑为随机排序
    // 
    // #### 搜索条件字段说明
    // 
    // | 字段名      | 类型   | 说明             | 取值范围                                                     |
    // | :---------- | :----- | :--------------- | :----------------------------------------------------------- |
    // | app_id      | string | 资源空间ID       | 长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。 |
    // | device_id   | string | 设备ID           | 长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。 |
    // | gateway_id  | string | 网关ID           | 长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。 |
    // | product_id  | string | 设备关联的产品ID | 长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。 |
    // | device_name | string | 设备名称         | 长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合符。 |
    // | node_id     | string | 设备标识码       | 长度不超过64，只允许字母、数字、下划线（_）、连接符（-）的组合 |
    // | status      | string | 设备的状态       | ONLINE(在线)、OFFLINE(离线)、ABNORMAL(异常)、INACTIVE(未激活)、FROZEN(冻结) |
    // | node_type   | string | 设备节点类型     | GATEWAY(直连设备或网关)、ENDPOINT(非直连设备)                |
    // | tag_key     | string | 标签键           | 长度不超过64，只允许中文、字母、数字、以及_.-等字符的组合。  |
    // | tag_value   | string | 标签值           | 长度不超过128，只允许中文、字母、数字、以及_.-等字符的组合。 |
    // | sw_version  | string | 软件版本         | 长度不超过64，只允许字母、数字、下划线（_）、连接符（-）、英文点(.)的组合。 |
    // | fw_version  | string | 固件版本         | 长度不超过64，只允许字母、数字、下划线（_）、连接符（-）、英文点(.)的组合。 |
    // | group_id    | string | 群组Id           | 长度不超过36，十六进制字符串和连接符（-）的组合              |
    // | create_time | string | 设备注册时间     | 格式：yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;，如：2015-06-06T12:10:10.000Z |
    // | marker      | string | 结果记录ID       | 长度为24的十六进制字符串，如ffffffffffffffffffffffff         |
    // 
    // #### 支持的运算符
    // 
    // | 运算符  | 支持的字段                               |
    // | ------- | ---------------------------------------- |
    // | &#x3D;       | 所有                                     |
    // | !&#x3D;      | 所有                                     |
    // | &gt;       | create_time、marker                      |
    // | &lt;       | create_time、marker                      |
    // | like    | device_name、node_id、tag_key、tag_value |
    // | in      | 除tag_key、tag_value以外字段             |
    // | not  in | 除tag_key、tag_value以外字段             |
    // 
    // #### SQL 限制
    // 
    // - like: 只支持前缀匹配，不支持后缀匹配或者通配符匹配。前缀匹配不得少于4个字符，且不能包含任何特殊字符(只允许中文、字母、数字、下划线（_）、连接符（-）). 前缀后必须跟上\&quot;%\&quot;结尾。
    // - 不支持除了count(*)/count(1)以外的其他任何函数。
    // - 不支持其他SQL用法，如嵌套SQL、union、join、别名(Alias)等用法
    // - SQL长度限制为400个字符，单个请求条件最大支持5个。
    // - 不支持\&quot;null\&quot;和空字符串等条件值匹配
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchDevicesResponse> searchDevices(
        SearchDevicesRequest &request
    );
    // 查询设备
    //
    // 应用服务器可调用此接口查询物联网平台中指定设备的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceResponse> showDevice(
        ShowDeviceRequest &request
    );
    // 解冻设备
    //
    // 应用服务器可调用此接口解冻设备，解除冻结后，设备可以连接上线。该接口仅支持解冻单个设备，如需批量解冻设备，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnfreezeDeviceResponse> unfreezeDevice(
        UnfreezeDeviceRequest &request
    );
    // 修改设备
    //
    // 应用服务器可调用此接口修改物联网平台中指定设备的基本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceResponse> updateDevice(
        UpdateDeviceRequest &request
    );

    // 创建设备代理
    //
    // 应用服务器可调用此接口在物联网平台创建一个动态设备代理规则，用于子设备自主选择网关设备上线和上报消息，即代理组下的任意网关下的子设备均可以通过代理组里其他设备上线([[网关更新子设备状态](https://support.huaweicloud.com/api-iothub/iot_06_v5_3022.html)](tag:hws) [[网关更新子设备状态](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_3022.html)](tag:hws_hk))然后进行数据上报([[网关批量设备属性上报](https://support.huaweicloud.com/api-iothub/iot_06_v5_3006.html)](tag:hws) [[网关更新子设备状态](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_3006.html)](tag:hws_hk))。
    // - 单实例最多可以配置10个设备代理
    // - 单账号调用该接口的 TPS 限制最大为1/S(每秒1次请求数)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDeviceProxyResponse> createDeviceProxy(
        CreateDeviceProxyRequest &request
    );
    // 删除设备代理
    //
    // 应用服务器可调用此接口在物联网平台上删除指定设备代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceProxyResponse> deleteDeviceProxy(
        DeleteDeviceProxyRequest &request
    );
    // 查询设备代理列表
    //
    // 应用服务器可调用此接口查询物联网平台中的设备代理列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceProxiesResponse> listDeviceProxies(
        ListDeviceProxiesRequest &request
    );
    // 查询设备代理详情
    //
    // 应用服务器可调用此接口查询物联网平台中指定设备代理的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceProxyResponse> showDeviceProxy(
        ShowDeviceProxyRequest &request
    );
    // 修改设备代理
    //
    // 应用服务器可调用此接口修改物联网平台中指定设备代理的基本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceProxyResponse> updateDeviceProxy(
        UpdateDeviceProxyRequest &request
    );

    // 删除设备影子数据
    //
    // 应用服务器可调用此接口删除指定设备的设备影子信息，包括对设备的期望属性信息（desired区）和设备最新上报的属性信息（reported区）中的所有数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceShadowResponse> deleteDeviceShadow(
        DeleteDeviceShadowRequest &request
    );
    // 查询设备影子数据
    //
    // 应用服务器可调用此接口查询指定设备的设备影子信息，包括对设备的期望属性信息（desired区）和设备最新上报的属性信息（reported区）。
    // 
    // 设备影子介绍：
    // 设备影子是一个用于存储和检索设备当前状态信息的JSON文档。
    // - 每个设备有且只有一个设备影子，由设备ID唯一标识
    // - 设备影子用于存储设备上报的(状态)属性和应用程序期望的设备(状态)属性
    // - 无论该设备是否在线，都可以通过该影子获取和设置设备的属性
    // - 设备上线或者设备上报属性时，如果desired区和reported区存在差异，则将差异部分下发给设备，配置的预期属性需在产品模型中定义且method具有可写属性“W”才可下发
    // 
    // 限制：
    // 设备影子JSON文档中的key不允许特殊字符：点(.)、dollar符号($)、空char(十六进制的ASCII码为00)。如果包含了以上特殊字符则无法正常刷新影子文档。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceShadowResponse> showDeviceShadow(
        ShowDeviceShadowRequest &request
    );
    // 配置设备影子预期数据
    //
    // 应用服务器可调用此接口配置设备影子的预期属性（desired区），当设备上线或者设备上报属性时把属性下发给设备。
    // 
    // 设备影子介绍：
    // 设备影子是一个用于存储和检索设备当前状态信息的JSON文档。
    // - 每个设备有且只有一个设备影子，由设备ID唯一标识
    // - 设备影子用于存储设备上报的(状态)属性和应用程序期望的设备(状态)属性
    // - 无论该设备是否在线，都可以通过该影子获取和设置设备的属性
    // - 设备上线或者设备上报属性时，如果desired区和reported区存在差异，则将差异部分下发给设备，配置的预期属性需在产品模型中定义且method具有可写属性“W”才可下发
    // - 该接口仅支持配置单个设备的设备影子的预期数据，如需多个设备的设备影子配置，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // 限制：
    // 设备影子JSON文档中的key不允许特殊字符：点(.)、dollar符号($)、空char(十六进制的ASCII码为00)。如果包含了以上特殊字符则无法正常刷新影子文档。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDeviceShadowDesiredDataResponse> updateDeviceShadowDesiredData(
        UpdateDeviceShadowDesiredDataRequest &request
    );

    // 添加域配置
    //
    // 应用服务器可调用此接口在物联网平台上添加域配置，域配置配额上限为：1个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainConfigurationResponse> createDomainConfiguration(
        CreateDomainConfigurationRequest &request
    );
    // 删除域配置
    //
    // 应用服务器可调用此接口在物联网平台删除域配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainConfigurationResponse> deleteDomainConfiguration(
        DeleteDomainConfigurationRequest &request
    );
    // 获取域配置列表
    //
    // 应用服务器可调用此接口在物联网平台获取域配置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainConfigurationsResponse> listDomainConfigurations(
        ListDomainConfigurationsRequest &request
    );
    // 查询域配置
    //
    // 应用服务器可调用此接口在物联网平台查询域配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainConfigurationResponse> showDomainConfiguration(
        ShowDomainConfigurationRequest &request
    );
    // 更新域配置
    //
    // 应用服务器可调用此接口在物联网平台上更新域配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainConfigurationResponse> updateDomainConfiguration(
        UpdateDomainConfigurationRequest &request
    );

    // 创建导出任务
    //
    // 应用服务器可调用此接口创建资源导出任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateExportTaskResponse> createExportTask(
        CreateExportTaskRequest &request
    );
    // 删除导出任务
    //
    // 应用服务器可调用此接口删除在平台创建的导出任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteExportTaskResponse> deleteExportTask(
        DeleteExportTaskRequest &request
    );
    // 查询导出任务列表
    //
    // 应用服务器可调用此接口查询已创建的导出任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExportTasksResponse> listExportTasks(
        ListExportTasksRequest &request
    );
    // 下载导出文件
    //
    // 应用服务器可调用此接口下载已经完成的导出任务生成的文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowExportTaskResponse> showExportTask(
        ShowExportTaskRequest &request
    );

    // 新建数据流转流控策略
    //
    // 应用服务器可调用此接口在物联网平台创建数据流转流控策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRoutingFlowControlPolicyResponse> createRoutingFlowControlPolicy(
        CreateRoutingFlowControlPolicyRequest &request
    );
    // 删除数据流转流控策略
    //
    // 应用服务器可调用此接口在物联网平台删除指定数据流转流控策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRoutingFlowControlPolicyResponse> deleteRoutingFlowControlPolicy(
        DeleteRoutingFlowControlPolicyRequest &request
    );
    // 查询数据流转流控策略列表
    //
    // 应用服务器可调用此接口查询在物联网平台设置的数据流转流控策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRoutingFlowControlPolicyResponse> listRoutingFlowControlPolicy(
        ListRoutingFlowControlPolicyRequest &request
    );
    // 查询数据流转流控策略
    //
    // 应用服务器可调用此接口在物联网平台查询指定数据流转流控策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRoutingFlowControlPolicyResponse> showRoutingFlowControlPolicy(
        ShowRoutingFlowControlPolicyRequest &request
    );
    // 修改数据流转流控策略
    //
    // 应用服务器可调用此接口在物联网平台修改指定数据流转流控策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRoutingFlowControlPolicyResponse> updateRoutingFlowControlPolicy(
        UpdateRoutingFlowControlPolicyRequest &request
    );

    // 创建编解码函数
    //
    // 提供创建编解码函数的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddFunctionsResponse> addFunctions(
        AddFunctionsRequest &request
    );
    // 删除编解码函数
    //
    // 提供删除编解码函数的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFunctionsResponse> deleteFunctions(
        DeleteFunctionsRequest &request
    );
    // 查询编解码函数
    //
    // 提供查询编解码函数的功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionsResponse> listFunctions(
        ListFunctionsRequest &request
    );

    // 创建鸿蒙软总线
    //
    // 应用服务器可调用此接口新建鸿蒙软总线。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddHarmonySoftBusResponse> addHarmonySoftBus(
        AddHarmonySoftBusRequest &request
    );
    // 同步鸿蒙软总线信息
    //
    // 应用服务器可调用此接口向组内设备同步鸿蒙软总线信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSyncHarmonySoftBusResponse> createSyncHarmonySoftBus(
        CreateSyncHarmonySoftBusRequest &request
    );
    // 删除鸿蒙软总线
    //
    // 应用服务器可调用此接口删除指定鸿蒙软总线。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHarmonySoftBusResponse> deleteHarmonySoftBus(
        DeleteHarmonySoftBusRequest &request
    );
    // 查询鸿蒙软总线列表
    //
    // 应用服务器可调用此接口查询鸿蒙软总线列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHarmonySoftBusResponse> listHarmonySoftBus(
        ListHarmonySoftBusRequest &request
    );
    // 重置鸿蒙软总线秘钥
    //
    // 应用服务器可调用此接口重置鸿蒙软总线秘钥, 重置后状态变为未同步需要用户调用同步接口想组内设备同步最新秘钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetHarmonySoftBusKeyResponse> resetHarmonySoftBusKey(
        ResetHarmonySoftBusKeyRequest &request
    );
    // 查询鸿蒙软总线
    //
    // 应用服务器可调用此接口查询指定ID的鸿蒙软总线。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHarmonySoftBusResponse> showHarmonySoftBus(
        ShowHarmonySoftBusRequest &request
    );

    // 下发设备消息
    //
    // 物联网平台可向设备下发消息，应用服务器可调用此接口向指定设备下发消息，以实现对设备的控制。应用将消息下发给平台后，平台返回应用响应结果，平台再将消息发送给设备。平台返回应用响应结果不一定是设备接收结果，建议用户应用通过订阅[[设备消息状态变更通知](https://support.huaweicloud.com/api-iothub/iot_06_v5_01203.html)](tag:hws)[[设备消息状态变更通知](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_01203.html)](tag:hws_hk)，订阅后平台会将设备接收结果推送给订阅的应用。
    // 注意：
    // - 此接口适用于MQTT设备消息下发，暂不支持其他协议接入的设备消息下发。
    // - 此接口仅支持单个设备消息下发，如需多个设备消息下发，请参见 [[创建批量任务](https://support.huaweicloud.com/api-iothub/iot_06_v5_0045.html)](tag:hws)[[创建批量任务](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0045.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMessageResponse> createMessage(
        CreateMessageRequest &request
    );
    // 删除指定消息id的消息
    //
    // 应用服务器可调用此接口删除平台下发给设备的指定消息id的消息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceMessageResponse> deleteDeviceMessage(
        DeleteDeviceMessageRequest &request
    );
    // 查询设备消息
    //
    // 应用服务器可调用此接口查询平台下发给设备的消息，平台为每个设备默认最多保存20条消息，超过20条后， 后续的消息会替换下发最早的消息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceMessagesResponse> listDeviceMessages(
        ListDeviceMessagesRequest &request
    );
    // 查询指定消息id的消息
    //
    // 应用服务器可调用此接口查询平台下发给设备的指定消息id的消息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceMessageResponse> showDeviceMessage(
        ShowDeviceMessageRequest &request
    );

    // 创建OTA模块
    //
    // 用户可调用此接口创建产品的OTA模块,同一产品下最多自定义10个OTA模块。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOtaModuleResponse> createOtaModule(
        CreateOtaModuleRequest &request
    );
    // 删除OTA模块
    //
    // 用户可调用此接口删除产品对应的OTA模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOtaModuleResponse> deleteOtaModule(
        DeleteOtaModuleRequest &request
    );
    // 查询OTA模块列表
    //
    // 用户可调用此接口查询指定产品的OTA模块列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOtaModulesResponse> listOtaModules(
        ListOtaModulesRequest &request
    );
    // 查询OTA模块详情
    //
    // 用户可调用此接口查询OTA模块详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOtaModuleResponse> showOtaModule(
        ShowOtaModuleRequest &request
    );
    // 修改OTA模块
    //
    // 用户可调用此接口修改对应的OTA模块的别名和描述。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateOtaModuleResponse> updateOtaModule(
        UpdateOtaModuleRequest &request
    );

    // 创建OTA升级包
    //
    // 用户可调用此接口创建升级包关联OBS对象
    // 使用前提：使用该API需要您授权设备接入服务(IoTDA)的实例访问对象存储服务(OBS)以及 密钥管理服务(KMS Administrator)的权限。在“[[统一身份认证服务（IAM）](https://console.huaweicloud.com/iam)](tag:hws)[[统一身份认证服务（IAM）](https://console-intl.huaweicloud.com/iam)](tag:hws_hk) - 委托”中将委托名称为iotda_admin_trust的委托授权KMS Administrator和OBS OperateAccess
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOtaPackageResponse> createOtaPackage(
        CreateOtaPackageRequest &request
    );
    // 删除OTA升级包
    //
    // 用户可调用此接口删除关联OBS对象的升级包信息，不会删除OBS上对象
    // 使用前提：使用该API需要您授权设备接入服务(IoTDA)的实例访问对象存储服务(OBS)以及 密钥管理服务(KMS Administrator)的权限。在“[[统一身份认证服务（IAM）](https://console.huaweicloud.com/iam)](tag:hws)[[统一身份认证服务（IAM）](https://console-intl.huaweicloud.com/iam)](tag:hws_hk) - 委托”中将委托名称为iotda_admin_trust的委托授权KMS Administrator和OBS OperateAccess
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOtaPackageResponse> deleteOtaPackage(
        DeleteOtaPackageRequest &request
    );
    // 查询OTA升级包列表
    //
    // 用户可调用此接口查询关联OBS对象的升级包列表
    // 使用前提：使用该API需要您授权设备接入服务(IoTDA)的实例访问对象存储服务(OBS)以及 密钥管理服务(KMS Administrator)的权限。在“[[统一身份认证服务（IAM）](https://console.huaweicloud.com/iam)](tag:hws)[[统一身份认证服务（IAM）](https://console-intl.huaweicloud.com/iam)](tag:hws_hk) - 委托”中将委托名称为iotda_admin_trust的委托授权KMS Administrator和OBS OperateAccess
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOtaPackageInfoResponse> listOtaPackageInfo(
        ListOtaPackageInfoRequest &request
    );
    // 获取OTA升级包详情
    //
    // 用户可调用此接口查询关联OBS对象的升级包详情
    // 使用前提：使用该API需要您授权设备接入服务(IoTDA)的实例访问对象存储服务(OBS)以及 密钥管理服务(KMS Administrator)的权限。在“[[统一身份认证服务（IAM）](https://console.huaweicloud.com/iam)](tag:hws)[[统一身份认证服务（IAM）](https://console-intl.huaweicloud.com/iam)](tag:hws_hk) - 委托”中将委托名称为iotda_admin_trust的委托授权KMS Administrator和OBS OperateAccess
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOtaPackageResponse> showOtaPackage(
        ShowOtaPackageRequest &request
    );

    // 绑定设备策略
    //
    // 应用服务器可调用此接口在物联网平台上为批量设备绑定目标策略，目前支持绑定目标类型为：设备、产品，当目标类型为产品时，该产品下所有设备都会生效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindDevicePolicyResponse> bindDevicePolicy(
        BindDevicePolicyRequest &request
    );
    // 创建设备策略
    //
    // 应用服务器可调用此接口在物联网平台创建一个策略，该策略需要绑定到设备和产品下才能生效。
    // - 一个实例最多能创建50个设备策略。
    // - 仅**标准版实例、企业版实例**支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDevicePolicyResponse> createDevicePolicy(
        CreateDevicePolicyRequest &request
    );
    // 删除设备策略
    //
    // 应用服务器可调用此接口在物联网平台上删除指定策略，注意：删除策略同时会解绑该策略下所有绑定对象。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDevicePolicyResponse> deleteDevicePolicy(
        DeleteDevicePolicyRequest &request
    );
    // 查询设备策略列表
    //
    // 应用服务器可调用此接口在物联网平台查询策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDevicePoliciesResponse> listDevicePolicies(
        ListDevicePoliciesRequest &request
    );
    // 查询设备策略详情
    //
    // 应用服务器可调用此接口在物联网平台查询指定策略ID的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDevicePolicyResponse> showDevicePolicy(
        ShowDevicePolicyRequest &request
    );
    // 查询设备策略绑定的目标列表
    //
    // 应用服务器可调用此接口在物联网平台上查询指定策略ID下绑定的目标列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTargetsInDevicePolicyResponse> showTargetsInDevicePolicy(
        ShowTargetsInDevicePolicyRequest &request
    );
    // 解绑设备策略
    //
    // 应用服务器可调用此接口在物联网平台上解除指定策略下绑定的目标对象。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindDevicePolicyResponse> unbindDevicePolicy(
        UnbindDevicePolicyRequest &request
    );
    // 更新设备策略信息
    //
    // 应用服务器可调用此接口在物联网平台更新策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDevicePolicyResponse> updateDevicePolicy(
        UpdateDevicePolicyRequest &request
    );

    // 创建产品
    //
    // 应用服务器可调用此接口创建产品。此接口仅创建了产品，没有创建和安装插件，如果需要对数据进行编解码，还需要在平台开发和安装插件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProductResponse> createProduct(
        CreateProductRequest &request
    );
    // 删除产品
    //
    // 应用服务器可调用此接口删除已导入物联网平台的指定产品模型。此接口仅删除了产品，未删除关联的插件，在产品下存在设备时，该产品不允许删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProductResponse> deleteProduct(
        DeleteProductRequest &request
    );
    // 查询产品列表
    //
    // 应用服务器可调用此接口查询已导入物联网平台的产品模型信息列表，了解产品模型的概要信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProductsResponse> listProducts(
        ListProductsRequest &request
    );
    // 查询产品
    //
    // 应用服务器可调用此接口查询已导入物联网平台的指定产品模型详细信息，包括产品模型的服务、属性、命令等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProductResponse> showProduct(
        ShowProductRequest &request
    );
    // 修改产品
    //
    // 应用服务器可调用此接口修改已导入物联网平台的指定产品模型，包括产品模型的服务、属性、命令等。此接口仅修改了产品，未修改和安装插件，如果修改了产品中的service定义，且在平台中有对应的插件，请修改并重新安装插件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProductResponse> updateProduct(
        UpdateProductRequest &request
    );

    // 查询设备属性
    //
    // 设备的产品模型中定义了物联网平台可向设备下发的属性，应用服务器可调用此接口向设备发送指令用以查询设备的实时属性, 并由设备将属性查询的结果同步返回给应用服务器。
    // 注意：此接口适用于MQTT设备，暂不支持NB-IoT设备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPropertiesResponse> listProperties(
        ListPropertiesRequest &request
    );
    // 修改设备属性
    //
    // 设备的产品模型中定义了物联网平台可向设备下发的属性，应用服务器可调用此接口向指定设备下发属性。平台负责将属性以同步方式发送给设备，并将设备执行属性结果同步返回。
    // 注意：此接口适用于MQTT设备，暂不支持NB-IoT设备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePropertiesResponse> updateProperties(
        UpdatePropertiesRequest &request
    );

    // 创建预调配模板
    //
    // 应用服务器可调用此接口在物联网平台创建一个预调配模板。用户的设备未在平台注册时，可以通过预调配模板在设备首次接入物联网平台时将设备信息自动注册到物联网平台。
    // - 该预调配模板至少需要绑定到一个设备CA证书下才能生效。
    // - 一个实例最多可有10个预调配模板。
    // - 仅标准版实例、企业版实例支持该接口调用，基础版不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProvisioningTemplateResponse> createProvisioningTemplate(
        CreateProvisioningTemplateRequest &request
    );
    // 删除预调配模板
    //
    // 应用服务器可调用此接口在物联网平台上删除指定预调配模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProvisioningTemplateResponse> deleteProvisioningTemplate(
        DeleteProvisioningTemplateRequest &request
    );
    // 查询预调配模板列表
    //
    // 应用服务器可调用此接口在物联网平台查询预调配模板列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProvisioningTemplatesResponse> listProvisioningTemplates(
        ListProvisioningTemplatesRequest &request
    );
    // 查询预调配模板详情
    //
    // 应用服务器可调用此接口在物联网平台查询指定预调配模板ID的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProvisioningTemplateResponse> showProvisioningTemplate(
        ShowProvisioningTemplateRequest &request
    );
    // 更新指定id的预调配模板信息
    //
    // 应用服务器可调用此接口在物联网平台更新指定id的预调配模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProvisioningTemplateResponse> updateProvisioningTemplate(
        UpdateProvisioningTemplateRequest &request
    );

    // 创建规则触发条件
    //
    // 应用服务器可调用此接口在物联网平台创建一条规则触发条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRoutingRuleResponse> createRoutingRule(
        CreateRoutingRuleRequest &request
    );
    // 创建规则动作
    //
    // 应用服务器可调用此接口在物联网平台创建一条规则动作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRuleActionResponse> createRuleAction(
        CreateRuleActionRequest &request
    );
    // 删除规则触发条件
    //
    // 应用服务器可调用此接口删除物联网平台中的指定规则条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRoutingRuleResponse> deleteRoutingRule(
        DeleteRoutingRuleRequest &request
    );
    // 删除规则动作
    //
    // 应用服务器可调用此接口删除物联网平台中的指定规则动作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRuleActionResponse> deleteRuleAction(
        DeleteRuleActionRequest &request
    );
    // 查询规则条件列表
    //
    // 应用服务器可调用此接口查询物联网平台中设置的规则条件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRoutingRulesResponse> listRoutingRules(
        ListRoutingRulesRequest &request
    );
    // 查询规则动作列表
    //
    // 应用服务器可调用此接口查询物联网平台中设置的规则动作列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleActionsResponse> listRuleActions(
        ListRuleActionsRequest &request
    );
    // 查询规则条件
    //
    // 应用服务器可调用此接口查询物联网平台中指定规则条件的配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRoutingRuleResponse> showRoutingRule(
        ShowRoutingRuleRequest &request
    );
    // 查询规则动作
    //
    // 应用服务器可调用此接口查询物联网平台中指定规则动作的配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRuleActionResponse> showRuleAction(
        ShowRuleActionRequest &request
    );
    // 修改规则触发条件
    //
    // 应用服务器可调用此接口修改物联网平台中指定规则条件的配置参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRoutingRuleResponse> updateRoutingRule(
        UpdateRoutingRuleRequest &request
    );
    // 修改规则动作
    //
    // 应用服务器可调用此接口修改物联网平台中指定规则动作的配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRuleActionResponse> updateRuleAction(
        UpdateRuleActionRequest &request
    );

    // 修改规则状态
    //
    // 应用服务器可调用此接口修改物联网平台中指定规则的状态，激活或者去激活规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeRuleStatusResponse> changeRuleStatus(
        ChangeRuleStatusRequest &request
    );
    // 创建规则
    //
    // 应用服务器可调用此接口在物联网平台创建一条规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRuleResponse> createRule(
        CreateRuleRequest &request
    );
    // 删除规则
    //
    // 应用服务器可调用此接口删除物联网平台中的指定规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRuleResponse> deleteRule(
        DeleteRuleRequest &request
    );
    // 查询规则列表
    //
    // 应用服务器可调用此接口查询物联网平台中设置的规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRulesResponse> listRules(
        ListRulesRequest &request
    );
    // 查询规则
    //
    // 应用服务器可调用此接口查询物联网平台中指定规则的配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRuleResponse> showRule(
        ShowRuleRequest &request
    );
    // 修改规则
    //
    // 应用服务器可调用此接口修改物联网平台中指定规则的配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRuleResponse> updateRule(
        UpdateRuleRequest &request
    );

    // 创建或更新安全态势感知配置
    //
    // #### 接口说明
    // 应用服务器调用该接口创建安全态势感知配置。
    // #### 限制
    // #### 目前支持的安全配置项有：
    // 
    // | 配置名              | 默认告警级别 |   默认安全级别   | 设备维度 | 平台检测/设备上报 | 配置结构体   | 说明        |
    // | :------------------ | :----------- | :--------------- | :------- | :---------------- | :----------------- | :-----------|
    // | DEVICE_MEMORY_CHECK | CRITICAL  | ADVANCE_SECURITY | 是       | 设备上报          | [{\&quot;key\&quot;:\&quot;memory_threshold\&quot;,\&quot;value\&quot;:80},{\&quot;key\&quot;:\&quot;report_period\&quot;,\&quot;value\&quot;:1}] | 设备内存泄漏检测，report_period：上报周期单位(小时) 取值范围[1, 24]；memory_threshold内存检测阈值百分比，取值范围：[1, 100] |
    // | DEVICE_PORT_CHECK   | CRITICAL     | ADVANCE_SECURITY | 是       | 设备上报          | [{\&quot;key\&quot;:\&quot;safety_ports\&quot;,\&quot;value\&quot;:[80,8080]},{\&quot;key\&quot;:\&quot;report_period\&quot;,\&quot;value\&quot;:1}] | 设备异常端口检测，report_period：上报周期单位(小时) 取值范围[1, 24]；safety_ports：安全端口白名单，数组，取值范围:[1, 65535] |
    // | DEVICE_CPU_USAGE_CHECK | CRITICAL  | ADVANCE_SECURITY | 是       | 设备上报          | [{\&quot;key\&quot;:\&quot;cpu_usage_threshold\&quot;,\&quot;value\&quot;:80},{\&quot;key\&quot;:\&quot;report_period\&quot;,\&quot;value\&quot;:1}] | 设备CPU使用率检测，report_period：上报周期单位(小时) 取值范围[1, 24]；cpu_usage_threshold：CPU检测阈值百分比，取值范围：[1, 100] |
    // | DEVICE_DISK_SPACE_CHECK | CRITICAL  | ADVANCE_SECURITY | 是       | 设备上报          | [{\&quot;key\&quot;:\&quot;disk_space_threshold\&quot;,\&quot;value\&quot;:80},{\&quot;key\&quot;:\&quot;report_period\&quot;,\&quot;value\&quot;:1}] | 设备磁盘使用率检测，report_period：上报周期单位(小时) 取值范围[1, 24]；disk_space_threshold：磁盘检测阈值百分比，取值范围：[1, 100] |
    // | DEVICE_BATTERY_PERCENTAGE_CHECK | CRITICAL  | ADVANCE_SECURITY | 是       | 设备上报          | [{\&quot;key\&quot;:\&quot;battery_percentage_threshold\&quot;,\&quot;value\&quot;:20},{\&quot;key\&quot;:\&quot;report_period\&quot;,\&quot;value\&quot;:1}] | 设备电池电量检测，report_period：上报周期单位(小时) 取值范围[1, 24]；battery_percentage_threshold：电池检测阈值百分比，取值范围：[1, 100] |
    // | DEVICE_LOGIN_LOCAL_CHECK | MINOR  | BASIC_SECURITY | 是       | 设备上报          | NA | 设备本地登录检测 |
    // | DEVICE_MALICIOUS_IP_CHECK | MINOR  | BASIC_SECURITY | 是       | 设备上报          | {\&quot;key\&quot;:\&quot;safety_ips\&quot;,\&quot;value\&quot;:[\&quot;192.168.0.0/16\&quot;]} | 设备恶意ip检测 |
    // | DEVICE_LOGIN_BRUTE_FORCE_CHECK | MINOR  | BASIC_SECURITY | 是       | 设备上报          | NA | 设备暴力破解登录检测 |
    // | DEVICE_FILE_TAMPER_CHECK | MINOR  | BASIC_SECURITY | 是       | 设备上报          | NA | 设备本地文件篡改检测 |
    // | INSECURE_TLS_PROTOCOL_CHECK | MAJOR  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备使用不安全的TLS协议接入检测 |
    // | INSECURE_CIPHER_SUITE_CHECK | MAJOR  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备使用不安全TLS加密套件接入检测 |
    // | CONNECT_MULTIPLE_TIMES_CHECK | CRITICAL  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备单位时间内多次建链检测 |
    // | SECRET_COMPLEXITY_CHECK | MAJOR  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备弱密码检测 |
    // | TLS_CONNECT_CHECK | MINOR  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备是否使用TLS加密通讯协议检测 |
    // | DEVICE_AUTH_FAIL_CHECK | CRITICAL  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备鉴权失败检测 |
    // | DEVICE_OFFLINE_CHECK | CRITICAL  | ULTIMATE_SECURITY | 是       | 平台检测          | NA | 设备异常离线检测 |
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecurityProfileResponse> createSecurityProfile(
        CreateSecurityProfileRequest &request
    );
    // 删除某个具体id的安全态势感知配置信息
    //
    // 应用服务器可调用此接口删除某个具体id的安全态势感知配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecurityProfileResponse> deleteSecurityProfile(
        DeleteSecurityProfileRequest &request
    );
    // 查询安全态势感知配置信息列表
    //
    // 接口说明：应用服务器调用该接口查询安全态势感知配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecurityProfilesResponse> listSecurityProfiles(
        ListSecurityProfilesRequest &request
    );
    // 查询某个具体id的安全态势感知配置详情
    //
    // 应用服务器可调用此接口查询某个具体id的安全态势感知配置详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecurityProfileResponse> showSecurityProfile(
        ShowSecurityProfileRequest &request
    );
    // 更新某个具体id的安全态势感知配置信息
    //
    // 应用服务器可调用此接口更新某个具体id的安全态势感知配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSecurityProfileResponse> updateSecurityProfile(
        UpdateSecurityProfileRequest &request
    );

    // 添加服务器证书
    //
    // 应用服务器可调用此接口在物联网平台上添加服务器证书，服务器证书配额限制为：2个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateServerCertificateResponse> createServerCertificate(
        CreateServerCertificateRequest &request
    );
    // 删除服务端证书
    //
    // 应用服务器可调用此接口在物联网平台删除服务器证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerCertificateResponse> deleteServerCertificate(
        DeleteServerCertificateRequest &request
    );
    // 获取服务器证书列表
    //
    // 应用服务器可调用此接口在物联网平台上获取服务器证书列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServerCertificateResponse> listServerCertificate(
        ListServerCertificateRequest &request
    );
    // 查询服务器证书
    //
    // 应用服务器可调用此接口在物联网平台查询服务器证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerCertificateResponse> showServerCertificate(
        ShowServerCertificateRequest &request
    );

    // 按标签查询资源
    //
    // 应用服务器可调用此接口查询绑定了指定标签的资源。当前支持标签的资源有Device(设备)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourcesByTagsResponse> listResourcesByTags(
        ListResourcesByTagsRequest &request
    );
    // 绑定标签
    //
    // 应用服务器可调用此接口为指定资源绑定标签。当前支持标签的资源有Device(设备)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<TagDeviceResponse> tagDevice(
        TagDeviceRequest &request
    );
    // 解绑标签
    //
    // 应用服务器可调用此接口为指定资源解绑标签。当前支持标签的资源有Device(设备)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UntagDeviceResponse> untagDevice(
        UntagDeviceRequest &request
    );

    // 创建设备隧道
    //
    // 用户可以通过该接口创建隧道（WebSocket协议），应用服务器和设备可以通过该隧道进行数据传输。
    // 
    // - 该API接口在基础版不支持。
    // - 该API调用后平台会向对应的MQTT/MQTTS设备下发隧道地址及密钥，同时给应用服务器也返回隧道地址及密钥，设备可以通过该地址及密钥创建WebSocket协议连接。
    // - 一个设备无法创建多个隧道。
    // - 具体应用可见“设备远程登录”功能，请参见[[设备远程登录](https://support.huaweicloud.com/usermanual-iothub/iot_01_00301.html)](tag:hws)[[设备远程登录](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_00301.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTunnelResponse> addTunnel(
        AddTunnelRequest &request
    );
    // 关闭设备隧道
    //
    // 应用服务器可通过该接口关闭某个设备隧道。关闭后可以再次连接。
    // - 该API接口在基础版不支持。
    // - 具体应用可见“设备远程登录”功能，请参见[[设备远程登录](https://support.huaweicloud.com/usermanual-iothub/iot_01_00301.html)](tag:hws)[[设备远程登录](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_00301.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CloseDeviceTunnelResponse> closeDeviceTunnel(
        CloseDeviceTunnelRequest &request
    );
    // 删除设备隧道
    //
    // 用户可通过该接口删除某个设备隧道。删除后该通道不存在，无法再次连接。
    // - 该API接口在基础版不支持。
    // - 具体应用可见“设备远程登录”功能，请参见[[设备远程登录](https://support.huaweicloud.com/usermanual-iothub/iot_01_00301.html)](tag:hws)[[设备远程登录](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_00301.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeviceTunnelResponse> deleteDeviceTunnel(
        DeleteDeviceTunnelRequest &request
    );
    // 查询设备所有隧道
    //
    // 用户可通过该接口查询某项目下的所有设备隧道，以实现对设备管理。应用服务器可通过此接口向平台查询设备隧道建立的情况。
    // - 该API接口在基础版不支持。
    // - 具体应用可见“设备远程登录”功能，请参见[[设备远程登录](https://support.huaweicloud.com/usermanual-iothub/iot_01_00301.html)](tag:hws)[[设备远程登录](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_00301.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDeviceTunnelsResponse> listDeviceTunnels(
        ListDeviceTunnelsRequest &request
    );
    // 查询设备隧道
    //
    // 用户可通过该接口查询某项目中的某个设备隧道，查看该设备隧道的信息与连接情况。应用服务器可调用此接口向平台查询设备隧道建立情况。
    // - 该API接口在基础版不支持。
    // - 具体应用可见“设备远程登录”功能，请参见[[设备远程登录](https://support.huaweicloud.com/usermanual-iothub/iot_01_00301.html)](tag:hws)[[设备远程登录](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_00301.html)](tag:hws_hk)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeviceTunnelResponse> showDeviceTunnel(
        ShowDeviceTunnelRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_IOTDA_V5_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Iotda::V5::IoTDAClient>;

#endif // HUAWEICLOUD_SDK_IOTDA_V5_IoTDAClient_H_

