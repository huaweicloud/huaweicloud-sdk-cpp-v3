#ifndef HUAWEICLOUD_SDK_DBSS_V1_DbssMeta_H_
#define HUAWEICLOUD_SDK_DBSS_V1_DbssMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/dbss/v1/DbssExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_DBSS_V1_EXPORT  DbssMeta {
public:
    static HttpRequestDef genRequestDefForAddRdsNoAgentDatabase();
    static HttpRequestDef genRequestDefForBatchAddResourceTag();
    static HttpRequestDef genRequestDefForBatchDeleteResourceTag();
    static HttpRequestDef genRequestDefForCountResourceInstanceByTag();
    static HttpRequestDef genRequestDefForCreateInstancesPeriodOrder();
    static HttpRequestDef genRequestDefForListAuditDatabases();
    static HttpRequestDef genRequestDefForListAuditInstanceJobs();
    static HttpRequestDef genRequestDefForListAuditInstances();
    static HttpRequestDef genRequestDefForListAuditOperateLogs();
    static HttpRequestDef genRequestDefForListAuditRuleRisks();
    static HttpRequestDef genRequestDefForListAuditRuleScopes();
    static HttpRequestDef genRequestDefForListAuditSensitiveMasks();
    static HttpRequestDef genRequestDefForListAvailabilityZoneInfos();
    static HttpRequestDef genRequestDefForListEcsSpecification();
    static HttpRequestDef genRequestDefForListProjectResourceTags();
    static HttpRequestDef genRequestDefForListResourceInstanceByTag();
    static HttpRequestDef genRequestDefForListSqlInjectionRules();
    static HttpRequestDef genRequestDefForShowAuditQuota();
    static HttpRequestDef genRequestDefForShowAuditRuleRisk();
    static HttpRequestDef genRequestDefForSwitchAgent();
    static HttpRequestDef genRequestDefForSwitchRiskRule();
    static HttpRequestDef genRequestDefForUpdateAuditSecurityGroup();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_DbssMeta_H_
