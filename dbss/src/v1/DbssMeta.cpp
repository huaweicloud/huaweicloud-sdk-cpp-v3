
#include <huaweicloud/dbss/v1/DbssMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef DbssMeta::genRequestDefForAddAuditAgent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddAuditDatabase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddAuditDatabaseNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddRdsDatabase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddRdsDatabaseNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddRdsNoAgentDatabase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBatchDeleteAuditScope() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBatchSetAuditAlarmLogStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBindDbEncryptEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBindDbOmEip() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForChangeDbEncryptSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForChangeDbOmSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForConfirmUpgradeAudit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountDbAccountSession() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountDbClientSession() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountInjectionStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountOperationStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountRiskTrendStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountSessionStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountSqlStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountSqlTrendStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateAuditRiskRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateAuditScopeRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateDbEncryptInstancePeriod() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateDbOmInstancePeriod() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateInstancesPeriodOrder() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateInstancesPeriodOrderNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateReport() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateSensitiveMaskRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditAgent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DbId")
                  .withJsonTag("db_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditAlarmLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditBackupTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditDatabase() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditDatabaseNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditReport() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditRuleRisk() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditScope() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteDbEncryptInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteDbOmInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteInstances() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteInstancesNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteSensitiveRules() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDownloadAuditAgent() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDownloadAuditReport() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Local")
                  .withJsonTag("local")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAlarmTopicConfigInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAlarmTopicConfigInfoNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditAgent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DbId")
                  .withJsonTag("db_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditAlarmLog() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditAlarmLogNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditBackupInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditBackupRiskTemplates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditDatabases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditDatabasesNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditInstanceJobs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditInstanceJobsNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditInstancesNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditObsBuckets() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditOperateLogs() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditOperateLogsNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditReportTemplates() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditReports() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditRuleRisks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RiskLevels")
                  .withJsonTag("risk_levels")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditRuleRisksNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RiskLevels")
                  .withJsonTag("risk_levels")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportDbClassifyRule")
                  .withJsonTag("support_db_classify_rule")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditRuleScopes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditRuleScopesNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditSensitiveMasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditSensitiveMasksNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditSqls() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditSqlsNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditSummaryInfos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditTrendHistory() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAvailabilityZoneInfos() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAvailabilityZoneInfosNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListDbEncryptInstances() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListEcsSpecification() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListEcsSpecificationNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ImageBusinessType")
                  .withJsonTag("image_business_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListInstances() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListRdsDatabases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DbType")
                  .withJsonTag("db_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListSqlInjectionRules() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRebootAuditInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRebootAuditInstanceNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRebootDbEncryptInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRebootDbOmInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForResetDbEncryptPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForResetDbOmPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRestoreAuditBackup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForRetryAuditBackupTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAlarmTopicConfigInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAlarmTopicConfigInfoNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditAlarmLogStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditAutoBackupTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditBackupRiskSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditBackupSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditInstanceTimeZone() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditScopeRuleSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetRiskOperationPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetRiskRuleRank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetSensitiveMaskRuleSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetSensitiveResultSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetSensitiveSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditBackRiskTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditBackupStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditQuotaNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditRuleRisk() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditRuleRiskNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditStatistics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditTaskStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditTopicReportSchedulerConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowAuditUpgradeStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowBackupRiskBucketPath() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowInstanceMonitorInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowInstanceQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowSensitiveMaskSwitch() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowSensitiveResultSwitch() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowServerVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForShowSqlDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStartAuditInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStartAuditInstanceNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStartDbEncryptInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStartDbOmInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStopAuditInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStopAuditInstanceNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStopDbEncryptInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForStopDbOmInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchAgent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchAuditDatabase() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchAuditDatabaseNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchRiskRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchRiskRuleNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUnbindDbEncryptEip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUnbindDbOmEip() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditInstanceNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditRiskBucketPath() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditScopeRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditSecurityGroupNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditTaskStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditTopicReportSchedulerConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateDbEncryptInstanceName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateDbOmInstanceName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateSensitiveMaskRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUploadAuditDbConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForAddAuditAgentNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateAuditDbAgent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditAgentNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DbId")
                  .withJsonTag("db_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDownloadAuditAgentNew() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditAgentNew() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DbId")
                  .withJsonTag("db_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSwitchAgentNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBatchAddAuditWhitelist() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCreateAuditSqlRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditRuleSql() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForDeleteAuditWhitelist() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListSqlInjectionRulesNew() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListWhitelists() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetAuditSqlRuleSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForSetSqlRuleRank() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditSqlRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForUpdateAuditWhitelist() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBatchAddResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForBatchDeleteResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForCountResourceInstanceByTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListAuditTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListProjectResourceTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef DbssMeta::genRequestDefForListResourceInstanceByTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

