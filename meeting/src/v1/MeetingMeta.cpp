
#include <huaweicloud/meeting/v1/MeetingMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef MeetingMeta::genRequestDefForAddAppId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddCorp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddCorpAdmin() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddDepartment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddMaterial() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddProgram() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddPublication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddToPersonalSpace() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAddUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAllowAudienceJoin() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAllowClientRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAllowGuestUnmute() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAllowWaitingParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForAssociateVmr() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeleteCorpAdmins() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeleteDevices() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeleteMaterials() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeletePrograms() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeletePublications() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchDeleteUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchHand() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchMoveToWaitingRoom() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchSearchAppId() {
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
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchShowUserDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IdType")
                  .withJsonTag("idType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchUpdateDevicesStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBatchUpdateUserStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForBroadcastParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCancelBroadcast() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCancelMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCancelRecurringMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCancelRecurringSubMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCheckCallNumberInConf() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("CallNumber")
                  .withJsonTag("call_number")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCheckSlideVerifyCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCheckToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCheckVeriCodeForUpdateUserInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCheckVerifyCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateAnonymousAuthRandom() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXPassword;
    reqDefBuilder.withRequestField(headerParamXPassword
                  .withName("XPassword")
                  .withJsonTag("X-Password")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateAuthRandom() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfId")
                  .withJsonTag("conf_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GuestWaiting")
                  .withJsonTag("guest_waiting")
                  .withLocationType(Query_));
    FieldDef headerParamXPassword;
    reqDefBuilder.withRequestField(headerParamXPassword
                  .withName("XPassword")
                  .withJsonTag("X-Password")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateConfToken() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef headerParamXPassword;
    reqDefBuilder.withRequestField(headerParamXPassword
                  .withName("XPassword")
                  .withJsonTag("X-Password")
                  .withLocationType(Header_));
    FieldDef headerParamXLoginType;
    reqDefBuilder.withRequestField(headerParamXLoginType
                  .withName("XLoginType")
                  .withJsonTag("X-Login-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXNonce;
    reqDefBuilder.withRequestField(headerParamXNonce
                  .withName("XNonce")
                  .withJsonTag("X-Nonce")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreatePortalRefNonce() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateRecurringMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateVisionActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateWebSocketToken() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForCreateWebinar() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteAppId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteAttendees() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteCorp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteCorpVmr() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteDepartment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteLayout() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UuID")
                  .withJsonTag("uuID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteRecordings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUIDs")
                  .withJsonTag("confUUIDs")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteVisionActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteWebHookConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDeleteWebinar() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForDisassociateVmr() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForHand() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForHangUp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForInviteOperateVideo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForInviteParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForInviteShare() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForInviteUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForInviteWithPwd() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForListHistoryWebinars() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForListNetworkQuality() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Conferenceid")
                  .withJsonTag("conferenceid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Appid")
                  .withJsonTag("appid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Confuuid")
                  .withJsonTag("confuuid")
                  .withLocationType(Query_));
    FieldDef headerParamConfToken;
    reqDefBuilder.withRequestField(headerParamConfToken
                  .withName("ConfToken")
                  .withJsonTag("confToken")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForListOngoingWebinars() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForListOnlineConfAttendee() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfId")
                  .withJsonTag("conf_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("search_key")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForListUpComingWebinars() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForLive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForLockMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForLockView() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForMoveToWaitingRoom() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForMuteMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForMuteParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForPauseConference() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForProlongMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForRenameParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResetActivecode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResetAppKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResetPwd() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResetPwdByAdmin() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResetVisionActiveCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForResumeSimultaneousInterpretation() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForRollcallParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSaveLayout() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchAttendanceRecordsOfHisMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorpAdmins() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorpDir() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeptCode")
                  .withJsonTag("deptCode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QuerySubDept")
                  .withJsonTag("querySubDept")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchScope")
                  .withJsonTag("searchScope")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorpExternalDir() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchScope")
                  .withJsonTag("searchScope")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorpResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartExpireDate")
                  .withJsonTag("startExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndExpireDate")
                  .withJsonTag("endExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VmrMode")
                  .withJsonTag("vmrMode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TypeId")
                  .withJsonTag("typeId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderId")
                  .withJsonTag("orderId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCorpVmr() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VmrMode")
                  .withJsonTag("vmrMode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchCtlRecordsOfHisMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchDepartmentByName() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DeptName")
                  .withJsonTag("deptName")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchDevices() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Model")
                  .withJsonTag("model")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeptCode")
                  .withJsonTag("deptCode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableSubDept")
                  .withJsonTag("enableSubDept")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchHisMeetings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAll")
                  .withJsonTag("queryAll")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("startDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("endDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchMaterials() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchMeetingFileList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchMeetings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAll")
                  .withJsonTag("queryAll")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryConfMode")
                  .withJsonTag("queryConfMode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchMemberVmr() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SpecialVmr")
                  .withJsonTag("specialVmr")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchOnlineMeetings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAll")
                  .withJsonTag("queryAll")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchPrograms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchPublications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchRecordings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryAll")
                  .withJsonTag("queryAll")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("startDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("endDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortType")
                  .withJsonTag("sortType")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchResource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartExpireDate")
                  .withJsonTag("startExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndExpireDate")
                  .withJsonTag("endExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TypeId")
                  .withJsonTag("typeId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchResourceOpRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartExpireDate")
                  .withJsonTag("startExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndExpireDate")
                  .withJsonTag("endExpireDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartOperateDate")
                  .withJsonTag("startOperateDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndOperateDate")
                  .withJsonTag("endOperateDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TypeId")
                  .withJsonTag("typeId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OperateType")
                  .withJsonTag("operateType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sortField")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsAsc")
                  .withJsonTag("isAsc")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeptCode")
                  .withJsonTag("deptCode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableSubDept")
                  .withJsonTag("enableSubDept")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdminType")
                  .withJsonTag("adminType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnableRoom")
                  .withJsonTag("enableRoom")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserType")
                  .withJsonTag("userType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ContainsUnActive")
                  .withJsonTag("containsUnActive")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchVisionActiveCode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DevType")
                  .withJsonTag("devType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSendSlideVerifyCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSendVeriCodeForChangePwd() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSendVeriCodeForUpdateUserInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetAttendeeLanChannel() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetCohost() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetCustomMultiPicture() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetHostView() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetInterpreterGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetMmrLive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetMmrRecord() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetMultiPicture() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetParticipantView() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetProfileImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetRole() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetSsoConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetUserProfileImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetWebHookConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowConfOrg() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowCorp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowCorpAdmin() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowCorpBasicInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowCorpResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowDepartment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowDeptAndChildDept() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowDeviceDetail() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowDeviceStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowDeviceTypes() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowHisMeetingDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXType;
    reqDefBuilder.withRequestField(headerParamXType
                  .withName("XType")
                  .withJsonTag("X-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXQueryType;
    reqDefBuilder.withRequestField(headerParamXQueryType
                  .withName("XQueryType")
                  .withJsonTag("X-Query-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowLayout() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowMeetingDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXType;
    reqDefBuilder.withRequestField(headerParamXType
                  .withName("XType")
                  .withJsonTag("X-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXQueryType;
    reqDefBuilder.withRequestField(headerParamXQueryType
                  .withName("XQueryType")
                  .withJsonTag("X-Query-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowMeetingFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowMeetingFileList() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowMgmtSiteStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSchemaType;
    reqDefBuilder.withRequestField(headerParamXSchemaType
                  .withName("XSchemaType")
                  .withJsonTag("X-Schema-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowMyInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowOnlineMeetingDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXType;
    reqDefBuilder.withRequestField(headerParamXType
                  .withName("XType")
                  .withJsonTag("X-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXQueryType;
    reqDefBuilder.withRequestField(headerParamXQueryType
                  .withName("XQueryType")
                  .withJsonTag("X-Query-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowOrgRes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowProgram() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowPublication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRealTimeInfoOfMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRecordInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRecordingDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRecordingFileDownloadUrls() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRegionInfoOfMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowRoomSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowSpRes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowSpResource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("QueryGroup")
                  .withJsonTag("queryGroup")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowSsoConfig() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowUserDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowWebHookConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("CorpId")
                  .withJsonTag("corpId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SpId")
                  .withJsonTag("spId")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowWebinar() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForStartMeeting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForStopMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSwitchMode() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateAppId() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateContact() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateCorp() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateCorpBasicInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateDepartment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateMaterial() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateMemberVmr() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateMyInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateProgram() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdatePublication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdatePwd() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateRecurringMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateRecurringSubMeeting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserUUID")
                  .withJsonTag("userUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXAuthorizationType;
    reqDefBuilder.withRequestField(headerParamXAuthorizationType
                  .withName("XAuthorizationType")
                  .withJsonTag("X-Authorization-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXSiteId;
    reqDefBuilder.withRequestField(headerParamXSiteId
                  .withName("XSiteId")
                  .withJsonTag("X-Site-Id")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateRoomSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateStartedConfConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConferenceID")
                  .withJsonTag("conferenceID")
                  .withLocationType(Query_));
    FieldDef headerParamXConferenceAuthorization;
    reqDefBuilder.withRequestField(headerParamXConferenceAuthorization
                  .withName("XConferenceAuthorization")
                  .withJsonTag("X-Conference-Authorization")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestID;
    reqDefBuilder.withRequestField(headerParamXRequestID
                  .withName("XRequestID")
                  .withJsonTag("X-Request-ID")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateUser() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AccountType")
                  .withJsonTag("accountType")
                  .withLocationType(Query_));
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateWebHookConfigStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUpdateWebinar() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForUploadFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXRequestId;
    reqDefBuilder.withRequestField(headerParamXRequestId
                  .withName("XRequestId")
                  .withJsonTag("X-Request-Id")
                  .withLocationType(Header_));
    FieldDef headerParamAcceptLanguage;
    reqDefBuilder.withRequestField(headerParamAcceptLanguage
                  .withName("AcceptLanguage")
                  .withJsonTag("Accept-Language")
                  .withLocationType(Header_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchQosHistoryMeetings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("startDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("endDate")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchQosOnlineMeetings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchQosParticipantDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConfType")
                  .withJsonTag("confType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ParticipantID")
                  .withJsonTag("participantID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QosType")
                  .withJsonTag("qosType")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchQosParticipants() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ConfUUID")
                  .withJsonTag("confUUID")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ConfType")
                  .withJsonTag("confType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchKey")
                  .withJsonTag("searchKey")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSetQosThreshold() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ThresholdType")
                  .withJsonTag("thresholdType")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForShowQosThreshold() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ThresholdType")
                  .withJsonTag("thresholdType")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchStatisticConferenceInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TimeUnit")
                  .withJsonTag("timeUnit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchStatisticConferenceParticipant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TimeUnit")
                  .withJsonTag("timeUnit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchStatisticResourceInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TimeUnit")
                  .withJsonTag("timeUnit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef MeetingMeta::genRequestDefForSearchStatisticUserInfo() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TimeUnit")
                  .withJsonTag("timeUnit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("startTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("endTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}

