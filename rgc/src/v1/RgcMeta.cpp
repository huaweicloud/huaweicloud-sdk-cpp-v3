
#include <huaweicloud/rgc/v1/RgcMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

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

HttpRequestDef RgcMeta::genRequestDefForShowControlOperate() {
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

HttpRequestDef RgcMeta::genRequestDefForRegisterOrganizationalUnit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowManagedAccount() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef RgcMeta::genRequestDefForShowOperation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

