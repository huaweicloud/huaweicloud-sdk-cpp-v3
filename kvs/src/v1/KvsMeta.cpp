
#include <huaweicloud/kvs/v1/KvsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef KvsMeta::genRequestDefForCreateTable() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForDescribeTable() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForListStore() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForListTable() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForBatchWriteKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForDeleteKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForGetKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForPutKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForScanKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForScanSkeyKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef KvsMeta::genRequestDefForUpdateKv() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StoreName")
                  .withJsonTag("store_name")
                  .withLocationType(Cname));
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

