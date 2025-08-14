#ifndef HUAWEICLOUD_SDK_IOTDA_V5_IoTDAMeta_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_IoTDAMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/iotda/v5/IoTDAExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IOTDA_V5_EXPORT  IoTDAMeta {
public:
    static HttpRequestDef genRequestDefForCreateAccessCode();
    static HttpRequestDef genRequestDefForAddQueue();
    static HttpRequestDef genRequestDefForBatchShowQueue();
    static HttpRequestDef genRequestDefForDeleteQueue();
    static HttpRequestDef genRequestDefForShowQueue();
    static HttpRequestDef genRequestDefForAddApplication();
    static HttpRequestDef genRequestDefForDeleteApplication();
    static HttpRequestDef genRequestDefForShowApplication();
    static HttpRequestDef genRequestDefForShowApplications();
    static HttpRequestDef genRequestDefForUpdateApplication();
    static HttpRequestDef genRequestDefForCountAsyncHistoryCommands();
    static HttpRequestDef genRequestDefForCreateAsyncCommand();
    static HttpRequestDef genRequestDefForListAsyncCommands();
    static HttpRequestDef genRequestDefForListAsyncHistoryCommands();
    static HttpRequestDef genRequestDefForShowAsyncDeviceCommand();
    static HttpRequestDef genRequestDefForCreateRoutingBacklogPolicy();
    static HttpRequestDef genRequestDefForDeleteRoutingBacklogPolicy();
    static HttpRequestDef genRequestDefForListRoutingBacklogPolicy();
    static HttpRequestDef genRequestDefForShowRoutingBacklogPolicy();
    static HttpRequestDef genRequestDefForUpdateRoutingBacklogPolicy();
    static HttpRequestDef genRequestDefForCreateBatchTask();
    static HttpRequestDef genRequestDefForDeleteBatchTask();
    static HttpRequestDef genRequestDefForListBatchTasks();
    static HttpRequestDef genRequestDefForRetryBatchTask();
    static HttpRequestDef genRequestDefForShowBatchTask();
    static HttpRequestDef genRequestDefForStopBatchTask();
    static HttpRequestDef genRequestDefForDeleteBatchTaskFile();
    static HttpRequestDef genRequestDefForListBatchTaskFiles();
    static HttpRequestDef genRequestDefForAddBridge();
    static HttpRequestDef genRequestDefForDeleteBridge();
    static HttpRequestDef genRequestDefForListBridges();
    static HttpRequestDef genRequestDefForResetBridgeSecret();
    static HttpRequestDef genRequestDefForBroadcastMessage();
    static HttpRequestDef genRequestDefForAddCertificate();
    static HttpRequestDef genRequestDefForCheckCertificate();
    static HttpRequestDef genRequestDefForDeleteCertificate();
    static HttpRequestDef genRequestDefForListCertificates();
    static HttpRequestDef genRequestDefForUpdateCertificate();
    static HttpRequestDef genRequestDefForCreateCommand();
    static HttpRequestDef genRequestDefForCreateDeviceAuthorizer();
    static HttpRequestDef genRequestDefForDeleteDeviceAuthorizer();
    static HttpRequestDef genRequestDefForListDeviceAuthorizers();
    static HttpRequestDef genRequestDefForShowDeviceAuthorizer();
    static HttpRequestDef genRequestDefForUpdateDeviceAuthorizer();
    static HttpRequestDef genRequestDefForAddDeviceGroup();
    static HttpRequestDef genRequestDefForCreateOrDeleteDeviceInGroup();
    static HttpRequestDef genRequestDefForDeleteDeviceGroup();
    static HttpRequestDef genRequestDefForListDeviceGroups();
    static HttpRequestDef genRequestDefForShowDeviceGroup();
    static HttpRequestDef genRequestDefForShowDevicesInGroup();
    static HttpRequestDef genRequestDefForUpdateDeviceGroup();
    static HttpRequestDef genRequestDefForAddDevice();
    static HttpRequestDef genRequestDefForChangeGateway();
    static HttpRequestDef genRequestDefForDeleteDevice();
    static HttpRequestDef genRequestDefForFreezeDevice();
    static HttpRequestDef genRequestDefForListDeviceGroupsByDevice();
    static HttpRequestDef genRequestDefForListDevices();
    static HttpRequestDef genRequestDefForResetDeviceSecret();
    static HttpRequestDef genRequestDefForResetFingerprint();
    static HttpRequestDef genRequestDefForSearchDevices();
    static HttpRequestDef genRequestDefForShowDevice();
    static HttpRequestDef genRequestDefForUnfreezeDevice();
    static HttpRequestDef genRequestDefForUpdateDevice();
    static HttpRequestDef genRequestDefForCreateDeviceProxy();
    static HttpRequestDef genRequestDefForDeleteDeviceProxy();
    static HttpRequestDef genRequestDefForListDeviceProxies();
    static HttpRequestDef genRequestDefForShowDeviceProxy();
    static HttpRequestDef genRequestDefForUpdateDeviceProxy();
    static HttpRequestDef genRequestDefForShowDeviceShadow();
    static HttpRequestDef genRequestDefForUpdateDeviceShadowDesiredData();
    static HttpRequestDef genRequestDefForCreateRoutingFlowControlPolicy();
    static HttpRequestDef genRequestDefForDeleteRoutingFlowControlPolicy();
    static HttpRequestDef genRequestDefForListRoutingFlowControlPolicy();
    static HttpRequestDef genRequestDefForShowRoutingFlowControlPolicy();
    static HttpRequestDef genRequestDefForUpdateRoutingFlowControlPolicy();
    static HttpRequestDef genRequestDefForAddFunctions();
    static HttpRequestDef genRequestDefForDeleteFunctions();
    static HttpRequestDef genRequestDefForListFunctions();
    static HttpRequestDef genRequestDefForCreateMessage();
    static HttpRequestDef genRequestDefForDeleteDeviceMessage();
    static HttpRequestDef genRequestDefForListDeviceMessages();
    static HttpRequestDef genRequestDefForShowDeviceMessage();
    static HttpRequestDef genRequestDefForCreateOtaPackage();
    static HttpRequestDef genRequestDefForDeleteOtaPackage();
    static HttpRequestDef genRequestDefForListOtaPackageInfo();
    static HttpRequestDef genRequestDefForShowOtaPackage();
    static HttpRequestDef genRequestDefForBindDevicePolicy();
    static HttpRequestDef genRequestDefForCreateDevicePolicy();
    static HttpRequestDef genRequestDefForDeleteDevicePolicy();
    static HttpRequestDef genRequestDefForListDevicePolicies();
    static HttpRequestDef genRequestDefForShowDevicePolicy();
    static HttpRequestDef genRequestDefForShowTargetsInDevicePolicy();
    static HttpRequestDef genRequestDefForUnbindDevicePolicy();
    static HttpRequestDef genRequestDefForUpdateDevicePolicy();
    static HttpRequestDef genRequestDefForCreateProduct();
    static HttpRequestDef genRequestDefForDeleteProduct();
    static HttpRequestDef genRequestDefForListProducts();
    static HttpRequestDef genRequestDefForShowProduct();
    static HttpRequestDef genRequestDefForUpdateProduct();
    static HttpRequestDef genRequestDefForListProperties();
    static HttpRequestDef genRequestDefForUpdateProperties();
    static HttpRequestDef genRequestDefForCreateProvisioningTemplate();
    static HttpRequestDef genRequestDefForDeleteProvisioningTemplate();
    static HttpRequestDef genRequestDefForListProvisioningTemplates();
    static HttpRequestDef genRequestDefForShowProvisioningTemplate();
    static HttpRequestDef genRequestDefForUpdateProvisioningTemplate();
    static HttpRequestDef genRequestDefForCreateRoutingRule();
    static HttpRequestDef genRequestDefForCreateRuleAction();
    static HttpRequestDef genRequestDefForDeleteRoutingRule();
    static HttpRequestDef genRequestDefForDeleteRuleAction();
    static HttpRequestDef genRequestDefForListRoutingRules();
    static HttpRequestDef genRequestDefForListRuleActions();
    static HttpRequestDef genRequestDefForShowRoutingRule();
    static HttpRequestDef genRequestDefForShowRuleAction();
    static HttpRequestDef genRequestDefForUpdateRoutingRule();
    static HttpRequestDef genRequestDefForUpdateRuleAction();
    static HttpRequestDef genRequestDefForChangeRuleStatus();
    static HttpRequestDef genRequestDefForCreateRule();
    static HttpRequestDef genRequestDefForDeleteRule();
    static HttpRequestDef genRequestDefForListRules();
    static HttpRequestDef genRequestDefForShowRule();
    static HttpRequestDef genRequestDefForUpdateRule();
    static HttpRequestDef genRequestDefForListResourcesByTags();
    static HttpRequestDef genRequestDefForTagDevice();
    static HttpRequestDef genRequestDefForUntagDevice();
    static HttpRequestDef genRequestDefForAddTunnel();
    static HttpRequestDef genRequestDefForCloseDeviceTunnel();
    static HttpRequestDef genRequestDefForDeleteDeviceTunnel();
    static HttpRequestDef genRequestDefForListDeviceTunnels();
    static HttpRequestDef genRequestDefForShowDeviceTunnel();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_IoTDAMeta_H_
