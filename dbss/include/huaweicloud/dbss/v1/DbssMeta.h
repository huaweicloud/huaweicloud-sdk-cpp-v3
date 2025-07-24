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
    static HttpRequestDef genRequestDefForAddAuditDatabase();
    static HttpRequestDef genRequestDefForAddRdsDatabase();
    static HttpRequestDef genRequestDefForAddRdsNoAgentDatabase();
    static HttpRequestDef genRequestDefForCreateInstancesPeriodOrder();
    static HttpRequestDef genRequestDefForDeleteAuditDatabase();
    static HttpRequestDef genRequestDefForDeleteInstances();
    static HttpRequestDef genRequestDefForListAlarmTopicConfigInfo();
    static HttpRequestDef genRequestDefForListAuditAlarmLog();
    static HttpRequestDef genRequestDefForListAuditDatabases();
    static HttpRequestDef genRequestDefForListAuditInstanceJobs();
    static HttpRequestDef genRequestDefForListAuditInstances();
    static HttpRequestDef genRequestDefForListAuditOperateLogs();
    static HttpRequestDef genRequestDefForListAuditRuleRisks();
    static HttpRequestDef genRequestDefForListAuditRuleScopes();
    static HttpRequestDef genRequestDefForListAuditSensitiveMasks();
    static HttpRequestDef genRequestDefForListAuditSqls();
    static HttpRequestDef genRequestDefForListAuditSummaryInfos();
    static HttpRequestDef genRequestDefForListAvailabilityZoneInfos();
    static HttpRequestDef genRequestDefForListEcsSpecification();
    static HttpRequestDef genRequestDefForListRdsDatabases();
    static HttpRequestDef genRequestDefForListSqlInjectionRules();
    static HttpRequestDef genRequestDefForRebootAuditInstance();
    static HttpRequestDef genRequestDefForSetAlarmTopicConfigInfo();
    static HttpRequestDef genRequestDefForShowAuditQuota();
    static HttpRequestDef genRequestDefForShowAuditRuleRisk();
    static HttpRequestDef genRequestDefForStartAuditInstance();
    static HttpRequestDef genRequestDefForStopAuditInstance();
    static HttpRequestDef genRequestDefForSwitchAuditDatabase();
    static HttpRequestDef genRequestDefForSwitchRiskRule();
    static HttpRequestDef genRequestDefForUpdateAuditInstance();
    static HttpRequestDef genRequestDefForUpdateAuditSecurityGroup();
    static HttpRequestDef genRequestDefForAddAuditAgent();
    static HttpRequestDef genRequestDefForDeleteAuditAgent();
    static HttpRequestDef genRequestDefForDownloadAuditAgent();
    static HttpRequestDef genRequestDefForListAuditAgent();
    static HttpRequestDef genRequestDefForSwitchAgent();
    static HttpRequestDef genRequestDefForBatchAddResourceTag();
    static HttpRequestDef genRequestDefForBatchDeleteResourceTag();
    static HttpRequestDef genRequestDefForCountResourceInstanceByTag();
    static HttpRequestDef genRequestDefForListProjectResourceTags();
    static HttpRequestDef genRequestDefForListResourceInstanceByTag();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_DbssMeta_H_
