
#include <huaweicloud/frs/v2/FrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef FrsMeta::genRequestDefForBatchDeleteFaces() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForCompareFaceByBase64() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForCompareFaceByFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForCompareFaceByUrl() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForCreateFaceSet() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDeleteFaceSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectLiveFaceByBase64() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectLiveFaceByFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectLiveFaceByUrl() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForShowAllFaceSets() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForShowFaceSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForShowFacesByFaceId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FaceId")
                  .withJsonTag("face_id")
                  .withLocationType(Query_));
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForShowFacesByLimit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}

