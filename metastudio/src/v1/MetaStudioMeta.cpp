
#include <huaweicloud/metastudio/v1/MetaStudioMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef MetaStudioMeta::genRequestDefForCreateActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListActiveCode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForResetActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShowActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateAgencyWithRoleType() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteAgencyWithRoleType() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAgency() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RoleType")
                  .withJsonTag("role_type")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateAsrVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteAsrVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListAsrVocabulary() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VocabularyType")
                  .withJsonTag("vocabulary_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAsrVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAsrVocabularyAssociation() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateAsrVocabulary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDownloadResultFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDownloadTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForExportResource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BusinessId")
                  .withJsonTag("business_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForImportResource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BusinessId")
                  .withJsonTag("business_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForSearchTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BusinessId")
                  .withJsonTag("business_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BeginTime")
                  .withJsonTag("begin_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowTask() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateDialogUrl() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartChatJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowSmartChatJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForStartSmartChatJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForStopSmartChatJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateDialogReportConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteDialogReportConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowDialogReportConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateDialogReportConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForBatchExecuteAssetAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateAssetByReplicationInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateDigitalAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef headerParamXMSSAuthorization;
    reqDefBuilder.withRequestField(headerParamXMSSAuthorization
                  .withName("XMSSAuthorization")
                  .withJsonTag("X-MSS-Authorization")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteAsset() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Mode")
                  .withJsonTag("mode")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListAssetSummary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListAssets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TagCombinationType")
                  .withJsonTag("tag_combination_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetType")
                  .withJsonTag("asset_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetSource")
                  .withJsonTag("asset_source")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetState")
                  .withJsonTag("asset_state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StyleId")
                  .withJsonTag("style_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccurateQueryField")
                  .withJsonTag("accurate_query_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sex")
                  .withJsonTag("sex")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SystemProperty")
                  .withJsonTag("system_property")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ActionEditable")
                  .withJsonTag("action_editable")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsWithActionLibrary")
                  .withJsonTag("is_with_action_library")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsMovable")
                  .withJsonTag("is_movable")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VoiceProvider")
                  .withJsonTag("voice_provider")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Role")
                  .withJsonTag("role")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsRealtimeVoice")
                  .withJsonTag("is_realtime_voice")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("HumanModel2dVersion")
                  .withJsonTag("human_model_2d_version")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IncludeDeviceName")
                  .withJsonTag("include_device_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExcludeDeviceName")
                  .withJsonTag("exclude_device_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportedService")
                  .withJsonTag("supported_service")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AppUserId")
                  .withJsonTag("app_user_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForRestoreAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAssetReplicationInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateDigitalAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateDigitalHumanBusinessCard() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteDigitalHumanBusinessCard() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListDigitalHumanBusinessCard() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VideoAssetName")
                  .withJsonTag("video_asset_name")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowDigitalHumanBusinessCard() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateDigitalHumanBusinessCard() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FuzzyQueryField")
                  .withJsonTag("fuzzy_query_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ScriptId")
                  .withJsonTag("script_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetName")
                  .withJsonTag("asset_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobType")
                  .withJsonTag("job_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCancel2DDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreate2DDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShow2DDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ShowScript")
                  .withJsonTag("show_script")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCancelPhotoDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreatePhotoDetection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreatePhotoDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShowPhotoDetection() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPhotoDigitalHumanVideo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ShowScript")
                  .withJsonTag("show_script")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForConfirmFileUpload() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateLargeFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateHotQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteHotQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListHotQuestion() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowHotQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateHotQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateHotWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteHotWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListHotWords() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("HotWordsType")
                  .withJsonTag("hot_words_type")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowHotWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowHotWordsSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateHotWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateHotWordsSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateInteractionRuleGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteInteractionRuleGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListInteractionRuleGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupName")
                  .withJsonTag("group_name")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateInteractionRuleGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateIntentAndQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateKnowledgeIntent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteKnowledgeIntent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListKnowledgeIntent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SkillId")
                  .withJsonTag("skill_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowKnowledgeIntent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateKnowledgeIntent() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateBatchKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IntentId")
                  .withJsonTag("intent_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateBatchKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateKnowledgeQuestion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForExportKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ExportType")
                  .withJsonTag("export_type")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateKnowledgeSkill() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateLivePlatform() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteLivePlatform() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListLivePlatformProducts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PlatformId")
                  .withJsonTag("platform_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LiveId")
                  .withJsonTag("live_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListLivePlatforms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessType")
                  .withJsonTag("access_type")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowLivePlatform() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateLivePlatform() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateOnceCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateMetaStudioOrders() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
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

HttpRequestDef MetaStudioMeta::genRequestDefForBatchDeletePacifyWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreatePacifyWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeletePacifyWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListPacifyWords() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PacifyWordsType")
                  .withJsonTag("pacify_words_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Intent")
                  .withJsonTag("intent")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPacifyWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPacifyWordsIntent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPacifyWordsSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPacifyWordsTriggerTime() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdatePacifyWords() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForUpdatePacifyWordsSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForUpdatePacifyWordsTriggerTime() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreatePictureModelingByUrlJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreatePictureModelingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListPictureModelingJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowPictureModelingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListProducts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForSetProductAsset() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShowProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateProduct() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateRobot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteRobot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListRobot() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RoomId")
                  .withJsonTag("room_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotType")
                  .withJsonTag("robot_type")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowRobot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateRobot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForValidateRobot() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateSmartChatRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteSmartChatRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartChatRooms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RoomName")
                  .withJsonTag("room_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ModelName")
                  .withJsonTag("model_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowSmartChatRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateSmartChatRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForBatchConfirmLiveCommands() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForExecuteSmartLiveCommand() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartLive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartLiveJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RoomName")
                  .withJsonTag("room_name")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartLiveRuleCommands() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartLiveScriptCommands() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForLiveEventReport() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AuthKey")
                  .withJsonTag("auth_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExpiresTime")
                  .withJsonTag("expires_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefreshUrl")
                  .withJsonTag("refresh_url")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef headerParamXMssAuthKey;
    reqDefBuilder.withRequestField(headerParamXMssAuthKey
                  .withName("XMssAuthKey")
                  .withJsonTag("x-mss-auth-key")
                  .withLocationType(Header_));
    FieldDef headerParamXMssExpiresTime;
    reqDefBuilder.withRequestField(headerParamXMssExpiresTime
                  .withName("XMssExpiresTime")
                  .withJsonTag("x-mss-expires-time")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShowSmartLive() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForStartSmartLive() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForStopSmartLive() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForConfirmSmarLiveRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateSmartLiveRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteSmartLiveRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListSmartLiveRooms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RoomName")
                  .withJsonTag("room_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DhId")
                  .withJsonTag("dh_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ModelName")
                  .withJsonTag("model_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LiveState")
                  .withJsonTag("live_state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RoomType")
                  .withJsonTag("room_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateOwnType")
                  .withJsonTag("template_own_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConfirmState")
                  .withJsonTag("confirm_state")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowSmartLiveRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateSmartLiveRoom() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListStyles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateSubtitleFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForShowSubtitleFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCountTenantResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Business")
                  .withJsonTag("business")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceExpireStartTime")
                  .withJsonTag("resource_expire_start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceExpireEndTime")
                  .withJsonTag("resource_expire_end_time")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListTenantResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Business")
                  .withJsonTag("business")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceSource")
                  .withJsonTag("resource_source")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderId")
                  .withJsonTag("order_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargingMode")
                  .withJsonTag("charging_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceExpireStartTime")
                  .withJsonTag("resource_expire_start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceExpireEndTime")
                  .withJsonTag("resource_expire_end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SubResource")
                  .withJsonTag("sub_resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowResourceUsage() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Business")
                  .withJsonTag("business")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCommitVoiceTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForConfirmTrainingSegment() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Index")
                  .withJsonTag("index")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTrainingAdvanceJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTrainingBasicJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTrainingMiddleJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteVoiceTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListJobOperationLog() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListVoiceTrainingJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdateUntil")
                  .withJsonTag("update_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdateSince")
                  .withJsonTag("update_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VoiceName")
                  .withJsonTag("voice_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobType")
                  .withJsonTag("job_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BatchName")
                  .withJsonTag("batch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsOndemandResource")
                  .withJsonTag("is_ondemand_resource")
                  .withLocationType(Query_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForSetJobBatchName() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowJobAuditResult() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowJobUploadingAddress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowTenantDurationCfg() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowTrainingSegmentInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowVoiceTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreate2dModelTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDelete2dModelTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForExecute2dModelTrainingCommandByUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForList2dModelTrainingJob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateUntil")
                  .withJsonTag("create_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreateSince")
                  .withJsonTag("create_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryProjectId")
                  .withJsonTag("query_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BatchName")
                  .withJsonTag("batch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JobId")
                  .withJsonTag("job_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ModelResolution")
                  .withJsonTag("model_resolution")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsFlexus")
                  .withJsonTag("is_flexus")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShow2dModelTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdate2dModelTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateFacialAnimations() {
    HttpRequestDef reqDefBuilder;
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTtsa() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListFacialAnimationsData() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListTtsaData() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListTtsaJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateAsyncTtsJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTtsAudition() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTtscVocabularyConfigs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateTtscVocabularyGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteTtscVocabularyConfigs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteTtscVocabularyGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListTtscVocabularyConfigs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TtsServiceName")
                  .withJsonTag("tts_service_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsVocabularyConfigEnable")
                  .withJsonTag("is_vocabulary_config_enable")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("search_key")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListTtscVocabularyGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForSaveTtscVocabularyConfigs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForSetTtscGroupAssets() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowAsyncTtsJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowTtsAuditionFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowTtsPhoneticSymbol() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Word")
                  .withJsonTag("word")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateTtscVocabularyGroups() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateVideoMotionCaptureJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    FieldDef headerParamXUserPrivilege;
    reqDefBuilder.withRequestField(headerParamXUserPrivilege
                  .withName("XUserPrivilege")
                  .withJsonTag("X-User-Privilege")
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

HttpRequestDef MetaStudioMeta::genRequestDefForExecuteVideoMotionCaptureCommand() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListVideoMotionCaptureJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowVideoMotionCaptureJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForStopVideoMotionCaptureJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCopyVideoScripts() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForCreateVideoScripts() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteVideoScript() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForListVideoScripts() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ScriptCatalog")
                  .withJsonTag("script_catalog")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ViewMode")
                  .withJsonTag("view_mode")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowVideoScript() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateVideoScript() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForCreateWelcomeSpeech() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForDeleteWelcomeSpeech() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForListWelcomeSpeech() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowWelcomeSpeech() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForShowWelcomeSpeechSwitch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RobotId")
                  .withJsonTag("robot_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateWelcomeSpeech() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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

HttpRequestDef MetaStudioMeta::genRequestDefForUpdateWelcomeSpeechSwitch() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamAuthorization;
    reqDefBuilder.withRequestField(headerParamAuthorization
                  .withName("Authorization")
                  .withJsonTag("Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    FieldDef headerParamXProjectId;
    reqDefBuilder.withRequestField(headerParamXProjectId
                  .withName("XProjectId")
                  .withJsonTag("X-Project-Id")
                  .withLocationType(Header_));
    FieldDef headerParamXAppUserId;
    reqDefBuilder.withRequestField(headerParamXAppUserId
                  .withName("XAppUserId")
                  .withJsonTag("X-App-UserId")
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


}
}
}
}

