#ifndef HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_
#define HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/rgc/v1/RgcExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_RGC_V1_EXPORT  RgcMeta {
public:
    static HttpRequestDef genRequestDefForCreateBestPracticeDetect();
    static HttpRequestDef genRequestDefForShowBestPracticeAccountInfo();
    static HttpRequestDef genRequestDefForShowBestPracticeDetails();
    static HttpRequestDef genRequestDefForShowBestPracticeOverview();
    static HttpRequestDef genRequestDefForShowBestPracticeStatus();
    static HttpRequestDef genRequestDefForDisableControl();
    static HttpRequestDef genRequestDefForEnableControl();
    static HttpRequestDef genRequestDefForListConfigRuleCompliances();
    static HttpRequestDef genRequestDefForListControlViolations();
    static HttpRequestDef genRequestDefForListControls();
    static HttpRequestDef genRequestDefForListControlsForAccount();
    static HttpRequestDef genRequestDefForListControlsForOrganizationalUnit();
    static HttpRequestDef genRequestDefForListDriftDetails();
    static HttpRequestDef genRequestDefForListEnabledControls();
    static HttpRequestDef genRequestDefForListExternalConfigRuleCompliances();
    static HttpRequestDef genRequestDefForShowComplianceStatusForAccount();
    static HttpRequestDef genRequestDefForShowComplianceStatusForOrganizationalUnit();
    static HttpRequestDef genRequestDefForShowControl();
    static HttpRequestDef genRequestDefForShowControlOperate();
    static HttpRequestDef genRequestDefForShowControlsForAccount();
    static HttpRequestDef genRequestDefForShowControlsForOrganizationalUnit();
    static HttpRequestDef genRequestDefForCheckLaunch();
    static HttpRequestDef genRequestDefForDeleteLandingZone();
    static HttpRequestDef genRequestDefForSetupLandingZone();
    static HttpRequestDef genRequestDefForShowAvailableUpdates();
    static HttpRequestDef genRequestDefForShowHomeRegion();
    static HttpRequestDef genRequestDefForShowLandingZoneConfiguration();
    static HttpRequestDef genRequestDefForShowLandingZoneIdentityCenter();
    static HttpRequestDef genRequestDefForShowLandingZoneStatus();
    static HttpRequestDef genRequestDefForCreateAccount();
    static HttpRequestDef genRequestDefForCreateManagedOrganizationalUnit();
    static HttpRequestDef genRequestDefForDeleteManagedOrganizationalUnits();
    static HttpRequestDef genRequestDefForDeregisterOrganizationalUnit();
    static HttpRequestDef genRequestDefForEnrollAccount();
    static HttpRequestDef genRequestDefForListManagedAccounts();
    static HttpRequestDef genRequestDefForListManagedAccountsForParent();
    static HttpRequestDef genRequestDefForListManagedOrganizationalUnits();
    static HttpRequestDef genRequestDefForListOperation();
    static HttpRequestDef genRequestDefForReRegisterOrganizationalUnit();
    static HttpRequestDef genRequestDefForRegisterOrganizationalUnit();
    static HttpRequestDef genRequestDefForShowManagedAccount();
    static HttpRequestDef genRequestDefForShowManagedAccountTemplate();
    static HttpRequestDef genRequestDefForShowManagedCoreAccount();
    static HttpRequestDef genRequestDefForShowManagedOrganizationalUnit();
    static HttpRequestDef genRequestDefForShowOperation();
    static HttpRequestDef genRequestDefForUnEnrollAccount();
    static HttpRequestDef genRequestDefForUpdateManagedAccount();
    static HttpRequestDef genRequestDefForCreateTemplate();
    static HttpRequestDef genRequestDefForDeleteTemplate();
    static HttpRequestDef genRequestDefForListPredefinedTemplates();
    static HttpRequestDef genRequestDefForShowTemplateDeployParams();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_
