
#include <huaweicloud/ivs/v2/IvsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IvsMeta::genRequestDefForDetectExtentionByIdCardImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IvsMeta::genRequestDefForDetectExtentionByNameAndId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IvsMeta::genRequestDefForDetectStandardByIdCardImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IvsMeta::genRequestDefForDetectStandardByNameAndId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IvsMeta::genRequestDefForDetectStandardByVideoAndIdCardImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IvsMeta::genRequestDefForDetectStandardByVideoAndNameAndId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
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

