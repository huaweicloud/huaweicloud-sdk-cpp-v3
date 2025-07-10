
#include <huaweicloud/rgc/v1/RgcMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef RgcMeta::genRequestDefForCreateBestPracticeDetect() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowBestPracticeDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowBestPracticeOverview() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowBestPracticeStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForDisableControl() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForEnableControl() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListConfigRuleCompliances() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListControlViolations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrganizationalUnitId")
                  .withJsonTag("organizational_unit_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListControls() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListControlsForAccount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListControlsForOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListDriftDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListEnabledControls() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListExternalConfigRuleCompliances() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowComplianceStatusForAccount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ControlId")
                  .withJsonTag("control_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowComplianceStatusForOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ControlId")
                  .withJsonTag("control_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowControl() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowControlOperate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowControlsForAccount() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowControlsForOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForCheckLaunch() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForDeleteLandingZone() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForSetupLandingZone() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowAvailableUpdates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowHomeRegion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowLandingZoneConfiguration() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowLandingZoneIdentityCenter() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowLandingZoneStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForCreateAccount() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForCreateManagedOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForDeleteManagedOrganizationalUnits() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForDeregisterOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForEnrollAccount() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListManagedAccounts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ControlId")
                  .withJsonTag("control_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListManagedAccountsForParent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListManagedOrganizationalUnits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ControlId")
                  .withJsonTag("control_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListOperation() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrganizationalUnitId")
                  .withJsonTag("organizational_unit_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForReRegisterOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForRegisterOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowManagedAccount() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowManagedAccountTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowManagedCoreAccount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("account_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowManagedOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowOperation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForUnEnrollAccount() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForUpdateManagedAccount() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForCreateTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForDeleteTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForListPredefinedTemplates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowTemplateDeployParams() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Version")
                  .withJsonTag("version")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}

