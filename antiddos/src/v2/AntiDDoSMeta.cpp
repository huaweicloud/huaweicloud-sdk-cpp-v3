
#include <huaweicloud/antiddos/v2/AntiDDoSMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef AntiDDoSMeta::genRequestDefForShowAlertConfig() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("Ips")
                  .withJsonTag("ips")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForListNewConfigs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef AntiDDoSMeta::genRequestDefForShowNewTaskStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}

