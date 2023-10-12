
#include <huaweicloud/eps/v1/EpsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef EpsMeta::genRequestDefForCreateEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForDisableEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForEnableEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForListApiVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForListEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForListProviders() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Locale")
                  .withJsonTag("locale")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Provider")
                  .withJsonTag("provider")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForMigrateResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForShowApiVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForShowEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForShowEnterpriseProjectQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForShowResourceBindEnterpriseProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EpsMeta::genRequestDefForUpdateEnterpriseProject() {
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

