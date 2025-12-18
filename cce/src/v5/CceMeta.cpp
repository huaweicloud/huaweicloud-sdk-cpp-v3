
#include <huaweicloud/cce/v5/CceMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CceMeta::genRequestDefForCreateImageCache() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForDeleteImageCache() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListImageCaches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForListPackageProducts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Locale")
                  .withJsonTag("locale")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForShowImageCache() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CceMeta::genRequestDefForSubscribePackageProducts() {
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

