
#include <huaweicloud/iotdm/v5/IoTDMMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IoTDMMeta::genRequestDefForListInstanceFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceType")
                  .withJsonTag("instance_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForBindInstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForChangeInstanceChargeMode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForCreateInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForDeleteInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForListInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceType")
                  .withJsonTag("instance_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForResizeInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForShowInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForUnbindInstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForUpdateInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForListInstanceTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForRetryInstanceTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef IoTDMMeta::genRequestDefForShowInstanceTask() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

