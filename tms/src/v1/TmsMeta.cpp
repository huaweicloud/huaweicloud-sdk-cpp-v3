
#include <huaweicloud/tms/v1/TmsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef TmsMeta::genRequestDefForCreatePredefineTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForCreateResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForDeletePredefineTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForDeleteResourceTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListApiVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListPredefineTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Key")
                  .withJsonTag("key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Value")
                  .withJsonTag("value")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderField")
                  .withJsonTag("order_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderMethod")
                  .withJsonTag("order_method")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListProviders() {
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

HttpRequestDef TmsMeta::genRequestDefForListResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListTagKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RegionId")
                  .withJsonTag("region_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListTagValues() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RegionId")
                  .withJsonTag("region_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Key")
                  .withJsonTag("key")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForListTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceTypes")
                  .withJsonTag("resource_types")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TagTypes")
                  .withJsonTag("tag_types")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForShowApiVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForShowResourceTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForShowTagQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef TmsMeta::genRequestDefForUpdatePredefineTags() {
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

