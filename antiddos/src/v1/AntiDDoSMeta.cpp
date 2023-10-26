
#include <huaweicloud/antiddos/v1/AntiDDoSMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef AntiDDoSMeta::genRequestDefForCreateDefaultConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForDeleteDefaultConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowAlertConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowDefaultConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForUpdateAlertConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListDDosStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListDailyLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListDailyReport() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListNewConfigs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListWeeklyReports() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PeriodStartDate")
                  .withJsonTag("period_start_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowDDos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowDDosStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowNewTaskStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForUpdateDDos() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
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

