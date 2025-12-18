#include <huaweicloud/meeting/v1/MeetingClient.h>
#include <huaweicloud/meeting/v1/MeetingMeta.h>

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

template <typename T>
std::string toString(const T value)
{
    std::ostringstream out;
    out << std::setprecision(std::numeric_limits<T>::digits10) << std::fixed << value;
    return out.str();
}

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {

using namespace HuaweiCloud::Sdk::Meeting::V1::Model;

MeetingClient::MeetingClient()
{
}

MeetingClient::~MeetingClient()
{
}

ClientBuilder<MeetingClient> MeetingClient::newBuilder()
{
    ClientBuilder<MeetingClient> client = ClientBuilder<MeetingClient>("MeetingCredentials");
    return client;
}
std::shared_ptr<AddAppIdResponse> MeetingClient::addAppId(AddAppIdRequest &request)
{
    std::string localVarPath = "/v2/usg/acs/corp/app";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=utf-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddAppId());

    std::shared_ptr<AddAppIdResponse> localVarResult = std::make_shared<AddAppIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddCorpResponse> MeetingClient::addCorp(AddCorpRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddCorp());

    std::shared_ptr<AddCorpResponse> localVarResult = std::make_shared<AddCorpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddCorpAdminResponse> MeetingClient::addCorpAdmin(AddCorpAdminRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/admin";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddCorpAdmin());

    std::shared_ptr<AddCorpAdminResponse> localVarResult = std::make_shared<AddCorpAdminResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddDepartmentResponse> MeetingClient::addDepartment(AddDepartmentRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/dept";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddDepartment());

    std::shared_ptr<AddDepartmentResponse> localVarResult = std::make_shared<AddDepartmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddDeviceResponse> MeetingClient::addDevice(AddDeviceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddDevice());

    std::shared_ptr<AddDeviceResponse> localVarResult = std::make_shared<AddDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddMaterialResponse> MeetingClient::addMaterial(AddMaterialRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/materials";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("multipart/form-data", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddMaterial());

    std::shared_ptr<AddMaterialResponse> localVarResult = std::make_shared<AddMaterialResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddProgramResponse> MeetingClient::addProgram(AddProgramRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/programs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddProgram());

    std::shared_ptr<AddProgramResponse> localVarResult = std::make_shared<AddProgramResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddPublicationResponse> MeetingClient::addPublication(AddPublicationRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/publications";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddPublication());

    std::shared_ptr<AddPublicationResponse> localVarResult = std::make_shared<AddPublicationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddResourceResponse> MeetingClient::addResource(AddResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{corp_id}/resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["corp_id"] = parameterToString(request.getCorpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddResource());

    std::shared_ptr<AddResourceResponse> localVarResult = std::make_shared<AddResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddToPersonalSpaceResponse> MeetingClient::addToPersonalSpace(AddToPersonalSpaceRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/meeting-files/save-to-personal-space";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddToPersonalSpace());

    std::shared_ptr<AddToPersonalSpaceResponse> localVarResult = std::make_shared<AddToPersonalSpaceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddUserResponse> MeetingClient::addUser(AddUserRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAddUser());

    std::shared_ptr<AddUserResponse> localVarResult = std::make_shared<AddUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AllowAudienceJoinResponse> MeetingClient::allowAudienceJoin(AllowAudienceJoinRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/allowAudience";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAllowAudienceJoin());

    std::shared_ptr<AllowAudienceJoinResponse> localVarResult = std::make_shared<AllowAudienceJoinResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AllowClientRecordResponse> MeetingClient::allowClientRecord(AllowClientRecordRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/allowClientRecord";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAllowClientRecord());

    std::shared_ptr<AllowClientRecordResponse> localVarResult = std::make_shared<AllowClientRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AllowGuestUnmuteResponse> MeetingClient::allowGuestUnmute(AllowGuestUnmuteRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/mute/guestUnMute";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAllowGuestUnmute());

    std::shared_ptr<AllowGuestUnmuteResponse> localVarResult = std::make_shared<AllowGuestUnmuteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AllowWaitingParticipantResponse> MeetingClient::allowWaitingParticipant(AllowWaitingParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/allowWaitingParticipant";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAllowWaitingParticipant());

    std::shared_ptr<AllowWaitingParticipantResponse> localVarResult = std::make_shared<AllowWaitingParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AssociateVmrResponse> MeetingClient::associateVmr(AssociateVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vmr/assign-to-member/{account}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForAssociateVmr());

    std::shared_ptr<AssociateVmrResponse> localVarResult = std::make_shared<AssociateVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteCorpAdminsResponse> MeetingClient::batchDeleteCorpAdmins(BatchDeleteCorpAdminsRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/admin/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeleteCorpAdmins());

    std::shared_ptr<BatchDeleteCorpAdminsResponse> localVarResult = std::make_shared<BatchDeleteCorpAdminsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteDevicesResponse> MeetingClient::batchDeleteDevices(BatchDeleteDevicesRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeleteDevices());

    std::shared_ptr<BatchDeleteDevicesResponse> localVarResult = std::make_shared<BatchDeleteDevicesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteMaterialsResponse> MeetingClient::batchDeleteMaterials(BatchDeleteMaterialsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/materials/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeleteMaterials());

    std::shared_ptr<BatchDeleteMaterialsResponse> localVarResult = std::make_shared<BatchDeleteMaterialsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteProgramsResponse> MeetingClient::batchDeletePrograms(BatchDeleteProgramsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/programs/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeletePrograms());

    std::shared_ptr<BatchDeleteProgramsResponse> localVarResult = std::make_shared<BatchDeleteProgramsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeletePublicationsResponse> MeetingClient::batchDeletePublications(BatchDeletePublicationsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/publications/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeletePublications());

    std::shared_ptr<BatchDeletePublicationsResponse> localVarResult = std::make_shared<BatchDeletePublicationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteUsersResponse> MeetingClient::batchDeleteUsers(BatchDeleteUsersRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchDeleteUsers());

    std::shared_ptr<BatchDeleteUsersResponse> localVarResult = std::make_shared<BatchDeleteUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchHandResponse> MeetingClient::batchHand(BatchHandRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/batch/hands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchHand());

    std::shared_ptr<BatchHandResponse> localVarResult = std::make_shared<BatchHandResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchMoveToWaitingRoomResponse> MeetingClient::batchMoveToWaitingRoom(BatchMoveToWaitingRoomRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/batchMoveToWaitingRoom";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchMoveToWaitingRoom());

    std::shared_ptr<BatchMoveToWaitingRoomResponse> localVarResult = std::make_shared<BatchMoveToWaitingRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchSearchAppIdResponse> MeetingClient::batchSearchAppId(BatchSearchAppIdRequest &request)
{
    std::string localVarPath = "/v2/usg/acs/corp/apps";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchSearchAppId());

    std::shared_ptr<BatchSearchAppIdResponse> localVarResult = std::make_shared<BatchSearchAppIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BatchShowUserDetailsResponse> MeetingClient::batchShowUserDetails(BatchShowUserDetailsRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/users/list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.idTypeIsSet()) {
        localVarQueryParams["idType"] = parameterToString(request.getIdType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchShowUserDetails());

    std::shared_ptr<BatchShowUserDetailsResponse> localVarResult = std::make_shared<BatchShowUserDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchUpdateDevicesStatusResponse> MeetingClient::batchUpdateDevicesStatus(BatchUpdateDevicesStatusRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device/status/{value}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["value"] = parameterToString(request.getValue());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchUpdateDevicesStatus());

    std::shared_ptr<BatchUpdateDevicesStatusResponse> localVarResult = std::make_shared<BatchUpdateDevicesStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchUpdateUserStatusResponse> MeetingClient::batchUpdateUserStatus(BatchUpdateUserStatusRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member/status/{value}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["value"] = parameterToString(request.getValue());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBatchUpdateUserStatus());

    std::shared_ptr<BatchUpdateUserStatusResponse> localVarResult = std::make_shared<BatchUpdateUserStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BroadcastParticipantResponse> MeetingClient::broadcastParticipant(BroadcastParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/broadcast";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForBroadcastParticipant());

    std::shared_ptr<BroadcastParticipantResponse> localVarResult = std::make_shared<BroadcastParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelBroadcastResponse> MeetingClient::cancelBroadcast(CancelBroadcastRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/cancelBroadcast";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCancelBroadcast());

    std::shared_ptr<CancelBroadcastResponse> localVarResult = std::make_shared<CancelBroadcastResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelMeetingResponse> MeetingClient::cancelMeeting(CancelMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCancelMeeting());

    std::shared_ptr<CancelMeetingResponse> localVarResult = std::make_shared<CancelMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelRecurringMeetingResponse> MeetingClient::cancelRecurringMeeting(CancelRecurringMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/cycleconferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCancelRecurringMeeting());

    std::shared_ptr<CancelRecurringMeetingResponse> localVarResult = std::make_shared<CancelRecurringMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelRecurringSubMeetingResponse> MeetingClient::cancelRecurringSubMeeting(CancelRecurringSubMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/cyclesubconf";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCancelRecurringSubMeeting());

    std::shared_ptr<CancelRecurringSubMeetingResponse> localVarResult = std::make_shared<CancelRecurringSubMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CheckCallNumberInConfResponse> MeetingClient::checkCallNumberInConf(CheckCallNumberInConfRequest &request)
{
    std::string localVarPath = "/v2/mms/ncms/conferences/online/check-callnumber-in-conf";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.callNumberIsSet()) {
        localVarQueryParams["call_number"] = parameterToString(request.getCallNumber());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCheckCallNumberInConf());

    std::shared_ptr<CheckCallNumberInConfResponse> localVarResult = std::make_shared<CheckCallNumberInConfResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CheckSlideVerifyCodeResponse> MeetingClient::checkSlideVerifyCode(CheckSlideVerifyCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/auth/slideverifycode/check";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCheckSlideVerifyCode());

    std::shared_ptr<CheckSlideVerifyCodeResponse> localVarResult = std::make_shared<CheckSlideVerifyCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CheckTokenResponse> MeetingClient::checkToken(CheckTokenRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/token/validate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCheckToken());

    std::shared_ptr<CheckTokenResponse> localVarResult = std::make_shared<CheckTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CheckVeriCodeForUpdateUserInfoResponse> MeetingClient::checkVeriCodeForUpdateUserInfo(CheckVeriCodeForUpdateUserInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/verification-code/verify";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCheckVeriCodeForUpdateUserInfo());

    std::shared_ptr<CheckVeriCodeForUpdateUserInfoResponse> localVarResult = std::make_shared<CheckVeriCodeForUpdateUserInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CheckVerifyCodeResponse> MeetingClient::checkVerifyCode(CheckVerifyCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/verifycode/check";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCheckVerifyCode());

    std::shared_ptr<CheckVerifyCodeResponse> localVarResult = std::make_shared<CheckVerifyCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateAnonymousAuthRandomResponse> MeetingClient::createAnonymousAuthRandom(CreateAnonymousAuthRandomRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/anonymous/auth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xPasswordIsSet()) {
        localVarHeaderParams["X-Password"] = parameterToString(request.getXPassword());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateAnonymousAuthRandom());

    std::shared_ptr<CreateAnonymousAuthRandomResponse> localVarResult = std::make_shared<CreateAnonymousAuthRandomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateAuthRandomResponse> MeetingClient::createAuthRandom(CreateAuthRandomRequest &request)
{
    std::string localVarPath = "/v2/mms/ncms/conferences/auth/random";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confIdIsSet()) {
        localVarQueryParams["conf_id"] = parameterToString(request.getConfId());
    }
    if (request.guestWaitingIsSet()) {
        localVarQueryParams["guest_waiting"] = parameterToString(request.getGuestWaiting());
    }
    if (request.xPasswordIsSet()) {
        localVarHeaderParams["X-Password"] = parameterToString(request.getXPassword());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateAuthRandom());

    std::shared_ptr<CreateAuthRandomResponse> localVarResult = std::make_shared<CreateAuthRandomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateConfTokenResponse> MeetingClient::createConfToken(CreateConfTokenRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/token";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }
    if (request.xPasswordIsSet()) {
        localVarHeaderParams["X-Password"] = parameterToString(request.getXPassword());
    }
    if (request.xLoginTypeIsSet()) {
        localVarHeaderParams["X-Login-Type"] = parameterToString(request.getXLoginType());
    }
    if (request.xNonceIsSet()) {
        localVarHeaderParams["X-Nonce"] = parameterToString(request.getXNonce());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateConfToken());

    std::shared_ptr<CreateConfTokenResponse> localVarResult = std::make_shared<CreateConfTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateMeetingResponse> MeetingClient::createMeeting(CreateMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateMeeting());

    std::shared_ptr<CreateMeetingResponse> localVarResult = std::make_shared<CreateMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreatePortalRefNonceResponse> MeetingClient::createPortalRefNonce(CreatePortalRefNonceRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/auth/portal-ref-nonce";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreatePortalRefNonce());

    std::shared_ptr<CreatePortalRefNonceResponse> localVarResult = std::make_shared<CreatePortalRefNonceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateRecurringMeetingResponse> MeetingClient::createRecurringMeeting(CreateRecurringMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/cycleconferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateRecurringMeeting());

    std::shared_ptr<CreateRecurringMeetingResponse> localVarResult = std::make_shared<CreateRecurringMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateVisionActiveCodeResponse> MeetingClient::createVisionActiveCode(CreateVisionActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vision/activecode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateVisionActiveCode());

    std::shared_ptr<CreateVisionActiveCodeResponse> localVarResult = std::make_shared<CreateVisionActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateWebSocketTokenResponse> MeetingClient::createWebSocketToken(CreateWebSocketTokenRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/wsToken";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateWebSocketToken());

    std::shared_ptr<CreateWebSocketTokenResponse> localVarResult = std::make_shared<CreateWebSocketTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateWebinarResponse> MeetingClient::createWebinar(CreateWebinarRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForCreateWebinar());

    std::shared_ptr<CreateWebinarResponse> localVarResult = std::make_shared<CreateWebinarResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteAppIdResponse> MeetingClient::deleteAppId(DeleteAppIdRequest &request)
{
    std::string localVarPath = "/v2/usg/acs/corp/app/{app_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteAppId());

    std::shared_ptr<DeleteAppIdResponse> localVarResult = std::make_shared<DeleteAppIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAttendeesResponse> MeetingClient::deleteAttendees(DeleteAttendeesRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/attendees/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteAttendees());

    std::shared_ptr<DeleteAttendeesResponse> localVarResult = std::make_shared<DeleteAttendeesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteCorpResponse> MeetingClient::deleteCorp(DeleteCorpRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteCorp());

    std::shared_ptr<DeleteCorpResponse> localVarResult = std::make_shared<DeleteCorpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteCorpVmrResponse> MeetingClient::deleteCorpVmr(DeleteCorpVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vmr/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteCorpVmr());

    std::shared_ptr<DeleteCorpVmrResponse> localVarResult = std::make_shared<DeleteCorpVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteDepartmentResponse> MeetingClient::deleteDepartment(DeleteDepartmentRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/dept/{dept_code}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["dept_code"] = parameterToString(request.getDeptCode());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteDepartment());

    std::shared_ptr<DeleteDepartmentResponse> localVarResult = std::make_shared<DeleteDepartmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteLayoutResponse> MeetingClient::deleteLayout(DeleteLayoutRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/layOut";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.uuIDIsSet()) {
        localVarQueryParams["uuID"] = parameterToString(request.getUuID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteLayout());

    std::shared_ptr<DeleteLayoutResponse> localVarResult = std::make_shared<DeleteLayoutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteRecordingsResponse> MeetingClient::deleteRecordings(DeleteRecordingsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/record/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDsIsSet()) {
        localVarQueryParams["confUUIDs"] = parameterToString(request.getConfUUIDs());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteRecordings());

    std::shared_ptr<DeleteRecordingsResponse> localVarResult = std::make_shared<DeleteRecordingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteResourceResponse> MeetingClient::deleteResource(DeleteResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{corp_id}/resource/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["corp_id"] = parameterToString(request.getCorpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteResource());

    std::shared_ptr<DeleteResourceResponse> localVarResult = std::make_shared<DeleteResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteTokenResponse> MeetingClient::deleteToken(DeleteTokenRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/token";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteToken());

    std::shared_ptr<DeleteTokenResponse> localVarResult = std::make_shared<DeleteTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteVisionActiveCodeResponse> MeetingClient::deleteVisionActiveCode(DeleteVisionActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vision/activecode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteVisionActiveCode());

    std::shared_ptr<DeleteVisionActiveCodeResponse> localVarResult = std::make_shared<DeleteVisionActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteWebHookConfigResponse> MeetingClient::deleteWebHookConfig(DeleteWebHookConfigRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/webhook/link-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteWebHookConfig());

    std::shared_ptr<DeleteWebHookConfigResponse> localVarResult = std::make_shared<DeleteWebHookConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteWebinarResponse> MeetingClient::deleteWebinar(DeleteWebinarRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences/{conference_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["conference_id"] = parameterToString(request.getConferenceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDeleteWebinar());

    std::shared_ptr<DeleteWebinarResponse> localVarResult = std::make_shared<DeleteWebinarResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisassociateVmrResponse> MeetingClient::disassociateVmr(DisassociateVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vmr/recycle-from-member/{account}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForDisassociateVmr());

    std::shared_ptr<DisassociateVmrResponse> localVarResult = std::make_shared<DisassociateVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<HandResponse> MeetingClient::hand(HandRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/hands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForHand());

    std::shared_ptr<HandResponse> localVarResult = std::make_shared<HandResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<HangUpResponse> MeetingClient::hangUp(HangUpRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForHangUp());

    std::shared_ptr<HangUpResponse> localVarResult = std::make_shared<HangUpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InviteOperateVideoResponse> MeetingClient::inviteOperateVideo(InviteOperateVideoRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/video";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForInviteOperateVideo());

    std::shared_ptr<InviteOperateVideoResponse> localVarResult = std::make_shared<InviteOperateVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InviteParticipantResponse> MeetingClient::inviteParticipant(InviteParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForInviteParticipant());

    std::shared_ptr<InviteParticipantResponse> localVarResult = std::make_shared<InviteParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InviteShareResponse> MeetingClient::inviteShare(InviteShareRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/share/invite";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForInviteShare());

    std::shared_ptr<InviteShareResponse> localVarResult = std::make_shared<InviteShareResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InviteUserResponse> MeetingClient::inviteUser(InviteUserRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member/add";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForInviteUser());

    std::shared_ptr<InviteUserResponse> localVarResult = std::make_shared<InviteUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InviteWithPwdResponse> MeetingClient::inviteWithPwd(InviteWithPwdRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/inviteWithPwd";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForInviteWithPwd());

    std::shared_ptr<InviteWithPwdResponse> localVarResult = std::make_shared<InviteWithPwdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListHistoryWebinarsResponse> MeetingClient::listHistoryWebinars(ListHistoryWebinarsRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences/history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["startTime"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["endTime"] = parameterToString(request.getEndTime());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForListHistoryWebinars());

    std::shared_ptr<ListHistoryWebinarsResponse> localVarResult = std::make_shared<ListHistoryWebinarsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListNetworkQualityResponse> MeetingClient::listNetworkQuality(ListNetworkQualityRequest &request)
{
    std::string localVarPath = "/v1/mmc/cqs/media/qos";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceidIsSet()) {
        localVarQueryParams["conferenceid"] = parameterToString(request.getConferenceid());
    }
    if (request.appidIsSet()) {
        localVarQueryParams["appid"] = parameterToString(request.getAppid());
    }
    if (request.confuuidIsSet()) {
        localVarQueryParams["confuuid"] = parameterToString(request.getConfuuid());
    }
    if (request.confTokenIsSet()) {
        localVarHeaderParams["confToken"] = parameterToString(request.getConfToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForListNetworkQuality());

    std::shared_ptr<ListNetworkQualityResponse> localVarResult = std::make_shared<ListNetworkQualityResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListOngoingWebinarsResponse> MeetingClient::listOngoingWebinars(ListOngoingWebinarsRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences/ongoing";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForListOngoingWebinars());

    std::shared_ptr<ListOngoingWebinarsResponse> localVarResult = std::make_shared<ListOngoingWebinarsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListOnlineConfAttendeeResponse> MeetingClient::listOnlineConfAttendee(ListOnlineConfAttendeeRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/online/conf-attendee";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confIdIsSet()) {
        localVarQueryParams["conf_id"] = parameterToString(request.getConfId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["search_key"] = parameterToString(request.getSearchKey());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForListOnlineConfAttendee());

    std::shared_ptr<ListOnlineConfAttendeeResponse> localVarResult = std::make_shared<ListOnlineConfAttendeeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListUpComingWebinarsResponse> MeetingClient::listUpComingWebinars(ListUpComingWebinarsRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences/upcoming";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForListUpComingWebinars());

    std::shared_ptr<ListUpComingWebinarsResponse> localVarResult = std::make_shared<ListUpComingWebinarsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<LiveResponse> MeetingClient::live(LiveRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/live";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForLive());

    std::shared_ptr<LiveResponse> localVarResult = std::make_shared<LiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<LockMeetingResponse> MeetingClient::lockMeeting(LockMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/lock";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForLockMeeting());

    std::shared_ptr<LockMeetingResponse> localVarResult = std::make_shared<LockMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<LockViewResponse> MeetingClient::lockView(LockViewRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/lockView";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForLockView());

    std::shared_ptr<LockViewResponse> localVarResult = std::make_shared<LockViewResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<MoveToWaitingRoomResponse> MeetingClient::moveToWaitingRoom(MoveToWaitingRoomRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/moveToWaitingRoom";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForMoveToWaitingRoom());

    std::shared_ptr<MoveToWaitingRoomResponse> localVarResult = std::make_shared<MoveToWaitingRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<MuteMeetingResponse> MeetingClient::muteMeeting(MuteMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/mute";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForMuteMeeting());

    std::shared_ptr<MuteMeetingResponse> localVarResult = std::make_shared<MuteMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<MuteParticipantResponse> MeetingClient::muteParticipant(MuteParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/mute";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForMuteParticipant());

    std::shared_ptr<MuteParticipantResponse> localVarResult = std::make_shared<MuteParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<PauseConferenceResponse> MeetingClient::pauseConference(PauseConferenceRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/pause";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForPauseConference());

    std::shared_ptr<PauseConferenceResponse> localVarResult = std::make_shared<PauseConferenceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ProlongMeetingResponse> MeetingClient::prolongMeeting(ProlongMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/duration";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForProlongMeeting());

    std::shared_ptr<ProlongMeetingResponse> localVarResult = std::make_shared<ProlongMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<RecordResponse> MeetingClient::record(RecordRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/record";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForRecord());

    std::shared_ptr<RecordResponse> localVarResult = std::make_shared<RecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<RenameParticipantResponse> MeetingClient::renameParticipant(RenameParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/name";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForRenameParticipant());

    std::shared_ptr<RenameParticipantResponse> localVarResult = std::make_shared<RenameParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ResetActivecodeResponse> MeetingClient::resetActivecode(ResetActivecodeRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device/{sn}/activecode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["sn"] = parameterToString(request.getSn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResetActivecode());

    std::shared_ptr<ResetActivecodeResponse> localVarResult = std::make_shared<ResetActivecodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ResetAppKeyResponse> MeetingClient::resetAppKey(ResetAppKeyRequest &request)
{
    std::string localVarPath = "/v2/usg/acs/corp/app/{app_id}/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResetAppKey());

    std::shared_ptr<ResetAppKeyResponse> localVarResult = std::make_shared<ResetAppKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetPwdResponse> MeetingClient::resetPwd(ResetPwdRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/password/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResetPwd());

    std::shared_ptr<ResetPwdResponse> localVarResult = std::make_shared<ResetPwdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ResetPwdByAdminResponse> MeetingClient::resetPwdByAdmin(ResetPwdByAdminRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/password/admin/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResetPwdByAdmin());

    std::shared_ptr<ResetPwdByAdminResponse> localVarResult = std::make_shared<ResetPwdByAdminResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ResetVisionActiveCodeResponse> MeetingClient::resetVisionActiveCode(ResetVisionActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vision/activecode/{account}/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResetVisionActiveCode());

    std::shared_ptr<ResetVisionActiveCodeResponse> localVarResult = std::make_shared<ResetVisionActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ResumeSimultaneousInterpretationResponse> MeetingClient::resumeSimultaneousInterpretation(ResumeSimultaneousInterpretationRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/simultaneousInterpretation";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForResumeSimultaneousInterpretation());

    std::shared_ptr<ResumeSimultaneousInterpretationResponse> localVarResult = std::make_shared<ResumeSimultaneousInterpretationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<RollcallParticipantResponse> MeetingClient::rollcallParticipant(RollcallParticipantRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/rollCall";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForRollcallParticipant());

    std::shared_ptr<RollcallParticipantResponse> localVarResult = std::make_shared<RollcallParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SaveLayoutResponse> MeetingClient::saveLayout(SaveLayoutRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/layOut";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSaveLayout());

    std::shared_ptr<SaveLayoutResponse> localVarResult = std::make_shared<SaveLayoutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SearchAttendanceRecordsOfHisMeetingResponse> MeetingClient::searchAttendanceRecordsOfHisMeeting(SearchAttendanceRecordsOfHisMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/history/confAttendeeRecord";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchAttendanceRecordsOfHisMeeting());

    std::shared_ptr<SearchAttendanceRecordsOfHisMeetingResponse> localVarResult = std::make_shared<SearchAttendanceRecordsOfHisMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpResponse> MeetingClient::searchCorp(SearchCorpRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorp());

    std::shared_ptr<SearchCorpResponse> localVarResult = std::make_shared<SearchCorpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpAdminsResponse> MeetingClient::searchCorpAdmins(SearchCorpAdminsRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/admin";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorpAdmins());

    std::shared_ptr<SearchCorpAdminsResponse> localVarResult = std::make_shared<SearchCorpAdminsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpDirResponse> MeetingClient::searchCorpDir(SearchCorpDirRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.deptCodeIsSet()) {
        localVarQueryParams["deptCode"] = parameterToString(request.getDeptCode());
    }
    if (request.querySubDeptIsSet()) {
        localVarQueryParams["querySubDept"] = parameterToString(request.isQuerySubDept());
    }
    if (request.searchScopeIsSet()) {
        localVarQueryParams["searchScope"] = parameterToString(request.getSearchScope());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorpDir());

    std::shared_ptr<SearchCorpDirResponse> localVarResult = std::make_shared<SearchCorpDirResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpExternalDirResponse> MeetingClient::searchCorpExternalDir(SearchCorpExternalDirRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/external-contacts";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.searchScopeIsSet()) {
        localVarQueryParams["searchScope"] = parameterToString(request.getSearchScope());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorpExternalDir());

    std::shared_ptr<SearchCorpExternalDirResponse> localVarResult = std::make_shared<SearchCorpExternalDirResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpResourcesResponse> MeetingClient::searchCorpResources(SearchCorpResourcesRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/resource-list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.startExpireDateIsSet()) {
        localVarQueryParams["startExpireDate"] = parameterToString(request.getStartExpireDate());
    }
    if (request.endExpireDateIsSet()) {
        localVarQueryParams["endExpireDate"] = parameterToString(request.getEndExpireDate());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.vmrModeIsSet()) {
        localVarQueryParams["vmrMode"] = parameterToString(request.getVmrMode());
    }
    if (request.typeIdIsSet()) {
        localVarQueryParams["typeId"] = parameterToString(request.getTypeId());
    }
    if (request.orderIdIsSet()) {
        localVarQueryParams["orderId"] = parameterToString(request.getOrderId());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorpResources());

    std::shared_ptr<SearchCorpResourcesResponse> localVarResult = std::make_shared<SearchCorpResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCorpVmrResponse> MeetingClient::searchCorpVmr(SearchCorpVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vmr";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.vmrModeIsSet()) {
        localVarQueryParams["vmrMode"] = parameterToString(request.getVmrMode());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCorpVmr());

    std::shared_ptr<SearchCorpVmrResponse> localVarResult = std::make_shared<SearchCorpVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchCtlRecordsOfHisMeetingResponse> MeetingClient::searchCtlRecordsOfHisMeeting(SearchCtlRecordsOfHisMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/history/confCtlRecord";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchCtlRecordsOfHisMeeting());

    std::shared_ptr<SearchCtlRecordsOfHisMeetingResponse> localVarResult = std::make_shared<SearchCtlRecordsOfHisMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchDepartmentByNameResponse> MeetingClient::searchDepartmentByName(SearchDepartmentByNameRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/dept";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.deptNameIsSet()) {
        localVarQueryParams["deptName"] = parameterToString(request.getDeptName());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchDepartmentByName());

    std::shared_ptr<SearchDepartmentByNameResponse> localVarResult = std::make_shared<SearchDepartmentByNameResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchDevicesResponse> MeetingClient::searchDevices(SearchDevicesRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.modelIsSet()) {
        localVarQueryParams["model"] = parameterToString(request.getModel());
    }
    if (request.deptCodeIsSet()) {
        localVarQueryParams["deptCode"] = parameterToString(request.getDeptCode());
    }
    if (request.enableSubDeptIsSet()) {
        localVarQueryParams["enableSubDept"] = parameterToString(request.isEnableSubDept());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchDevices());

    std::shared_ptr<SearchDevicesResponse> localVarResult = std::make_shared<SearchDevicesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchHisMeetingsResponse> MeetingClient::searchHisMeetings(SearchHisMeetingsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.queryAllIsSet()) {
        localVarQueryParams["queryAll"] = parameterToString(request.isQueryAll());
    }
    if (request.startDateIsSet()) {
        localVarQueryParams["startDate"] = parameterToString(request.getStartDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["endDate"] = parameterToString(request.getEndDate());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchHisMeetings());

    std::shared_ptr<SearchHisMeetingsResponse> localVarResult = std::make_shared<SearchHisMeetingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchMaterialsResponse> MeetingClient::searchMaterials(SearchMaterialsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/materials";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchMaterials());

    std::shared_ptr<SearchMaterialsResponse> localVarResult = std::make_shared<SearchMaterialsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchMeetingFileListResponse> MeetingClient::searchMeetingFileList(SearchMeetingFileListRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/meeting-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchMeetingFileList());

    std::shared_ptr<SearchMeetingFileListResponse> localVarResult = std::make_shared<SearchMeetingFileListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchMeetingsResponse> MeetingClient::searchMeetings(SearchMeetingsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.queryAllIsSet()) {
        localVarQueryParams["queryAll"] = parameterToString(request.isQueryAll());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.queryConfModeIsSet()) {
        localVarQueryParams["queryConfMode"] = parameterToString(request.getQueryConfMode());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchMeetings());

    std::shared_ptr<SearchMeetingsResponse> localVarResult = std::make_shared<SearchMeetingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchMemberVmrResponse> MeetingClient::searchMemberVmr(SearchMemberVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/vmr";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.specialVmrIsSet()) {
        localVarQueryParams["specialVmr"] = parameterToString(request.isSpecialVmr());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchMemberVmr());

    std::shared_ptr<SearchMemberVmrResponse> localVarResult = std::make_shared<SearchMemberVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchOnlineMeetingsResponse> MeetingClient::searchOnlineMeetings(SearchOnlineMeetingsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/online";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.queryAllIsSet()) {
        localVarQueryParams["queryAll"] = parameterToString(request.isQueryAll());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchOnlineMeetings());

    std::shared_ptr<SearchOnlineMeetingsResponse> localVarResult = std::make_shared<SearchOnlineMeetingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchProgramsResponse> MeetingClient::searchPrograms(SearchProgramsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/programs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchPrograms());

    std::shared_ptr<SearchProgramsResponse> localVarResult = std::make_shared<SearchProgramsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchPublicationsResponse> MeetingClient::searchPublications(SearchPublicationsRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/publications";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchPublications());

    std::shared_ptr<SearchPublicationsResponse> localVarResult = std::make_shared<SearchPublicationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchRecordingsResponse> MeetingClient::searchRecordings(SearchRecordingsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/record/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.queryAllIsSet()) {
        localVarQueryParams["queryAll"] = parameterToString(request.isQueryAll());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.startDateIsSet()) {
        localVarQueryParams["startDate"] = parameterToString(request.getStartDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["endDate"] = parameterToString(request.getEndDate());
    }
    if (request.sortTypeIsSet()) {
        localVarQueryParams["sortType"] = parameterToString(request.getSortType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchRecordings());

    std::shared_ptr<SearchRecordingsResponse> localVarResult = std::make_shared<SearchRecordingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchResourceResponse> MeetingClient::searchResource(SearchResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{corp_id}/resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["corp_id"] = parameterToString(request.getCorpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.startExpireDateIsSet()) {
        localVarQueryParams["startExpireDate"] = parameterToString(request.getStartExpireDate());
    }
    if (request.endExpireDateIsSet()) {
        localVarQueryParams["endExpireDate"] = parameterToString(request.getEndExpireDate());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.typeIdIsSet()) {
        localVarQueryParams["typeId"] = parameterToString(request.getTypeId());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchResource());

    std::shared_ptr<SearchResourceResponse> localVarResult = std::make_shared<SearchResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchResourceOpRecordResponse> MeetingClient::searchResourceOpRecord(SearchResourceOpRecordRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{corp_id}/resource-record";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["corp_id"] = parameterToString(request.getCorpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.startExpireDateIsSet()) {
        localVarQueryParams["startExpireDate"] = parameterToString(request.getStartExpireDate());
    }
    if (request.endExpireDateIsSet()) {
        localVarQueryParams["endExpireDate"] = parameterToString(request.getEndExpireDate());
    }
    if (request.startOperateDateIsSet()) {
        localVarQueryParams["startOperateDate"] = parameterToString(request.getStartOperateDate());
    }
    if (request.endOperateDateIsSet()) {
        localVarQueryParams["endOperateDate"] = parameterToString(request.getEndOperateDate());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.typeIdIsSet()) {
        localVarQueryParams["typeId"] = parameterToString(request.getTypeId());
    }
    if (request.operateTypeIsSet()) {
        localVarQueryParams["operateType"] = parameterToString(request.getOperateType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchResourceOpRecord());

    std::shared_ptr<SearchResourceOpRecordResponse> localVarResult = std::make_shared<SearchResourceOpRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchUsersResponse> MeetingClient::searchUsers(SearchUsersRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.sortFieldIsSet()) {
        localVarQueryParams["sortField"] = parameterToString(request.getSortField());
    }
    if (request.isAscIsSet()) {
        localVarQueryParams["isAsc"] = parameterToString(request.isIsAsc());
    }
    if (request.deptCodeIsSet()) {
        localVarQueryParams["deptCode"] = parameterToString(request.getDeptCode());
    }
    if (request.enableSubDeptIsSet()) {
        localVarQueryParams["enableSubDept"] = parameterToString(request.isEnableSubDept());
    }
    if (request.adminTypeIsSet()) {
        localVarQueryParams["adminType"] = parameterToString(request.getAdminType());
    }
    if (request.enableRoomIsSet()) {
        localVarQueryParams["enableRoom"] = parameterToString(request.isEnableRoom());
    }
    if (request.userTypeIsSet()) {
        localVarQueryParams["userType"] = parameterToString(request.getUserType());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.containsUnActiveIsSet()) {
        localVarQueryParams["containsUnActive"] = parameterToString(request.isContainsUnActive());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchUsers());

    std::shared_ptr<SearchUsersResponse> localVarResult = std::make_shared<SearchUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchVisionActiveCodeResponse> MeetingClient::searchVisionActiveCode(SearchVisionActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/vision/activecode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.devTypeIsSet()) {
        localVarQueryParams["devType"] = parameterToString(request.getDevType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchVisionActiveCode());

    std::shared_ptr<SearchVisionActiveCodeResponse> localVarResult = std::make_shared<SearchVisionActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SendSlideVerifyCodeResponse> MeetingClient::sendSlideVerifyCode(SendSlideVerifyCodeRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/auth/slideverifycode/send";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSendSlideVerifyCode());

    std::shared_ptr<SendSlideVerifyCodeResponse> localVarResult = std::make_shared<SendSlideVerifyCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SendVeriCodeForChangePwdResponse> MeetingClient::sendVeriCodeForChangePwd(SendVeriCodeForChangePwdRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/verifycode/send";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSendVeriCodeForChangePwd());

    std::shared_ptr<SendVeriCodeForChangePwdResponse> localVarResult = std::make_shared<SendVeriCodeForChangePwdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SendVeriCodeForUpdateUserInfoResponse> MeetingClient::sendVeriCodeForUpdateUserInfo(SendVeriCodeForUpdateUserInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/verification-code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSendVeriCodeForUpdateUserInfo());

    std::shared_ptr<SendVeriCodeForUpdateUserInfoResponse> localVarResult = std::make_shared<SendVeriCodeForUpdateUserInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetAttendeeLanChannelResponse> MeetingClient::setAttendeeLanChannel(SetAttendeeLanChannelRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/setAttendeeLanChannel";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetAttendeeLanChannel());

    std::shared_ptr<SetAttendeeLanChannelResponse> localVarResult = std::make_shared<SetAttendeeLanChannelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetCohostResponse> MeetingClient::setCohost(SetCohostRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/cohost";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetCohost());

    std::shared_ptr<SetCohostResponse> localVarResult = std::make_shared<SetCohostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetCustomMultiPictureResponse> MeetingClient::setCustomMultiPicture(SetCustomMultiPictureRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/display/customMultiPicture";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetCustomMultiPicture());

    std::shared_ptr<SetCustomMultiPictureResponse> localVarResult = std::make_shared<SetCustomMultiPictureResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetHostViewResponse> MeetingClient::setHostView(SetHostViewRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/chairView";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetHostView());

    std::shared_ptr<SetHostViewResponse> localVarResult = std::make_shared<SetHostViewResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetInterpreterGroupResponse> MeetingClient::setInterpreterGroup(SetInterpreterGroupRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/interpreterGroup";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetInterpreterGroup());

    std::shared_ptr<SetInterpreterGroupResponse> localVarResult = std::make_shared<SetInterpreterGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetMmrLiveResponse> MeetingClient::setMmrLive(SetMmrLiveRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/mmrLive";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetMmrLive());

    std::shared_ptr<SetMmrLiveResponse> localVarResult = std::make_shared<SetMmrLiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetMmrRecordResponse> MeetingClient::setMmrRecord(SetMmrRecordRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/mmrRecord";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetMmrRecord());

    std::shared_ptr<SetMmrRecordResponse> localVarResult = std::make_shared<SetMmrRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetMultiPictureResponse> MeetingClient::setMultiPicture(SetMultiPictureRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/display/multiPicture";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetMultiPicture());

    std::shared_ptr<SetMultiPictureResponse> localVarResult = std::make_shared<SetMultiPictureResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetParticipantViewResponse> MeetingClient::setParticipantView(SetParticipantViewRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/partView";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetParticipantView());

    std::shared_ptr<SetParticipantViewResponse> localVarResult = std::make_shared<SetParticipantViewResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetProfileImageResponse> MeetingClient::setProfileImage(SetProfileImageRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/profile-images";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("multipart/form-data", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetProfileImage());

    std::shared_ptr<SetProfileImageResponse> localVarResult = std::make_shared<SetProfileImageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetRoleResponse> MeetingClient::setRole(SetRoleRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/participants/role";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetRole());

    std::shared_ptr<SetRoleResponse> localVarResult = std::make_shared<SetRoleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetSsoConfigResponse> MeetingClient::setSsoConfig(SetSsoConfigRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/authorizeconfig";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetSsoConfig());

    std::shared_ptr<SetSsoConfigResponse> localVarResult = std::make_shared<SetSsoConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<SetUserProfileImageResponse> MeetingClient::setUserProfileImage(SetUserProfileImageRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/profile-images/{user_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("multipart/form-data", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetUserProfileImage());

    std::shared_ptr<SetUserProfileImageResponse> localVarResult = std::make_shared<SetUserProfileImageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetWebHookConfigResponse> MeetingClient::setWebHookConfig(SetWebHookConfigRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/webhook/link-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetWebHookConfig());

    std::shared_ptr<SetWebHookConfigResponse> localVarResult = std::make_shared<SetWebHookConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowConfOrgResponse> MeetingClient::showConfOrg(ShowConfOrgRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/confOrg";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowConfOrg());

    std::shared_ptr<ShowConfOrgResponse> localVarResult = std::make_shared<ShowConfOrgResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCorpResponse> MeetingClient::showCorp(ShowCorpRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowCorp());

    std::shared_ptr<ShowCorpResponse> localVarResult = std::make_shared<ShowCorpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCorpAdminResponse> MeetingClient::showCorpAdmin(ShowCorpAdminRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/admin/{account}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowCorpAdmin());

    std::shared_ptr<ShowCorpAdminResponse> localVarResult = std::make_shared<ShowCorpAdminResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCorpBasicInfoResponse> MeetingClient::showCorpBasicInfo(ShowCorpBasicInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowCorpBasicInfo());

    std::shared_ptr<ShowCorpBasicInfoResponse> localVarResult = std::make_shared<ShowCorpBasicInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCorpResourceResponse> MeetingClient::showCorpResource(ShowCorpResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowCorpResource());

    std::shared_ptr<ShowCorpResourceResponse> localVarResult = std::make_shared<ShowCorpResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDepartmentResponse> MeetingClient::showDepartment(ShowDepartmentRequest &request)
{
    std::string localVarPath = "/v1/usg/abs/departments/{dept_code}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["dept_code"] = parameterToString(request.getDeptCode());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowDepartment());

    std::shared_ptr<ShowDepartmentResponse> localVarResult = std::make_shared<ShowDepartmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeptAndChildDeptResponse> MeetingClient::showDeptAndChildDept(ShowDeptAndChildDeptRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/dept/{dept_code}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["dept_code"] = parameterToString(request.getDeptCode());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowDeptAndChildDept());

    std::shared_ptr<ShowDeptAndChildDeptResponse> localVarResult = std::make_shared<ShowDeptAndChildDeptResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceDetailResponse> MeetingClient::showDeviceDetail(ShowDeviceDetailRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device/{sn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["sn"] = parameterToString(request.getSn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowDeviceDetail());

    std::shared_ptr<ShowDeviceDetailResponse> localVarResult = std::make_shared<ShowDeviceDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceStatusResponse> MeetingClient::showDeviceStatus(ShowDeviceStatusRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/ap/userstatus";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowDeviceStatus());

    std::shared_ptr<ShowDeviceStatusResponse> localVarResult = std::make_shared<ShowDeviceStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowDeviceTypesResponse> MeetingClient::showDeviceTypes(ShowDeviceTypesRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/termdevtype";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowDeviceTypes());

    std::shared_ptr<ShowDeviceTypesResponse> localVarResult = std::make_shared<ShowDeviceTypesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHisMeetingDetailResponse> MeetingClient::showHisMeetingDetail(ShowHisMeetingDetailRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/history/confDetail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xTypeIsSet()) {
        localVarHeaderParams["X-Type"] = parameterToString(request.getXType());
    }
    if (request.xQueryTypeIsSet()) {
        localVarHeaderParams["X-Query-Type"] = parameterToString(request.getXQueryType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowHisMeetingDetail());

    std::shared_ptr<ShowHisMeetingDetailResponse> localVarResult = std::make_shared<ShowHisMeetingDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowLayoutResponse> MeetingClient::showLayout(ShowLayoutRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/layOut";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowLayout());

    std::shared_ptr<ShowLayoutResponse> localVarResult = std::make_shared<ShowLayoutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMeetingDetailResponse> MeetingClient::showMeetingDetail(ShowMeetingDetailRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/confDetail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xTypeIsSet()) {
        localVarHeaderParams["X-Type"] = parameterToString(request.getXType());
    }
    if (request.xQueryTypeIsSet()) {
        localVarHeaderParams["X-Query-Type"] = parameterToString(request.getXQueryType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowMeetingDetail());

    std::shared_ptr<ShowMeetingDetailResponse> localVarResult = std::make_shared<ShowMeetingDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMeetingFileResponse> MeetingClient::showMeetingFile(ShowMeetingFileRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/meeting-files/{file_code}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["file_code"] = parameterToString(request.getFileCode());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowMeetingFile());

    std::shared_ptr<ShowMeetingFileResponse> localVarResult = std::make_shared<ShowMeetingFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMeetingFileListResponse> MeetingClient::showMeetingFileList(ShowMeetingFileListRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/meeting-files/open-meeting-file-list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowMeetingFileList());

    std::shared_ptr<ShowMeetingFileListResponse> localVarResult = std::make_shared<ShowMeetingFileListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowMgmtSiteStatusResponse> MeetingClient::showMgmtSiteStatus(ShowMgmtSiteStatusRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/confmaintain/queryMgmtSiteStatus";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSchemaTypeIsSet()) {
        localVarHeaderParams["X-Schema-Type"] = parameterToString(request.getXSchemaType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowMgmtSiteStatus());

    std::shared_ptr<ShowMgmtSiteStatusResponse> localVarResult = std::make_shared<ShowMgmtSiteStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMyInfoResponse> MeetingClient::showMyInfo(ShowMyInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowMyInfo());

    std::shared_ptr<ShowMyInfoResponse> localVarResult = std::make_shared<ShowMyInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowOnlineMeetingDetailResponse> MeetingClient::showOnlineMeetingDetail(ShowOnlineMeetingDetailRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/online/confDetail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xTypeIsSet()) {
        localVarHeaderParams["X-Type"] = parameterToString(request.getXType());
    }
    if (request.xQueryTypeIsSet()) {
        localVarHeaderParams["X-Query-Type"] = parameterToString(request.getXQueryType());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowOnlineMeetingDetail());

    std::shared_ptr<ShowOnlineMeetingDetailResponse> localVarResult = std::make_shared<ShowOnlineMeetingDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowOrgResResponse> MeetingClient::showOrgRes(ShowOrgResRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/orgRes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowOrgRes());

    std::shared_ptr<ShowOrgResResponse> localVarResult = std::make_shared<ShowOrgResResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProgramResponse> MeetingClient::showProgram(ShowProgramRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/programs/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowProgram());

    std::shared_ptr<ShowProgramResponse> localVarResult = std::make_shared<ShowProgramResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPublicationResponse> MeetingClient::showPublication(ShowPublicationRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/publications/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowPublication());

    std::shared_ptr<ShowPublicationResponse> localVarResult = std::make_shared<ShowPublicationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRealTimeInfoOfMeetingResponse> MeetingClient::showRealTimeInfoOfMeeting(ShowRealTimeInfoOfMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/realTimeInfo";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRealTimeInfoOfMeeting());

    std::shared_ptr<ShowRealTimeInfoOfMeetingResponse> localVarResult = std::make_shared<ShowRealTimeInfoOfMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRecordInfoResponse> MeetingClient::showRecordInfo(ShowRecordInfoRequest &request)
{
    std::string localVarPath = "/v1/mmc/rlm/record/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRecordInfo());

    std::shared_ptr<ShowRecordInfoResponse> localVarResult = std::make_shared<ShowRecordInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowRecordingDetailResponse> MeetingClient::showRecordingDetail(ShowRecordingDetailRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/record/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRecordingDetail());

    std::shared_ptr<ShowRecordingDetailResponse> localVarResult = std::make_shared<ShowRecordingDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRecordingFileDownloadUrlsResponse> MeetingClient::showRecordingFileDownloadUrls(ShowRecordingFileDownloadUrlsRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/record/downloadurls";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRecordingFileDownloadUrls());

    std::shared_ptr<ShowRecordingFileDownloadUrlsResponse> localVarResult = std::make_shared<ShowRecordingFileDownloadUrlsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRegionInfoOfMeetingResponse> MeetingClient::showRegionInfoOfMeeting(ShowRegionInfoOfMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/region/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRegionInfoOfMeeting());

    std::shared_ptr<ShowRegionInfoOfMeetingResponse> localVarResult = std::make_shared<ShowRegionInfoOfMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRoomSettingResponse> MeetingClient::showRoomSetting(ShowRoomSettingRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/room-setting/{conference_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["conference_id"] = parameterToString(request.getConferenceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowRoomSetting());

    std::shared_ptr<ShowRoomSettingResponse> localVarResult = std::make_shared<ShowRoomSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSpResResponse> MeetingClient::showSpRes(ShowSpResRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/spRes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowSpRes());

    std::shared_ptr<ShowSpResResponse> localVarResult = std::make_shared<ShowSpResResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSpResourceResponse> MeetingClient::showSpResource(ShowSpResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.queryGroupIsSet()) {
        localVarQueryParams["queryGroup"] = parameterToString(request.isQueryGroup());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowSpResource());

    std::shared_ptr<ShowSpResourceResponse> localVarResult = std::make_shared<ShowSpResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSsoConfigResponse> MeetingClient::showSsoConfig(ShowSsoConfigRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/authorizeconfig";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowSsoConfig());

    std::shared_ptr<ShowSsoConfigResponse> localVarResult = std::make_shared<ShowSsoConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowUserDetailResponse> MeetingClient::showUserDetail(ShowUserDetailRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member/{account}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowUserDetail());

    std::shared_ptr<ShowUserDetailResponse> localVarResult = std::make_shared<ShowUserDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWebHookConfigResponse> MeetingClient::showWebHookConfig(ShowWebHookConfigRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/webhook/link-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.corpIdIsSet()) {
        localVarQueryParams["corpId"] = parameterToString(request.getCorpId());
    }
    if (request.spIdIsSet()) {
        localVarQueryParams["spId"] = parameterToString(request.getSpId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowWebHookConfig());

    std::shared_ptr<ShowWebHookConfigResponse> localVarResult = std::make_shared<ShowWebHookConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWebinarResponse> MeetingClient::showWebinar(ShowWebinarRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences/{conference_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["conference_id"] = parameterToString(request.getConferenceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowWebinar());

    std::shared_ptr<ShowWebinarResponse> localVarResult = std::make_shared<ShowWebinarResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartMeetingResponse> MeetingClient::startMeeting(StartMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/start";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForStartMeeting());

    std::shared_ptr<StartMeetingResponse> localVarResult = std::make_shared<StartMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<StopMeetingResponse> MeetingClient::stopMeeting(StopMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForStopMeeting());

    std::shared_ptr<StopMeetingResponse> localVarResult = std::make_shared<StopMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchModeResponse> MeetingClient::switchMode(SwitchModeRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/display/mode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSwitchMode());

    std::shared_ptr<SwitchModeResponse> localVarResult = std::make_shared<SwitchModeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateAppIdResponse> MeetingClient::updateAppId(UpdateAppIdRequest &request)
{
    std::string localVarPath = "/v2/usg/acs/corp/app/{app_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=utf-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateAppId());

    std::shared_ptr<UpdateAppIdResponse> localVarResult = std::make_shared<UpdateAppIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateContactResponse> MeetingClient::updateContact(UpdateContactRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/contact";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateContact());

    std::shared_ptr<UpdateContactResponse> localVarResult = std::make_shared<UpdateContactResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateCorpResponse> MeetingClient::updateCorp(UpdateCorpRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateCorp());

    std::shared_ptr<UpdateCorpResponse> localVarResult = std::make_shared<UpdateCorpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateCorpBasicInfoResponse> MeetingClient::updateCorpBasicInfo(UpdateCorpBasicInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateCorpBasicInfo());

    std::shared_ptr<UpdateCorpBasicInfoResponse> localVarResult = std::make_shared<UpdateCorpBasicInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateDepartmentResponse> MeetingClient::updateDepartment(UpdateDepartmentRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/dept/{dept_code}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["dept_code"] = parameterToString(request.getDeptCode());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateDepartment());

    std::shared_ptr<UpdateDepartmentResponse> localVarResult = std::make_shared<UpdateDepartmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateDeviceResponse> MeetingClient::updateDevice(UpdateDeviceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/device/{sn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["sn"] = parameterToString(request.getSn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateDevice());

    std::shared_ptr<UpdateDeviceResponse> localVarResult = std::make_shared<UpdateDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateMaterialResponse> MeetingClient::updateMaterial(UpdateMaterialRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/materials/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateMaterial());

    std::shared_ptr<UpdateMaterialResponse> localVarResult = std::make_shared<UpdateMaterialResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateMeetingResponse> MeetingClient::updateMeeting(UpdateMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateMeeting());

    std::shared_ptr<UpdateMeetingResponse> localVarResult = std::make_shared<UpdateMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateMemberVmrResponse> MeetingClient::updateMemberVmr(UpdateMemberVmrRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member/vmr/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateMemberVmr());

    std::shared_ptr<UpdateMemberVmrResponse> localVarResult = std::make_shared<UpdateMemberVmrResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateMyInfoResponse> MeetingClient::updateMyInfo(UpdateMyInfoRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/member";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateMyInfo());

    std::shared_ptr<UpdateMyInfoResponse> localVarResult = std::make_shared<UpdateMyInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateProgramResponse> MeetingClient::updateProgram(UpdateProgramRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/programs/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateProgram());

    std::shared_ptr<UpdateProgramResponse> localVarResult = std::make_shared<UpdateProgramResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdatePublicationResponse> MeetingClient::updatePublication(UpdatePublicationRequest &request)
{
    std::string localVarPath = "/v1/usg/sss/publications/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdatePublication());

    std::shared_ptr<UpdatePublicationResponse> localVarResult = std::make_shared<UpdatePublicationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdatePwdResponse> MeetingClient::updatePwd(UpdatePwdRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdatePwd());

    std::shared_ptr<UpdatePwdResponse> localVarResult = std::make_shared<UpdatePwdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateRecurringMeetingResponse> MeetingClient::updateRecurringMeeting(UpdateRecurringMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/cycleconferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateRecurringMeeting());

    std::shared_ptr<UpdateRecurringMeetingResponse> localVarResult = std::make_shared<UpdateRecurringMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateRecurringSubMeetingResponse> MeetingClient::updateRecurringSubMeeting(UpdateRecurringSubMeetingRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/conferences/cyclesubconf";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userUUIDIsSet()) {
        localVarQueryParams["userUUID"] = parameterToString(request.getUserUUID());
    }
    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xAuthorizationTypeIsSet()) {
        localVarHeaderParams["X-Authorization-Type"] = parameterToString(request.getXAuthorizationType());
    }
    if (request.xSiteIdIsSet()) {
        localVarHeaderParams["X-Site-Id"] = parameterToString(request.getXSiteId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateRecurringSubMeeting());

    std::shared_ptr<UpdateRecurringSubMeetingResponse> localVarResult = std::make_shared<UpdateRecurringSubMeetingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateResourceResponse> MeetingClient::updateResource(UpdateResourceRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/sp/corp/{corp_id}/resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["corp_id"] = parameterToString(request.getCorpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateResource());

    std::shared_ptr<UpdateResourceResponse> localVarResult = std::make_shared<UpdateResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateRoomSettingResponse> MeetingClient::updateRoomSetting(UpdateRoomSettingRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/room-setting/{conference_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["conference_id"] = parameterToString(request.getConferenceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateRoomSetting());

    std::shared_ptr<UpdateRoomSettingResponse> localVarResult = std::make_shared<UpdateRoomSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateStartedConfConfigResponse> MeetingClient::updateStartedConfConfig(UpdateStartedConfConfigRequest &request)
{
    std::string localVarPath = "/v1/mmc/control/conferences/updateStartedConfConfig";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.conferenceIDIsSet()) {
        localVarQueryParams["conferenceID"] = parameterToString(request.getConferenceID());
    }
    if (request.xConferenceAuthorizationIsSet()) {
        localVarHeaderParams["X-Conference-Authorization"] = parameterToString(request.getXConferenceAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateStartedConfConfig());

    std::shared_ptr<UpdateStartedConfConfigResponse> localVarResult = std::make_shared<UpdateStartedConfConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateTokenResponse> MeetingClient::updateToken(UpdateTokenRequest &request)
{
    std::string localVarPath = "/v1/usg/acs/token";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIDIsSet()) {
        localVarHeaderParams["X-Request-ID"] = parameterToString(request.getXRequestID());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateToken());

    std::shared_ptr<UpdateTokenResponse> localVarResult = std::make_shared<UpdateTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateUserResponse> MeetingClient::updateUser(UpdateUserRequest &request)
{
    std::string localVarPath = "/v1/usg/dcs/corp/member/{account}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["account"] = parameterToString(request.getAccount());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.accountTypeIsSet()) {
        localVarQueryParams["accountType"] = parameterToString(request.getAccountType());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateUser());

    std::shared_ptr<UpdateUserResponse> localVarResult = std::make_shared<UpdateUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateWebHookConfigStatusResponse> MeetingClient::updateWebHookConfigStatus(UpdateWebHookConfigStatusRequest &request)
{
    std::string localVarPath = "/v1/mmc/management/webhook/change-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateWebHookConfigStatus());

    std::shared_ptr<UpdateWebHookConfigStatusResponse> localVarResult = std::make_shared<UpdateWebHookConfigStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateWebinarResponse> MeetingClient::updateWebinar(UpdateWebinarRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/conferences";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUpdateWebinar());

    std::shared_ptr<UpdateWebinarResponse> localVarResult = std::make_shared<UpdateWebinarResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UploadFileResponse> MeetingClient::uploadFile(UploadFileRequest &request)
{
    std::string localVarPath = "/v1/wss/webinar/open/res/file";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("multipart/form-data", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.acceptLanguageIsSet()) {
        localVarHeaderParams["Accept-Language"] = parameterToString(request.getAcceptLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForUploadFile());

    std::shared_ptr<UploadFileResponse> localVarResult = std::make_shared<UploadFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchQosHistoryMeetingsResponse> MeetingClient::searchQosHistoryMeetings(SearchQosHistoryMeetingsRequest &request)
{
    std::string localVarPath = "/v1/metrics/conferences/history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startDateIsSet()) {
        localVarQueryParams["startDate"] = parameterToString(request.getStartDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["endDate"] = parameterToString(request.getEndDate());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchQosHistoryMeetings());

    std::shared_ptr<SearchQosHistoryMeetingsResponse> localVarResult = std::make_shared<SearchQosHistoryMeetingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchQosOnlineMeetingsResponse> MeetingClient::searchQosOnlineMeetings(SearchQosOnlineMeetingsRequest &request)
{
    std::string localVarPath = "/v1/metrics/conferences/online";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchQosOnlineMeetings());

    std::shared_ptr<SearchQosOnlineMeetingsResponse> localVarResult = std::make_shared<SearchQosOnlineMeetingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchQosParticipantDetailResponse> MeetingClient::searchQosParticipantDetail(SearchQosParticipantDetailRequest &request)
{
    std::string localVarPath = "/v1/metrics/conference/participant/qos";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.confTypeIsSet()) {
        localVarQueryParams["confType"] = parameterToString(request.getConfType());
    }
    if (request.participantIDIsSet()) {
        localVarQueryParams["participantID"] = parameterToString(request.getParticipantID());
    }
    if (request.qosTypeIsSet()) {
        localVarQueryParams["qosType"] = parameterToString(request.getQosType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchQosParticipantDetail());

    std::shared_ptr<SearchQosParticipantDetailResponse> localVarResult = std::make_shared<SearchQosParticipantDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchQosParticipantsResponse> MeetingClient::searchQosParticipants(SearchQosParticipantsRequest &request)
{
    std::string localVarPath = "/v1/metrics/conference/participants";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.confUUIDIsSet()) {
        localVarQueryParams["confUUID"] = parameterToString(request.getConfUUID());
    }
    if (request.confTypeIsSet()) {
        localVarQueryParams["confType"] = parameterToString(request.getConfType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["searchKey"] = parameterToString(request.getSearchKey());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchQosParticipants());

    std::shared_ptr<SearchQosParticipantsResponse> localVarResult = std::make_shared<SearchQosParticipantsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetQosThresholdResponse> MeetingClient::setQosThreshold(SetQosThresholdRequest &request)
{
    std::string localVarPath = "/v1/metrics/conference/threshold";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json; charset=utf-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.thresholdTypeIsSet()) {
        localVarQueryParams["thresholdType"] = parameterToString(request.getThresholdType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSetQosThreshold());

    std::shared_ptr<SetQosThresholdResponse> localVarResult = std::make_shared<SetQosThresholdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowQosThresholdResponse> MeetingClient::showQosThreshold(ShowQosThresholdRequest &request)
{
    std::string localVarPath = "/v1/metrics/conference/threshold";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.thresholdTypeIsSet()) {
        localVarQueryParams["thresholdType"] = parameterToString(request.getThresholdType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForShowQosThreshold());

    std::shared_ptr<ShowQosThresholdResponse> localVarResult = std::make_shared<ShowQosThresholdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchStatisticConferenceInfoResponse> MeetingClient::searchStatisticConferenceInfo(SearchStatisticConferenceInfoRequest &request)
{
    std::string localVarPath = "/v1/metrics/dashboard/statistic/conference/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.timeUnitIsSet()) {
        localVarQueryParams["timeUnit"] = parameterToString(request.getTimeUnit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["startTime"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["endTime"] = parameterToString(request.getEndTime());
    }
    if (request.categoryIsSet()) {
        localVarQueryParams["category"] = parameterToString(request.getCategory());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchStatisticConferenceInfo());

    std::shared_ptr<SearchStatisticConferenceInfoResponse> localVarResult = std::make_shared<SearchStatisticConferenceInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchStatisticConferenceParticipantResponse> MeetingClient::searchStatisticConferenceParticipant(SearchStatisticConferenceParticipantRequest &request)
{
    std::string localVarPath = "/v1/metrics/dashboard/statistic/conference/participant";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.timeUnitIsSet()) {
        localVarQueryParams["timeUnit"] = parameterToString(request.getTimeUnit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["startTime"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["endTime"] = parameterToString(request.getEndTime());
    }
    if (request.categoryIsSet()) {
        localVarQueryParams["category"] = parameterToString(request.getCategory());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchStatisticConferenceParticipant());

    std::shared_ptr<SearchStatisticConferenceParticipantResponse> localVarResult = std::make_shared<SearchStatisticConferenceParticipantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchStatisticResourceInfoResponse> MeetingClient::searchStatisticResourceInfo(SearchStatisticResourceInfoRequest &request)
{
    std::string localVarPath = "/v1/metrics/dashboard/statistic/resource/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.timeUnitIsSet()) {
        localVarQueryParams["timeUnit"] = parameterToString(request.getTimeUnit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["startTime"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["endTime"] = parameterToString(request.getEndTime());
    }
    if (request.categoryIsSet()) {
        localVarQueryParams["category"] = parameterToString(request.getCategory());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchStatisticResourceInfo());

    std::shared_ptr<SearchStatisticResourceInfoResponse> localVarResult = std::make_shared<SearchStatisticResourceInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchStatisticUserInfoResponse> MeetingClient::searchStatisticUserInfo(SearchStatisticUserInfoRequest &request)
{
    std::string localVarPath = "/v1/metrics/dashboard/statistic/user/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.timeUnitIsSet()) {
        localVarQueryParams["timeUnit"] = parameterToString(request.getTimeUnit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["startTime"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["endTime"] = parameterToString(request.getEndTime());
    }
    if (request.categoryIsSet()) {
        localVarQueryParams["category"] = parameterToString(request.getCategory());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MeetingMeta::genRequestDefForSearchStatisticUserInfo());

    std::shared_ptr<SearchStatisticUserInfoResponse> localVarResult = std::make_shared<SearchStatisticUserInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string MeetingClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string MeetingClient::parameterToString(std::string value)
{
    return value;
}

std::string MeetingClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string MeetingClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string MeetingClient::parameterToString(float value)
{
    return toString(value);
}

std::string MeetingClient::parameterToString(double value)
{
    return toString(value);
}

std::string MeetingClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string MeetingClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

