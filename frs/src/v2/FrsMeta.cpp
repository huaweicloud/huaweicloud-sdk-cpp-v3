
#include <huaweicloud/frs/v2/FrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef FrsMeta::genRequestDefForAddFacesByBase64() {
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

HttpRequestDef FrsMeta::genRequestDefForAddFacesByFile() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForAddFacesByUrl() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDeleteFaceByExternalImageId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ExternalImageId")
                  .withJsonTag("external_image_id")
                  .withLocationType(Query_));
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDeleteFaceByFaceId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FaceId")
                  .withJsonTag("face_id")
                  .withLocationType(Query_));
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDeleteFaceSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByBase64() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByBase64Intl() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByFile() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByFileIntl() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByUrl() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectFaceByUrlIntl() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByBase64() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByBase64Intl() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByFile() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByFileIntl() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByUrl() {
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

HttpRequestDef FrsMeta::genRequestDefForDetectLiveByUrlIntl() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForSearchFaceByBase64() {
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

HttpRequestDef FrsMeta::genRequestDefForSearchFaceByFaceId() {
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

HttpRequestDef FrsMeta::genRequestDefForSearchFaceByFile() {
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForSearchFaceByUrl() {
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

HttpRequestDef FrsMeta::genRequestDefForShowAllFaceSets() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForShowFaceSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamEnterpriseProjectId;
    reqDefBuilder.withRequestField(headerParamEnterpriseProjectId
                  .withName("EnterpriseProjectId")
                  .withJsonTag("Enterprise-Project-Id")
                  .withLocationType(Header_));
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
    return reqDefBuilder;
}

HttpRequestDef FrsMeta::genRequestDefForUpdateFace() {
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

