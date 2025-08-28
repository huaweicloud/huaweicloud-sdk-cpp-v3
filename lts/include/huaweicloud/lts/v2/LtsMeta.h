#ifndef HUAWEICLOUD_SDK_LTS_V2_LtsMeta_H_
#define HUAWEICLOUD_SDK_LTS_V2_LtsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/lts/v2/LtsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_LTS_V2_EXPORT  LtsMeta {
public:
    static HttpRequestDef genRequestDefForCreateAccessConfig();
    static HttpRequestDef genRequestDefForCreateAgencyAccess();
    static HttpRequestDef genRequestDefForCreateDashBoard();
    static HttpRequestDef genRequestDefForCreateDashboardGroup();
    static HttpRequestDef genRequestDefForCreateHostGroup();
    static HttpRequestDef genRequestDefForCreateKeywordsAlarmRule();
    static HttpRequestDef genRequestDefForCreateLogDumpObs();
    static HttpRequestDef genRequestDefForCreateLogGroup();
    static HttpRequestDef genRequestDefForCreateLogStream();
    static HttpRequestDef genRequestDefForCreateLogStreamIndex();
    static HttpRequestDef genRequestDefForCreateNotificationTemplate();
    static HttpRequestDef genRequestDefForCreateSearchCriterias();
    static HttpRequestDef genRequestDefForCreateStructConfig();
    static HttpRequestDef genRequestDefForCreateStructTemplate();
    static HttpRequestDef genRequestDefForCreateTags();
    static HttpRequestDef genRequestDefForCreateTransfer();
    static HttpRequestDef genRequestDefForCreatefavorite();
    static HttpRequestDef genRequestDefForDeleteAccessConfig();
    static HttpRequestDef genRequestDefForDeleteActiveAlarms();
    static HttpRequestDef genRequestDefForDeleteDashboard();
    static HttpRequestDef genRequestDefForDeleteHostGroup();
    static HttpRequestDef genRequestDefForDeleteKeywordsAlarmRule();
    static HttpRequestDef genRequestDefForDeleteLogGroup();
    static HttpRequestDef genRequestDefForDeleteLogStream();
    static HttpRequestDef genRequestDefForDeleteNotificationTemplate();
    static HttpRequestDef genRequestDefForDeleteSearchCriterias();
    static HttpRequestDef genRequestDefForDeleteStructTemplate();
    static HttpRequestDef genRequestDefForDeleteTransfer();
    static HttpRequestDef genRequestDefForDeletefavorite();
    static HttpRequestDef genRequestDefForDisableLogCollection();
    static HttpRequestDef genRequestDefForEnableLogCollection();
    static HttpRequestDef genRequestDefForListAccessConfig();
    static HttpRequestDef genRequestDefForListActiveOrHistoryAlarms();
    static HttpRequestDef genRequestDefForListBreifStructTemplate();
    static HttpRequestDef genRequestDefForListCharts();
    static HttpRequestDef genRequestDefForListCriterias();
    static HttpRequestDef genRequestDefForListHistorySql();
    static HttpRequestDef genRequestDefForListHost();
    static HttpRequestDef genRequestDefForListHostGroup();
    static HttpRequestDef genRequestDefForListKeywordsAlarmRules();
    static HttpRequestDef genRequestDefForListLogContext();
    static HttpRequestDef genRequestDefForListLogGroups();
    static HttpRequestDef genRequestDefForListLogHistogram();
    static HttpRequestDef genRequestDefForListLogStream();
    static HttpRequestDef genRequestDefForListLogStreamIndex();
    static HttpRequestDef genRequestDefForListLogStreams();
    static HttpRequestDef genRequestDefForListLogs();
    static HttpRequestDef genRequestDefForListNotificationTemplate();
    static HttpRequestDef genRequestDefForListNotificationTemplates();
    static HttpRequestDef genRequestDefForListNotificationTopics();
    static HttpRequestDef genRequestDefForListQueryAllSearchCriterias();
    static HttpRequestDef genRequestDefForListQueryStructuredLogs();
    static HttpRequestDef genRequestDefForListStructTemplate();
    static HttpRequestDef genRequestDefForListStructuredLogsWithTimeRange();
    static HttpRequestDef genRequestDefForListTimeLineTrafficStatistics();
    static HttpRequestDef genRequestDefForListTopnTrafficStatistics();
    static HttpRequestDef genRequestDefForListTransfers();
    static HttpRequestDef genRequestDefForRegisterDmsKafkaInstance();
    static HttpRequestDef genRequestDefForShowAdminConfig();
    static HttpRequestDef genRequestDefForShowLogConvergeConfig();
    static HttpRequestDef genRequestDefForShowMemberGroupAndStream();
    static HttpRequestDef genRequestDefForShowNotificationTemplate();
    static HttpRequestDef genRequestDefForShowStructTemplate();
    static HttpRequestDef genRequestDefForUpdateAccessConfig();
    static HttpRequestDef genRequestDefForUpdateHostGroup();
    static HttpRequestDef genRequestDefForUpdateKeywordsAlarmRule();
    static HttpRequestDef genRequestDefForUpdateLogConvergeConfig();
    static HttpRequestDef genRequestDefForUpdateLogGroup();
    static HttpRequestDef genRequestDefForUpdateLogStream();
    static HttpRequestDef genRequestDefForUpdateNotificationTemplate();
    static HttpRequestDef genRequestDefForUpdateStructConfig();
    static HttpRequestDef genRequestDefForUpdateStructTemplate();
    static HttpRequestDef genRequestDefForUpdateSwitch();
    static HttpRequestDef genRequestDefForUpdateTransfer();
    static HttpRequestDef genRequestDefForCreateAomMappingRules();
    static HttpRequestDef genRequestDefForDeleteAomMappingRules();
    static HttpRequestDef genRequestDefForShowAomMappingRule();
    static HttpRequestDef genRequestDefForShowAomMappingRules();
    static HttpRequestDef genRequestDefForUpdateAomMappingRules();
    static HttpRequestDef genRequestDefForConsumerGroupHeartBeat();
    static HttpRequestDef genRequestDefForCreateConsumerGroup();
    static HttpRequestDef genRequestDefForDeleteConsumerGroup();
    static HttpRequestDef genRequestDefForListConsumerGroup();
    static HttpRequestDef genRequestDefForListDetailsConsumerGroup();
    static HttpRequestDef genRequestDefForShowCursorByTime();
    static HttpRequestDef genRequestDefForShowCursorTime();
    static HttpRequestDef genRequestDefForShowLogStreamShards();
    static HttpRequestDef genRequestDefForUpdateCheckPoint();
    static HttpRequestDef genRequestDefForCreateSqlAlarmRule();
    static HttpRequestDef genRequestDefForDeleteSqlAlarmRule();
    static HttpRequestDef genRequestDefForListSqlAlarmRules();
    static HttpRequestDef genRequestDefForUpdateAlarmRuleStatus();
    static HttpRequestDef genRequestDefForUpdateSqlAlarmRule();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_LtsMeta_H_
