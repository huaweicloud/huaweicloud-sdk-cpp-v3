
#include <huaweicloud/lts/v2/LtsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef LtsMeta::genRequestDefForCreateAccessConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateAgencyAccess() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateDashBoard() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateDashboardGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateHostGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateKeywordsAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateLogDumpObs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateLogGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateLogStream() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateLogStreamIndex() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateNotificationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateSearchCriterias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateStructConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateStructTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateTransfer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreatefavorite() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteAccessConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteActiveAlarms() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteDashboard() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsDeleteCharts")
                  .withJsonTag("is_delete_charts")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteHostGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteKeywordsAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteLogGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteLogStream() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteNotificationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteSearchCriterias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteStructTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteTransfer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogTransferId")
                  .withJsonTag("log_transfer_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeletefavorite() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDisableLogCollection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForEnableLogCollection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListAccessConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListActiveOrHistoryAlarms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListBreifStructTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListCharts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListCriterias() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SearchType")
                  .withJsonTag("search_type")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListHistorySql() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogGroupId")
                  .withJsonTag("log_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogStreamId")
                  .withJsonTag("log_stream_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListHost() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListHostGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListKeywordsAlarmRules() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogContext() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogHistogram() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogStream() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogStreams() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogGroupName")
                  .withJsonTag("log_group_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogStreamName")
                  .withJsonTag("log_stream_name")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListLogs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListNotificationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListNotificationTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListNotificationTopics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListQueryAllSearchCriterias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListQueryStructuredLogs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListStructTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListStructuredLogsWithTimeRange() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListTimeLineTrafficStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Timezone")
                  .withJsonTag("timezone")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListTopnTrafficStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListTransfers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogTransferType")
                  .withJsonTag("log_transfer_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogGroupName")
                  .withJsonTag("log_group_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogStreamName")
                  .withJsonTag("log_stream_name")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForRegisterDmsKafkaInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowAdminConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowLogConvergeConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowMemberGroupAndStream() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowNotificationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowStructTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogGroupId")
                  .withJsonTag("logGroupId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LogStreamId")
                  .withJsonTag("logStreamId")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateAccessConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateHostGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateKeywordsAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateLogConvergeConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateLogGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateLogStream() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateNotificationTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateStructConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateStructTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LogConvergeSwitch")
                  .withJsonTag("log_converge_switch")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateTransfer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateAomMappingRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IsBatch")
                  .withJsonTag("isBatch")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteAomMappingRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowAomMappingRule() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowAomMappingRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateAomMappingRules() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForConsumerGroupHeartBeat() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConsumerName")
                  .withJsonTag("consumer_name")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateConsumerGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteConsumerGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListConsumerGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListDetailsConsumerGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowCursorByTime() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowCursorTime() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Cursor")
                  .withJsonTag("cursor")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForShowLogStreamShards() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateCheckPoint() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConsumerName")
                  .withJsonTag("consumer_name")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForCreateSqlAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForDeleteSqlAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForListSqlAlarmRules() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateAlarmRuleStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef LtsMeta::genRequestDefForUpdateSqlAlarmRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
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

