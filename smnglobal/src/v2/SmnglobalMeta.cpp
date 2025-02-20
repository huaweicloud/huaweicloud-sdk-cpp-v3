
#include <huaweicloud/smnglobal/v2/SmnglobalMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef SmnglobalMeta::genRequestDefForCreateSubscriptionUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SmnglobalMeta::genRequestDefForDeleteSubscriptionUser() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SmnglobalMeta::genRequestDefForListSubscriptionUser() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protocol")
                  .withJsonTag("protocol")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Group")
                  .withJsonTag("group")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SmnglobalMeta::genRequestDefForUpdateSubscriptionUser() {
    HttpRequestDef reqDefBuilder;
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

