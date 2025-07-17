#include <huaweicloud/metastudio/v1/MetaStudioClient.h>
#include <huaweicloud/metastudio/v1/MetaStudioMeta.h>

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
namespace Metastudio {
namespace V1 {

using namespace HuaweiCloud::Sdk::Metastudio::V1::Model;

MetaStudioClient::MetaStudioClient()
{
}

MetaStudioClient::~MetaStudioClient()
{
}

ClientBuilder<MetaStudioClient> MetaStudioClient::newBuilder()
{
    return ClientBuilder<MetaStudioClient>("BasicCredentials");
}
std::shared_ptr<CreateActiveCodeResponse> MetaStudioClient::createActiveCode(CreateActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateActiveCode());

    std::shared_ptr<CreateActiveCodeResponse> localVarResult = std::make_shared<CreateActiveCodeResponse>();
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
std::shared_ptr<DeleteActiveCodeResponse> MetaStudioClient::deleteActiveCode(DeleteActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteActiveCode());

    std::shared_ptr<DeleteActiveCodeResponse> localVarResult = std::make_shared<DeleteActiveCodeResponse>();
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
std::shared_ptr<ListActiveCodeResponse> MetaStudioClient::listActiveCode(ListActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code";

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
    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListActiveCode());

    std::shared_ptr<ListActiveCodeResponse> localVarResult = std::make_shared<ListActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetActiveCodeResponse> MetaStudioClient::resetActiveCode(ResetActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code/{active_code_id}/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["active_code_id"] = parameterToString(request.getActiveCodeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForResetActiveCode());

    std::shared_ptr<ResetActiveCodeResponse> localVarResult = std::make_shared<ResetActiveCodeResponse>();
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
std::shared_ptr<ShowActiveCodeResponse> MetaStudioClient::showActiveCode(ShowActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code/{active_code_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["active_code_id"] = parameterToString(request.getActiveCodeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowActiveCode());

    std::shared_ptr<ShowActiveCodeResponse> localVarResult = std::make_shared<ShowActiveCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateActiveCodeResponse> MetaStudioClient::updateActiveCode(UpdateActiveCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/active-code/{active_code_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["active_code_id"] = parameterToString(request.getActiveCodeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateActiveCode());

    std::shared_ptr<UpdateActiveCodeResponse> localVarResult = std::make_shared<UpdateActiveCodeResponse>();
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
std::shared_ptr<CreateAgencyWithRoleTypeResponse> MetaStudioClient::createAgencyWithRoleType(CreateAgencyWithRoleTypeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/agency/{role_type}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["role_type"] = parameterToString(request.getRoleType());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateAgencyWithRoleType());

    std::shared_ptr<CreateAgencyWithRoleTypeResponse> localVarResult = std::make_shared<CreateAgencyWithRoleTypeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAgencyWithRoleTypeResponse> MetaStudioClient::deleteAgencyWithRoleType(DeleteAgencyWithRoleTypeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/agency/{role_type}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["role_type"] = parameterToString(request.getRoleType());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteAgencyWithRoleType());

    std::shared_ptr<DeleteAgencyWithRoleTypeResponse> localVarResult = std::make_shared<DeleteAgencyWithRoleTypeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAgencyResponse> MetaStudioClient::showAgency(ShowAgencyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/agency";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.roleTypeIsSet()) {
        localVarQueryParams["role_type"] = parameterToString(request.getRoleType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAgency());

    std::shared_ptr<ShowAgencyResponse> localVarResult = std::make_shared<ShowAgencyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateAsrVocabularyResponse> MetaStudioClient::createAsrVocabulary(CreateAsrVocabularyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateAsrVocabulary());

    std::shared_ptr<CreateAsrVocabularyResponse> localVarResult = std::make_shared<CreateAsrVocabularyResponse>();
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
std::shared_ptr<DeleteAsrVocabularyResponse> MetaStudioClient::deleteAsrVocabulary(DeleteAsrVocabularyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary/{asr_vocabulary_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asr_vocabulary_id"] = parameterToString(request.getAsrVocabularyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteAsrVocabulary());

    std::shared_ptr<DeleteAsrVocabularyResponse> localVarResult = std::make_shared<DeleteAsrVocabularyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAsrVocabularyResponse> MetaStudioClient::listAsrVocabulary(ListAsrVocabularyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary";

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
    if (request.vocabularyTypeIsSet()) {
        localVarQueryParams["vocabulary_type"] = parameterToString(request.getVocabularyType());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListAsrVocabulary());

    std::shared_ptr<ListAsrVocabularyResponse> localVarResult = std::make_shared<ListAsrVocabularyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAsrVocabularyResponse> MetaStudioClient::showAsrVocabulary(ShowAsrVocabularyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary/{asr_vocabulary_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asr_vocabulary_id"] = parameterToString(request.getAsrVocabularyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAsrVocabulary());

    std::shared_ptr<ShowAsrVocabularyResponse> localVarResult = std::make_shared<ShowAsrVocabularyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAsrVocabularyAssociationResponse> MetaStudioClient::showAsrVocabularyAssociation(ShowAsrVocabularyAssociationRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary/association/{asr_vocabulary_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asr_vocabulary_id"] = parameterToString(request.getAsrVocabularyId());

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAsrVocabularyAssociation());

    std::shared_ptr<ShowAsrVocabularyAssociationResponse> localVarResult = std::make_shared<ShowAsrVocabularyAssociationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAsrVocabularyResponse> MetaStudioClient::updateAsrVocabulary(UpdateAsrVocabularyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/asr-vocabulary/{asr_vocabulary_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asr_vocabulary_id"] = parameterToString(request.getAsrVocabularyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateAsrVocabulary());

    std::shared_ptr<UpdateAsrVocabularyResponse> localVarResult = std::make_shared<UpdateAsrVocabularyResponse>();
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
std::shared_ptr<CreateDialogUrlResponse> MetaStudioClient::createDialogUrl(CreateDialogUrlRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/create-dialog-url";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateDialogUrl());

    std::shared_ptr<CreateDialogUrlResponse> localVarResult = std::make_shared<CreateDialogUrlResponse>();
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
std::shared_ptr<ListSmartChatJobResponse> MetaStudioClient::listSmartChatJob(ListSmartChatJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/smart-chat-rooms/{room_id}/smart-chat-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartChatJob());

    std::shared_ptr<ListSmartChatJobResponse> localVarResult = std::make_shared<ListSmartChatJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSmartChatJobResponse> MetaStudioClient::showSmartChatJob(ShowSmartChatJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/smart-chat-rooms/{room_id}/smart-chat-jobs/{job_id}/state";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowSmartChatJob());

    std::shared_ptr<ShowSmartChatJobResponse> localVarResult = std::make_shared<ShowSmartChatJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartSmartChatJobResponse> MetaStudioClient::startSmartChatJob(StartSmartChatJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/smart-chat-rooms/{room_id}/smart-chat-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForStartSmartChatJob());

    std::shared_ptr<StartSmartChatJobResponse> localVarResult = std::make_shared<StartSmartChatJobResponse>();
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
std::shared_ptr<StopSmartChatJobResponse> MetaStudioClient::stopSmartChatJob(StopSmartChatJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/smart-chat-rooms/{room_id}/smart-chat-jobs/{job_id}/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForStopSmartChatJob());

    std::shared_ptr<StopSmartChatJobResponse> localVarResult = std::make_shared<StopSmartChatJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateDialogReportConfigResponse> MetaStudioClient::createDialogReportConfig(CreateDialogReportConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/dialog-report-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateDialogReportConfig());

    std::shared_ptr<CreateDialogReportConfigResponse> localVarResult = std::make_shared<CreateDialogReportConfigResponse>();
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
std::shared_ptr<DeleteDialogReportConfigResponse> MetaStudioClient::deleteDialogReportConfig(DeleteDialogReportConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/dialog-report-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteDialogReportConfig());

    std::shared_ptr<DeleteDialogReportConfigResponse> localVarResult = std::make_shared<DeleteDialogReportConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDialogReportConfigResponse> MetaStudioClient::showDialogReportConfig(ShowDialogReportConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/dialog-report-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowDialogReportConfig());

    std::shared_ptr<ShowDialogReportConfigResponse> localVarResult = std::make_shared<ShowDialogReportConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDialogReportConfigResponse> MetaStudioClient::updateDialogReportConfig(UpdateDialogReportConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/dialog-report-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateDialogReportConfig());

    std::shared_ptr<UpdateDialogReportConfigResponse> localVarResult = std::make_shared<UpdateDialogReportConfigResponse>();
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
std::shared_ptr<BatchExecuteAssetActionResponse> MetaStudioClient::batchExecuteAssetAction(BatchExecuteAssetActionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/batch-action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForBatchExecuteAssetAction());

    std::shared_ptr<BatchExecuteAssetActionResponse> localVarResult = std::make_shared<BatchExecuteAssetActionResponse>();
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
std::shared_ptr<CreateAssetByReplicationInfoResponse> MetaStudioClient::createAssetByReplicationInfo(CreateAssetByReplicationInfoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets-by-replication-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateAssetByReplicationInfo());

    std::shared_ptr<CreateAssetByReplicationInfoResponse> localVarResult = std::make_shared<CreateAssetByReplicationInfoResponse>();
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
std::shared_ptr<CreateDigitalAssetResponse> MetaStudioClient::createDigitalAsset(CreateDigitalAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }
    if (request.xMSSAuthorizationIsSet()) {
        localVarHeaderParams["X-MSS-Authorization"] = parameterToString(request.getXMSSAuthorization());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateDigitalAsset());

    std::shared_ptr<CreateDigitalAssetResponse> localVarResult = std::make_shared<CreateDigitalAssetResponse>();
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
std::shared_ptr<DeleteAssetResponse> MetaStudioClient::deleteAsset(DeleteAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/{asset_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asset_id"] = parameterToString(request.getAssetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.modeIsSet()) {
        localVarQueryParams["mode"] = parameterToString(request.getMode());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteAsset());

    std::shared_ptr<DeleteAssetResponse> localVarResult = std::make_shared<DeleteAssetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAssetSummaryResponse> MetaStudioClient::listAssetSummary(ListAssetSummaryRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/summarys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListAssetSummary());

    std::shared_ptr<ListAssetSummaryResponse> localVarResult = std::make_shared<ListAssetSummaryResponse>();
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
std::shared_ptr<ListAssetsResponse> MetaStudioClient::listAssets(ListAssetsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.tagCombinationTypeIsSet()) {
        localVarQueryParams["tag_combination_type"] = parameterToString(request.getTagCombinationType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.assetTypeIsSet()) {
        localVarQueryParams["asset_type"] = parameterToString(request.getAssetType());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.assetSourceIsSet()) {
        localVarQueryParams["asset_source"] = parameterToString(request.getAssetSource());
    }
    if (request.assetStateIsSet()) {
        localVarQueryParams["asset_state"] = parameterToString(request.getAssetState());
    }
    if (request.styleIdIsSet()) {
        localVarQueryParams["style_id"] = parameterToString(request.getStyleId());
    }
    if (request.accurateQueryFieldIsSet()) {
        localVarQueryParams["accurate_query_field"] = parameterToString(request.getAccurateQueryField());
    }
    if (request.assetIdIsSet()) {
        localVarQueryParams["asset_id"] = parameterToString(request.getAssetId());
    }
    if (request.sexIsSet()) {
        localVarQueryParams["sex"] = parameterToString(request.getSex());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.systemPropertyIsSet()) {
        localVarQueryParams["system_property"] = parameterToString(request.getSystemProperty());
    }
    if (request.actionEditableIsSet()) {
        localVarQueryParams["action_editable"] = parameterToString(request.isActionEditable());
    }
    if (request.isWithActionLibraryIsSet()) {
        localVarQueryParams["is_with_action_library"] = parameterToString(request.isIsWithActionLibrary());
    }
    if (request.isMovableIsSet()) {
        localVarQueryParams["is_movable"] = parameterToString(request.isIsMovable());
    }
    if (request.voiceProviderIsSet()) {
        localVarQueryParams["voice_provider"] = parameterToString(request.getVoiceProvider());
    }
    if (request.roleIsSet()) {
        localVarQueryParams["role"] = parameterToString(request.getRole());
    }
    if (request.isRealtimeVoiceIsSet()) {
        localVarQueryParams["is_realtime_voice"] = parameterToString(request.isIsRealtimeVoice());
    }
    if (request.humanModel2dVersionIsSet()) {
        localVarQueryParams["human_model_2d_version"] = parameterToString(request.getHumanModel2dVersion());
    }
    if (request.includeDeviceNameIsSet()) {
        localVarQueryParams["include_device_name"] = parameterToString(request.getIncludeDeviceName());
    }
    if (request.excludeDeviceNameIsSet()) {
        localVarQueryParams["exclude_device_name"] = parameterToString(request.getExcludeDeviceName());
    }
    if (request.supportedServiceIsSet()) {
        localVarQueryParams["supported_service"] = parameterToString(request.getSupportedService());
    }
    if (request.appUserIdIsSet()) {
        localVarQueryParams["app_user_id"] = parameterToString(request.getAppUserId());
    }
    if (request.projectGroupIdIsSet()) {
        localVarQueryParams["project_group_id"] = parameterToString(request.getProjectGroupId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListAssets());

    std::shared_ptr<ListAssetsResponse> localVarResult = std::make_shared<ListAssetsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RestoreAssetResponse> MetaStudioClient::restoreAsset(RestoreAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/{asset_id}/restore";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asset_id"] = parameterToString(request.getAssetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForRestoreAsset());

    std::shared_ptr<RestoreAssetResponse> localVarResult = std::make_shared<RestoreAssetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAssetResponse> MetaStudioClient::showAsset(ShowAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/{asset_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asset_id"] = parameterToString(request.getAssetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAsset());

    std::shared_ptr<ShowAssetResponse> localVarResult = std::make_shared<ShowAssetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAssetReplicationInfoResponse> MetaStudioClient::showAssetReplicationInfo(ShowAssetReplicationInfoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/{asset_id}/replication-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asset_id"] = parameterToString(request.getAssetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAssetReplicationInfo());

    std::shared_ptr<ShowAssetReplicationInfoResponse> localVarResult = std::make_shared<ShowAssetReplicationInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDigitalAssetResponse> MetaStudioClient::updateDigitalAsset(UpdateDigitalAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-assets/{asset_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["asset_id"] = parameterToString(request.getAssetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateDigitalAsset());

    std::shared_ptr<UpdateDigitalAssetResponse> localVarResult = std::make_shared<UpdateDigitalAssetResponse>();
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
std::shared_ptr<CreateDigitalHumanBusinessCardResponse> MetaStudioClient::createDigitalHumanBusinessCard(CreateDigitalHumanBusinessCardRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-business-cards";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateDigitalHumanBusinessCard());

    std::shared_ptr<CreateDigitalHumanBusinessCardResponse> localVarResult = std::make_shared<CreateDigitalHumanBusinessCardResponse>();
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
std::shared_ptr<DeleteDigitalHumanBusinessCardResponse> MetaStudioClient::deleteDigitalHumanBusinessCard(DeleteDigitalHumanBusinessCardRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-business-cards/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteDigitalHumanBusinessCard());

    std::shared_ptr<DeleteDigitalHumanBusinessCardResponse> localVarResult = std::make_shared<DeleteDigitalHumanBusinessCardResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDigitalHumanBusinessCardResponse> MetaStudioClient::listDigitalHumanBusinessCard(ListDigitalHumanBusinessCardRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-business-cards";

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.videoAssetNameIsSet()) {
        localVarQueryParams["video_asset_name"] = parameterToString(request.getVideoAssetName());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListDigitalHumanBusinessCard());

    std::shared_ptr<ListDigitalHumanBusinessCardResponse> localVarResult = std::make_shared<ListDigitalHumanBusinessCardResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDigitalHumanBusinessCardResponse> MetaStudioClient::showDigitalHumanBusinessCard(ShowDigitalHumanBusinessCardRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-business-cards/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowDigitalHumanBusinessCard());

    std::shared_ptr<ShowDigitalHumanBusinessCardResponse> localVarResult = std::make_shared<ShowDigitalHumanBusinessCardResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDigitalHumanBusinessCardResponse> MetaStudioClient::updateDigitalHumanBusinessCard(UpdateDigitalHumanBusinessCardRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-business-cards/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateDigitalHumanBusinessCard());

    std::shared_ptr<UpdateDigitalHumanBusinessCardResponse> localVarResult = std::make_shared<UpdateDigitalHumanBusinessCardResponse>();
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
std::shared_ptr<ListDigitalHumanVideoResponse> MetaStudioClient::listDigitalHumanVideo(ListDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-videos";

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.fuzzyQueryFieldIsSet()) {
        localVarQueryParams["fuzzy_query_field"] = parameterToString(request.getFuzzyQueryField());
    }
    if (request.scriptIdIsSet()) {
        localVarQueryParams["script_id"] = parameterToString(request.getScriptId());
    }
    if (request.assetNameIsSet()) {
        localVarQueryParams["asset_name"] = parameterToString(request.getAssetName());
    }
    if (request.jobTypeIsSet()) {
        localVarQueryParams["job_type"] = parameterToString(request.getJobType());
    }
    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListDigitalHumanVideo());

    std::shared_ptr<ListDigitalHumanVideoResponse> localVarResult = std::make_shared<ListDigitalHumanVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Cancel2DDigitalHumanVideoResponse> MetaStudioClient::cancel2DDigitalHumanVideo(Cancel2DDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/2d-digital-human-videos/{job_id}/cancel";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCancel2DDigitalHumanVideo());

    std::shared_ptr<Cancel2DDigitalHumanVideoResponse> localVarResult = std::make_shared<Cancel2DDigitalHumanVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Create2DDigitalHumanVideoResponse> MetaStudioClient::create2DDigitalHumanVideo(Create2DDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/2d-digital-human-videos";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreate2DDigitalHumanVideo());

    std::shared_ptr<Create2DDigitalHumanVideoResponse> localVarResult = std::make_shared<Create2DDigitalHumanVideoResponse>();
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
std::shared_ptr<Show2DDigitalHumanVideoResponse> MetaStudioClient::show2DDigitalHumanVideo(Show2DDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/2d-digital-human-videos/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.showScriptIsSet()) {
        localVarQueryParams["show_script"] = parameterToString(request.isShowScript());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShow2DDigitalHumanVideo());

    std::shared_ptr<Show2DDigitalHumanVideoResponse> localVarResult = std::make_shared<Show2DDigitalHumanVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelPhotoDigitalHumanVideoResponse> MetaStudioClient::cancelPhotoDigitalHumanVideo(CancelPhotoDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/photo-digital-human-videos/{job_id}/cancel";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCancelPhotoDigitalHumanVideo());

    std::shared_ptr<CancelPhotoDigitalHumanVideoResponse> localVarResult = std::make_shared<CancelPhotoDigitalHumanVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreatePhotoDetectionResponse> MetaStudioClient::createPhotoDetection(CreatePhotoDetectionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/photo-detection";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreatePhotoDetection());

    std::shared_ptr<CreatePhotoDetectionResponse> localVarResult = std::make_shared<CreatePhotoDetectionResponse>();
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
std::shared_ptr<CreatePhotoDigitalHumanVideoResponse> MetaStudioClient::createPhotoDigitalHumanVideo(CreatePhotoDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/photo-digital-human-videos";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreatePhotoDigitalHumanVideo());

    std::shared_ptr<CreatePhotoDigitalHumanVideoResponse> localVarResult = std::make_shared<CreatePhotoDigitalHumanVideoResponse>();
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
std::shared_ptr<ShowPhotoDetectionResponse> MetaStudioClient::showPhotoDetection(ShowPhotoDetectionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/photo-detection/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPhotoDetection());

    std::shared_ptr<ShowPhotoDetectionResponse> localVarResult = std::make_shared<ShowPhotoDetectionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPhotoDigitalHumanVideoResponse> MetaStudioClient::showPhotoDigitalHumanVideo(ShowPhotoDigitalHumanVideoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/photo-digital-human-videos/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.showScriptIsSet()) {
        localVarQueryParams["show_script"] = parameterToString(request.isShowScript());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPhotoDigitalHumanVideo());

    std::shared_ptr<ShowPhotoDigitalHumanVideoResponse> localVarResult = std::make_shared<ShowPhotoDigitalHumanVideoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ConfirmFileUploadResponse> MetaStudioClient::confirmFileUpload(ConfirmFileUploadRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/files/{file_id}/complete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["file_id"] = parameterToString(request.getFileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForConfirmFileUpload());

    std::shared_ptr<ConfirmFileUploadResponse> localVarResult = std::make_shared<ConfirmFileUploadResponse>();
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
std::shared_ptr<CreateFileResponse> MetaStudioClient::createFile(CreateFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateFile());

    std::shared_ptr<CreateFileResponse> localVarResult = std::make_shared<CreateFileResponse>();
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
std::shared_ptr<CreateLargeFileResponse> MetaStudioClient::createLargeFile(CreateLargeFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/large-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateLargeFile());

    std::shared_ptr<CreateLargeFileResponse> localVarResult = std::make_shared<CreateLargeFileResponse>();
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
std::shared_ptr<DeleteFileResponse> MetaStudioClient::deleteFile(DeleteFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/files/{file_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["file_id"] = parameterToString(request.getFileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteFile());

    std::shared_ptr<DeleteFileResponse> localVarResult = std::make_shared<DeleteFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateHotQuestionResponse> MetaStudioClient::createHotQuestion(CreateHotQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-question";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateHotQuestion());

    std::shared_ptr<CreateHotQuestionResponse> localVarResult = std::make_shared<CreateHotQuestionResponse>();
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
std::shared_ptr<DeleteHotQuestionResponse> MetaStudioClient::deleteHotQuestion(DeleteHotQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-question/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteHotQuestion());

    std::shared_ptr<DeleteHotQuestionResponse> localVarResult = std::make_shared<DeleteHotQuestionResponse>();
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
std::shared_ptr<ListHotQuestionResponse> MetaStudioClient::listHotQuestion(ListHotQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-question";

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
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListHotQuestion());

    std::shared_ptr<ListHotQuestionResponse> localVarResult = std::make_shared<ListHotQuestionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHotQuestionResponse> MetaStudioClient::showHotQuestion(ShowHotQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-question/{hot_question_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["hot_question_id"] = parameterToString(request.getHotQuestionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowHotQuestion());

    std::shared_ptr<ShowHotQuestionResponse> localVarResult = std::make_shared<ShowHotQuestionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateHotQuestionResponse> MetaStudioClient::updateHotQuestion(UpdateHotQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-question/{hot_question_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["hot_question_id"] = parameterToString(request.getHotQuestionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateHotQuestion());

    std::shared_ptr<UpdateHotQuestionResponse> localVarResult = std::make_shared<UpdateHotQuestionResponse>();
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
std::shared_ptr<CreateHotWordsResponse> MetaStudioClient::createHotWords(CreateHotWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateHotWords());

    std::shared_ptr<CreateHotWordsResponse> localVarResult = std::make_shared<CreateHotWordsResponse>();
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
std::shared_ptr<DeleteHotWordsResponse> MetaStudioClient::deleteHotWords(DeleteHotWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words/{hot_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["hot_words_id"] = parameterToString(request.getHotWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteHotWords());

    std::shared_ptr<DeleteHotWordsResponse> localVarResult = std::make_shared<DeleteHotWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListHotWordsResponse> MetaStudioClient::listHotWords(ListHotWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words";

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
    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.hotWordsTypeIsSet()) {
        localVarQueryParams["hot_words_type"] = parameterToString(request.getHotWordsType());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListHotWords());

    std::shared_ptr<ListHotWordsResponse> localVarResult = std::make_shared<ListHotWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHotWordsResponse> MetaStudioClient::showHotWords(ShowHotWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words/{hot_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["hot_words_id"] = parameterToString(request.getHotWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowHotWords());

    std::shared_ptr<ShowHotWordsResponse> localVarResult = std::make_shared<ShowHotWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHotWordsSwitchResponse> MetaStudioClient::showHotWordsSwitch(ShowHotWordsSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowHotWordsSwitch());

    std::shared_ptr<ShowHotWordsSwitchResponse> localVarResult = std::make_shared<ShowHotWordsSwitchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateHotWordsResponse> MetaStudioClient::updateHotWords(UpdateHotWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words/{hot_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["hot_words_id"] = parameterToString(request.getHotWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateHotWords());

    std::shared_ptr<UpdateHotWordsResponse> localVarResult = std::make_shared<UpdateHotWordsResponse>();
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
std::shared_ptr<UpdateHotWordsSwitchResponse> MetaStudioClient::updateHotWordsSwitch(UpdateHotWordsSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/hot-words-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateHotWordsSwitch());

    std::shared_ptr<UpdateHotWordsSwitchResponse> localVarResult = std::make_shared<UpdateHotWordsSwitchResponse>();
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
std::shared_ptr<CreateInteractionRuleGroupResponse> MetaStudioClient::createInteractionRuleGroup(CreateInteractionRuleGroupRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-interaction-rule-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateInteractionRuleGroup());

    std::shared_ptr<CreateInteractionRuleGroupResponse> localVarResult = std::make_shared<CreateInteractionRuleGroupResponse>();
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
std::shared_ptr<DeleteInteractionRuleGroupResponse> MetaStudioClient::deleteInteractionRuleGroup(DeleteInteractionRuleGroupRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-interaction-rule-groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteInteractionRuleGroup());

    std::shared_ptr<DeleteInteractionRuleGroupResponse> localVarResult = std::make_shared<DeleteInteractionRuleGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInteractionRuleGroupsResponse> MetaStudioClient::listInteractionRuleGroups(ListInteractionRuleGroupsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-interaction-rule-groups";

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
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.groupNameIsSet()) {
        localVarQueryParams["group_name"] = parameterToString(request.getGroupName());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListInteractionRuleGroups());

    std::shared_ptr<ListInteractionRuleGroupsResponse> localVarResult = std::make_shared<ListInteractionRuleGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateInteractionRuleGroupResponse> MetaStudioClient::updateInteractionRuleGroup(UpdateInteractionRuleGroupRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-interaction-rule-groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateInteractionRuleGroup());

    std::shared_ptr<UpdateInteractionRuleGroupResponse> localVarResult = std::make_shared<UpdateInteractionRuleGroupResponse>();
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
std::shared_ptr<CreateIntentAndQuestionResponse> MetaStudioClient::createIntentAndQuestion(CreateIntentAndQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent-question";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateIntentAndQuestion());

    std::shared_ptr<CreateIntentAndQuestionResponse> localVarResult = std::make_shared<CreateIntentAndQuestionResponse>();
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
std::shared_ptr<CreateKnowledgeIntentResponse> MetaStudioClient::createKnowledgeIntent(CreateKnowledgeIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateKnowledgeIntent());

    std::shared_ptr<CreateKnowledgeIntentResponse> localVarResult = std::make_shared<CreateKnowledgeIntentResponse>();
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
std::shared_ptr<DeleteKnowledgeIntentResponse> MetaStudioClient::deleteKnowledgeIntent(DeleteKnowledgeIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteKnowledgeIntent());

    std::shared_ptr<DeleteKnowledgeIntentResponse> localVarResult = std::make_shared<DeleteKnowledgeIntentResponse>();
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
std::shared_ptr<ListKnowledgeIntentResponse> MetaStudioClient::listKnowledgeIntent(ListKnowledgeIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent";

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
    if (request.skillIdIsSet()) {
        localVarQueryParams["skill_id"] = parameterToString(request.getSkillId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListKnowledgeIntent());

    std::shared_ptr<ListKnowledgeIntentResponse> localVarResult = std::make_shared<ListKnowledgeIntentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowKnowledgeIntentResponse> MetaStudioClient::showKnowledgeIntent(ShowKnowledgeIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent/{intent_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["intent_id"] = parameterToString(request.getIntentId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowKnowledgeIntent());

    std::shared_ptr<ShowKnowledgeIntentResponse> localVarResult = std::make_shared<ShowKnowledgeIntentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateKnowledgeIntentResponse> MetaStudioClient::updateKnowledgeIntent(UpdateKnowledgeIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/intent/{intent_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["intent_id"] = parameterToString(request.getIntentId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateKnowledgeIntent());

    std::shared_ptr<UpdateKnowledgeIntentResponse> localVarResult = std::make_shared<UpdateKnowledgeIntentResponse>();
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
std::shared_ptr<CreateBatchKnowledgeQuestionResponse> MetaStudioClient::createBatchKnowledgeQuestion(CreateBatchKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question-batch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateBatchKnowledgeQuestion());

    std::shared_ptr<CreateBatchKnowledgeQuestionResponse> localVarResult = std::make_shared<CreateBatchKnowledgeQuestionResponse>();
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
std::shared_ptr<CreateKnowledgeQuestionResponse> MetaStudioClient::createKnowledgeQuestion(CreateKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateKnowledgeQuestion());

    std::shared_ptr<CreateKnowledgeQuestionResponse> localVarResult = std::make_shared<CreateKnowledgeQuestionResponse>();
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
std::shared_ptr<DeleteKnowledgeQuestionResponse> MetaStudioClient::deleteKnowledgeQuestion(DeleteKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteKnowledgeQuestion());

    std::shared_ptr<DeleteKnowledgeQuestionResponse> localVarResult = std::make_shared<DeleteKnowledgeQuestionResponse>();
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
std::shared_ptr<ListKnowledgeQuestionResponse> MetaStudioClient::listKnowledgeQuestion(ListKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question";

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
    if (request.intentIdIsSet()) {
        localVarQueryParams["intent_id"] = parameterToString(request.getIntentId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListKnowledgeQuestion());

    std::shared_ptr<ListKnowledgeQuestionResponse> localVarResult = std::make_shared<ListKnowledgeQuestionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowKnowledgeQuestionResponse> MetaStudioClient::showKnowledgeQuestion(ShowKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question/{question_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["question_id"] = parameterToString(request.getQuestionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowKnowledgeQuestion());

    std::shared_ptr<ShowKnowledgeQuestionResponse> localVarResult = std::make_shared<ShowKnowledgeQuestionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateBatchKnowledgeQuestionResponse> MetaStudioClient::updateBatchKnowledgeQuestion(UpdateBatchKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question-batch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateBatchKnowledgeQuestion());

    std::shared_ptr<UpdateBatchKnowledgeQuestionResponse> localVarResult = std::make_shared<UpdateBatchKnowledgeQuestionResponse>();
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
std::shared_ptr<UpdateKnowledgeQuestionResponse> MetaStudioClient::updateKnowledgeQuestion(UpdateKnowledgeQuestionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/question/{question_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["question_id"] = parameterToString(request.getQuestionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateKnowledgeQuestion());

    std::shared_ptr<UpdateKnowledgeQuestionResponse> localVarResult = std::make_shared<UpdateKnowledgeQuestionResponse>();
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
std::shared_ptr<CreateKnowledgeSkillResponse> MetaStudioClient::createKnowledgeSkill(CreateKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateKnowledgeSkill());

    std::shared_ptr<CreateKnowledgeSkillResponse> localVarResult = std::make_shared<CreateKnowledgeSkillResponse>();
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
std::shared_ptr<DeleteKnowledgeSkillResponse> MetaStudioClient::deleteKnowledgeSkill(DeleteKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteKnowledgeSkill());

    std::shared_ptr<DeleteKnowledgeSkillResponse> localVarResult = std::make_shared<DeleteKnowledgeSkillResponse>();
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
std::shared_ptr<ExportKnowledgeSkillResponse> MetaStudioClient::exportKnowledgeSkill(ExportKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill/{skill_id}/export";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["skill_id"] = parameterToString(request.getSkillId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.exportTypeIsSet()) {
        localVarQueryParams["export_type"] = parameterToString(request.getExportType());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForExportKnowledgeSkill());

    std::shared_ptr<ExportKnowledgeSkillResponse> localVarResult = std::make_shared<ExportKnowledgeSkillResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListKnowledgeSkillResponse> MetaStudioClient::listKnowledgeSkill(ListKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListKnowledgeSkill());

    std::shared_ptr<ListKnowledgeSkillResponse> localVarResult = std::make_shared<ListKnowledgeSkillResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowKnowledgeSkillResponse> MetaStudioClient::showKnowledgeSkill(ShowKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill/{skill_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["skill_id"] = parameterToString(request.getSkillId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowKnowledgeSkill());

    std::shared_ptr<ShowKnowledgeSkillResponse> localVarResult = std::make_shared<ShowKnowledgeSkillResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateKnowledgeSkillResponse> MetaStudioClient::updateKnowledgeSkill(UpdateKnowledgeSkillRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/knowledge/skill/{skill_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["skill_id"] = parameterToString(request.getSkillId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateKnowledgeSkill());

    std::shared_ptr<UpdateKnowledgeSkillResponse> localVarResult = std::make_shared<UpdateKnowledgeSkillResponse>();
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
std::shared_ptr<CreateLivePlatformResponse> MetaStudioClient::createLivePlatform(CreateLivePlatformRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/platforms";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateLivePlatform());

    std::shared_ptr<CreateLivePlatformResponse> localVarResult = std::make_shared<CreateLivePlatformResponse>();
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
std::shared_ptr<DeleteLivePlatformResponse> MetaStudioClient::deleteLivePlatform(DeleteLivePlatformRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/platforms/{platform_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["platform_id"] = parameterToString(request.getPlatformId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteLivePlatform());

    std::shared_ptr<DeleteLivePlatformResponse> localVarResult = std::make_shared<DeleteLivePlatformResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListLivePlatformProductsResponse> MetaStudioClient::listLivePlatformProducts(ListLivePlatformProductsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/products";

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
    if (request.platformIdIsSet()) {
        localVarQueryParams["platform_id"] = parameterToString(request.getPlatformId());
    }
    if (request.liveIdIsSet()) {
        localVarQueryParams["live_id"] = parameterToString(request.getLiveId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListLivePlatformProducts());

    std::shared_ptr<ListLivePlatformProductsResponse> localVarResult = std::make_shared<ListLivePlatformProductsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListLivePlatformsResponse> MetaStudioClient::listLivePlatforms(ListLivePlatformsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/platforms";

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
    if (request.accessTypeIsSet()) {
        localVarQueryParams["access_type"] = parameterToString(request.getAccessType());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListLivePlatforms());

    std::shared_ptr<ListLivePlatformsResponse> localVarResult = std::make_shared<ListLivePlatformsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowLivePlatformResponse> MetaStudioClient::showLivePlatform(ShowLivePlatformRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/platforms/{platform_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["platform_id"] = parameterToString(request.getPlatformId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowLivePlatform());

    std::shared_ptr<ShowLivePlatformResponse> localVarResult = std::make_shared<ShowLivePlatformResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateLivePlatformResponse> MetaStudioClient::updateLivePlatform(UpdateLivePlatformRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/live-platforms/platforms/{platform_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["platform_id"] = parameterToString(request.getPlatformId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateLivePlatform());

    std::shared_ptr<UpdateLivePlatformResponse> localVarResult = std::make_shared<UpdateLivePlatformResponse>();
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
std::shared_ptr<CreateOnceCodeResponse> MetaStudioClient::createOnceCode(CreateOnceCodeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/once-code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateOnceCode());

    std::shared_ptr<CreateOnceCodeResponse> localVarResult = std::make_shared<CreateOnceCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateMetaStudioOrdersResponse> MetaStudioClient::createMetaStudioOrders(CreateMetaStudioOrdersRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/mss/public/orders";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateMetaStudioOrders());

    std::shared_ptr<CreateMetaStudioOrdersResponse> localVarResult = std::make_shared<CreateMetaStudioOrdersResponse>();
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
std::shared_ptr<BatchDeletePacifyWordsResponse> MetaStudioClient::batchDeletePacifyWords(BatchDeletePacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForBatchDeletePacifyWords());

    std::shared_ptr<BatchDeletePacifyWordsResponse> localVarResult = std::make_shared<BatchDeletePacifyWordsResponse>();
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
std::shared_ptr<CreatePacifyWordsResponse> MetaStudioClient::createPacifyWords(CreatePacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreatePacifyWords());

    std::shared_ptr<CreatePacifyWordsResponse> localVarResult = std::make_shared<CreatePacifyWordsResponse>();
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
std::shared_ptr<DeletePacifyWordsResponse> MetaStudioClient::deletePacifyWords(DeletePacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words/{pacify_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["pacify_words_id"] = parameterToString(request.getPacifyWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeletePacifyWords());

    std::shared_ptr<DeletePacifyWordsResponse> localVarResult = std::make_shared<DeletePacifyWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPacifyWordsResponse> MetaStudioClient::listPacifyWords(ListPacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words";

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
    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.pacifyWordsTypeIsSet()) {
        localVarQueryParams["pacify_words_type"] = parameterToString(request.getPacifyWordsType());
    }
    if (request.intentIsSet()) {
        localVarQueryParams["intent"] = parameterToString(request.getIntent());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListPacifyWords());

    std::shared_ptr<ListPacifyWordsResponse> localVarResult = std::make_shared<ListPacifyWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPacifyWordsResponse> MetaStudioClient::showPacifyWords(ShowPacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words/{pacify_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["pacify_words_id"] = parameterToString(request.getPacifyWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPacifyWords());

    std::shared_ptr<ShowPacifyWordsResponse> localVarResult = std::make_shared<ShowPacifyWordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPacifyWordsIntentResponse> MetaStudioClient::showPacifyWordsIntent(ShowPacifyWordsIntentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words-intent";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPacifyWordsIntent());

    std::shared_ptr<ShowPacifyWordsIntentResponse> localVarResult = std::make_shared<ShowPacifyWordsIntentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPacifyWordsSwitchResponse> MetaStudioClient::showPacifyWordsSwitch(ShowPacifyWordsSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPacifyWordsSwitch());

    std::shared_ptr<ShowPacifyWordsSwitchResponse> localVarResult = std::make_shared<ShowPacifyWordsSwitchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPacifyWordsTriggerTimeResponse> MetaStudioClient::showPacifyWordsTriggerTime(ShowPacifyWordsTriggerTimeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words-time";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPacifyWordsTriggerTime());

    std::shared_ptr<ShowPacifyWordsTriggerTimeResponse> localVarResult = std::make_shared<ShowPacifyWordsTriggerTimeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdatePacifyWordsResponse> MetaStudioClient::updatePacifyWords(UpdatePacifyWordsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words/{pacify_words_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["pacify_words_id"] = parameterToString(request.getPacifyWordsId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdatePacifyWords());

    std::shared_ptr<UpdatePacifyWordsResponse> localVarResult = std::make_shared<UpdatePacifyWordsResponse>();
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
std::shared_ptr<UpdatePacifyWordsSwitchResponse> MetaStudioClient::updatePacifyWordsSwitch(UpdatePacifyWordsSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdatePacifyWordsSwitch());

    std::shared_ptr<UpdatePacifyWordsSwitchResponse> localVarResult = std::make_shared<UpdatePacifyWordsSwitchResponse>();
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
std::shared_ptr<UpdatePacifyWordsTriggerTimeResponse> MetaStudioClient::updatePacifyWordsTriggerTime(UpdatePacifyWordsTriggerTimeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/pacify-words-time";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdatePacifyWordsTriggerTime());

    std::shared_ptr<UpdatePacifyWordsTriggerTimeResponse> localVarResult = std::make_shared<UpdatePacifyWordsTriggerTimeResponse>();
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
std::shared_ptr<CreatePictureModelingByUrlJobResponse> MetaStudioClient::createPictureModelingByUrlJob(CreatePictureModelingByUrlJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human/stylized/picture-modelings-by-url";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreatePictureModelingByUrlJob());

    std::shared_ptr<CreatePictureModelingByUrlJobResponse> localVarResult = std::make_shared<CreatePictureModelingByUrlJobResponse>();
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
std::shared_ptr<CreatePictureModelingJobResponse> MetaStudioClient::createPictureModelingJob(CreatePictureModelingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human/stylized/picture-modelings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("multipart/form-data", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }
    if (request.IsSet()) {
        localVarFormParams["style_id"] = parameterToString(request.getStyleId());
    }
    if (request.IsSet()) {
        localVarFormParams["name"] = parameterToString(request.getName());
    }
    if (request.IsSet()) {
        localVarFormParams["notify_url"] = parameterToString(request.getNotifyUrl());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreatePictureModelingJob());

    std::shared_ptr<CreatePictureModelingJobResponse> localVarResult = std::make_shared<CreatePictureModelingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPictureModelingJobsResponse> MetaStudioClient::listPictureModelingJobs(ListPictureModelingJobsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human/stylized/picture-modelings";

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListPictureModelingJobs());

    std::shared_ptr<ListPictureModelingJobsResponse> localVarResult = std::make_shared<ListPictureModelingJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPictureModelingJobResponse> MetaStudioClient::showPictureModelingJob(ShowPictureModelingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human/stylized/picture-modelings/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowPictureModelingJob());

    std::shared_ptr<ShowPictureModelingJobResponse> localVarResult = std::make_shared<ShowPictureModelingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateProductResponse> MetaStudioClient::createProduct(CreateProductRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateProduct());

    std::shared_ptr<CreateProductResponse> localVarResult = std::make_shared<CreateProductResponse>();
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
std::shared_ptr<DeleteProductResponse> MetaStudioClient::deleteProduct(DeleteProductRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteProduct());

    std::shared_ptr<DeleteProductResponse> localVarResult = std::make_shared<DeleteProductResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProductsResponse> MetaStudioClient::listProducts(ListProductsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products";

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
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListProducts());

    std::shared_ptr<ListProductsResponse> localVarResult = std::make_shared<ListProductsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetProductAssetResponse> MetaStudioClient::setProductAsset(SetProductAssetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products/{product_id}/assets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForSetProductAsset());

    std::shared_ptr<SetProductAssetResponse> localVarResult = std::make_shared<SetProductAssetResponse>();
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
std::shared_ptr<ShowProductResponse> MetaStudioClient::showProduct(ShowProductRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowProduct());

    std::shared_ptr<ShowProductResponse> localVarResult = std::make_shared<ShowProductResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProductResponse> MetaStudioClient::updateProduct(UpdateProductRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateProduct());

    std::shared_ptr<UpdateProductResponse> localVarResult = std::make_shared<UpdateProductResponse>();
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
std::shared_ptr<CreateRobotResponse> MetaStudioClient::createRobot(CreateRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateRobot());

    std::shared_ptr<CreateRobotResponse> localVarResult = std::make_shared<CreateRobotResponse>();
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
std::shared_ptr<DeleteRobotResponse> MetaStudioClient::deleteRobot(DeleteRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteRobot());

    std::shared_ptr<DeleteRobotResponse> localVarResult = std::make_shared<DeleteRobotResponse>();
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
std::shared_ptr<ListRobotResponse> MetaStudioClient::listRobot(ListRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot";

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
    if (request.roomIdIsSet()) {
        localVarQueryParams["room_id"] = parameterToString(request.getRoomId());
    }
    if (request.robotTypeIsSet()) {
        localVarQueryParams["robot_type"] = parameterToString(request.getRobotType());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListRobot());

    std::shared_ptr<ListRobotResponse> localVarResult = std::make_shared<ListRobotResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRobotResponse> MetaStudioClient::showRobot(ShowRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot/{robot_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["robot_id"] = parameterToString(request.getRobotId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowRobot());

    std::shared_ptr<ShowRobotResponse> localVarResult = std::make_shared<ShowRobotResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRobotResponse> MetaStudioClient::updateRobot(UpdateRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot/{robot_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["robot_id"] = parameterToString(request.getRobotId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateRobot());

    std::shared_ptr<UpdateRobotResponse> localVarResult = std::make_shared<UpdateRobotResponse>();
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
std::shared_ptr<ValidateRobotResponse> MetaStudioClient::validateRobot(ValidateRobotRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/robot/validate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForValidateRobot());

    std::shared_ptr<ValidateRobotResponse> localVarResult = std::make_shared<ValidateRobotResponse>();
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
std::shared_ptr<CreateSmartChatRoomResponse> MetaStudioClient::createSmartChatRoom(CreateSmartChatRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-chat-rooms";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateSmartChatRoom());

    std::shared_ptr<CreateSmartChatRoomResponse> localVarResult = std::make_shared<CreateSmartChatRoomResponse>();
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
std::shared_ptr<DeleteSmartChatRoomResponse> MetaStudioClient::deleteSmartChatRoom(DeleteSmartChatRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-chat-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteSmartChatRoom());

    std::shared_ptr<DeleteSmartChatRoomResponse> localVarResult = std::make_shared<DeleteSmartChatRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSmartChatRoomsResponse> MetaStudioClient::listSmartChatRooms(ListSmartChatRoomsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-chat-rooms";

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
    if (request.roomNameIsSet()) {
        localVarQueryParams["room_name"] = parameterToString(request.getRoomName());
    }
    if (request.modelNameIsSet()) {
        localVarQueryParams["model_name"] = parameterToString(request.getModelName());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartChatRooms());

    std::shared_ptr<ListSmartChatRoomsResponse> localVarResult = std::make_shared<ListSmartChatRoomsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSmartChatRoomResponse> MetaStudioClient::showSmartChatRoom(ShowSmartChatRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-chat-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowSmartChatRoom());

    std::shared_ptr<ShowSmartChatRoomResponse> localVarResult = std::make_shared<ShowSmartChatRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateSmartChatRoomResponse> MetaStudioClient::updateSmartChatRoom(UpdateSmartChatRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-chat-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateSmartChatRoom());

    std::shared_ptr<UpdateSmartChatRoomResponse> localVarResult = std::make_shared<UpdateSmartChatRoomResponse>();
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
std::shared_ptr<BatchConfirmLiveCommandsResponse> MetaStudioClient::batchConfirmLiveCommands(BatchConfirmLiveCommandsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs/{job_id}/batch-commands-confirm";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForBatchConfirmLiveCommands());

    std::shared_ptr<BatchConfirmLiveCommandsResponse> localVarResult = std::make_shared<BatchConfirmLiveCommandsResponse>();
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
std::shared_ptr<ExecuteSmartLiveCommandResponse> MetaStudioClient::executeSmartLiveCommand(ExecuteSmartLiveCommandRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs/{job_id}/command";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForExecuteSmartLiveCommand());

    std::shared_ptr<ExecuteSmartLiveCommandResponse> localVarResult = std::make_shared<ExecuteSmartLiveCommandResponse>();
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
std::shared_ptr<ListSmartLiveResponse> MetaStudioClient::listSmartLive(ListSmartLiveRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartLive());

    std::shared_ptr<ListSmartLiveResponse> localVarResult = std::make_shared<ListSmartLiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSmartLiveJobsResponse> MetaStudioClient::listSmartLiveJobs(ListSmartLiveJobsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-jobs";

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.roomNameIsSet()) {
        localVarQueryParams["room_name"] = parameterToString(request.getRoomName());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartLiveJobs());

    std::shared_ptr<ListSmartLiveJobsResponse> localVarResult = std::make_shared<ListSmartLiveJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSmartLiveRuleCommandsResponse> MetaStudioClient::listSmartLiveRuleCommands(ListSmartLiveRuleCommandsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-command/rule-commands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartLiveRuleCommands());

    std::shared_ptr<ListSmartLiveRuleCommandsResponse> localVarResult = std::make_shared<ListSmartLiveRuleCommandsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSmartLiveScriptCommandsResponse> MetaStudioClient::listSmartLiveScriptCommands(ListSmartLiveScriptCommandsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-command/script-commands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartLiveScriptCommands());

    std::shared_ptr<ListSmartLiveScriptCommandsResponse> localVarResult = std::make_shared<ListSmartLiveScriptCommandsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<LiveEventReportResponse> MetaStudioClient::liveEventReport(LiveEventReportRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs/{job_id}/live-event-report";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authKeyIsSet()) {
        localVarQueryParams["auth_key"] = parameterToString(request.getAuthKey());
    }
    if (request.expiresTimeIsSet()) {
        localVarQueryParams["expires_time"] = parameterToString(request.getExpiresTime());
    }
    if (request.refreshUrlIsSet()) {
        localVarQueryParams["refresh_url"] = parameterToString(request.isRefreshUrl());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }
    if (request.xMssAuthKeyIsSet()) {
        localVarHeaderParams["x-mss-auth-key"] = parameterToString(request.getXMssAuthKey());
    }
    if (request.xMssExpiresTimeIsSet()) {
        localVarHeaderParams["x-mss-expires-time"] = parameterToString(request.getXMssExpiresTime());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForLiveEventReport());

    std::shared_ptr<LiveEventReportResponse> localVarResult = std::make_shared<LiveEventReportResponse>();
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
std::shared_ptr<ShowSmartLiveResponse> MetaStudioClient::showSmartLive(ShowSmartLiveRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowSmartLive());

    std::shared_ptr<ShowSmartLiveResponse> localVarResult = std::make_shared<ShowSmartLiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartSmartLiveResponse> MetaStudioClient::startSmartLive(StartSmartLiveRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForStartSmartLive());

    std::shared_ptr<StartSmartLiveResponse> localVarResult = std::make_shared<StartSmartLiveResponse>();
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
std::shared_ptr<StopSmartLiveResponse> MetaStudioClient::stopSmartLive(StopSmartLiveRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/smart-live-jobs/{job_id}/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());
    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForStopSmartLive());

    std::shared_ptr<StopSmartLiveResponse> localVarResult = std::make_shared<StopSmartLiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ConfirmSmarLiveRoomResponse> MetaStudioClient::confirmSmarLiveRoom(ConfirmSmarLiveRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}/confirm";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForConfirmSmarLiveRoom());

    std::shared_ptr<ConfirmSmarLiveRoomResponse> localVarResult = std::make_shared<ConfirmSmarLiveRoomResponse>();
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
std::shared_ptr<CreateSmartLiveRoomResponse> MetaStudioClient::createSmartLiveRoom(CreateSmartLiveRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateSmartLiveRoom());

    std::shared_ptr<CreateSmartLiveRoomResponse> localVarResult = std::make_shared<CreateSmartLiveRoomResponse>();
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
std::shared_ptr<DeleteSmartLiveRoomResponse> MetaStudioClient::deleteSmartLiveRoom(DeleteSmartLiveRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteSmartLiveRoom());

    std::shared_ptr<DeleteSmartLiveRoomResponse> localVarResult = std::make_shared<DeleteSmartLiveRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSmartLiveRoomsResponse> MetaStudioClient::listSmartLiveRooms(ListSmartLiveRoomsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms";

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
    if (request.roomNameIsSet()) {
        localVarQueryParams["room_name"] = parameterToString(request.getRoomName());
    }
    if (request.dhIdIsSet()) {
        localVarQueryParams["dh_id"] = parameterToString(request.getDhId());
    }
    if (request.modelNameIsSet()) {
        localVarQueryParams["model_name"] = parameterToString(request.getModelName());
    }
    if (request.liveStateIsSet()) {
        localVarQueryParams["live_state"] = parameterToString(request.getLiveState());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.roomTypeIsSet()) {
        localVarQueryParams["room_type"] = parameterToString(request.getRoomType());
    }
    if (request.templateOwnTypeIsSet()) {
        localVarQueryParams["template_own_type"] = parameterToString(request.getTemplateOwnType());
    }
    if (request.confirmStateIsSet()) {
        localVarQueryParams["confirm_state"] = parameterToString(request.getConfirmState());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListSmartLiveRooms());

    std::shared_ptr<ListSmartLiveRoomsResponse> localVarResult = std::make_shared<ListSmartLiveRoomsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSmartLiveRoomResponse> MetaStudioClient::showSmartLiveRoom(ShowSmartLiveRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowSmartLiveRoom());

    std::shared_ptr<ShowSmartLiveRoomResponse> localVarResult = std::make_shared<ShowSmartLiveRoomResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateSmartLiveRoomResponse> MetaStudioClient::updateSmartLiveRoom(UpdateSmartLiveRoomRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/smart-live-rooms/{room_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["room_id"] = parameterToString(request.getRoomId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateSmartLiveRoom());

    std::shared_ptr<UpdateSmartLiveRoomResponse> localVarResult = std::make_shared<UpdateSmartLiveRoomResponse>();
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
std::shared_ptr<ListStylesResponse> MetaStudioClient::listStyles(ListStylesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/styles";

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
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListStyles());

    std::shared_ptr<ListStylesResponse> localVarResult = std::make_shared<ListStylesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateSubtitleFileResponse> MetaStudioClient::createSubtitleFile(CreateSubtitleFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/subtitle-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateSubtitleFile());

    std::shared_ptr<CreateSubtitleFileResponse> localVarResult = std::make_shared<CreateSubtitleFileResponse>();
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
std::shared_ptr<ShowSubtitleFileResponse> MetaStudioClient::showSubtitleFile(ShowSubtitleFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/subtitle-files/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowSubtitleFile());

    std::shared_ptr<ShowSubtitleFileResponse> localVarResult = std::make_shared<ShowSubtitleFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CountTenantResourcesResponse> MetaStudioClient::countTenantResources(CountTenantResourcesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/tenants/resources-count";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.businessIsSet()) {
        localVarQueryParams["business"] = parameterToString(request.getBusiness());
    }
    if (request.resourceExpireStartTimeIsSet()) {
        localVarQueryParams["resource_expire_start_time"] = parameterToString(request.getResourceExpireStartTime());
    }
    if (request.resourceExpireEndTimeIsSet()) {
        localVarQueryParams["resource_expire_end_time"] = parameterToString(request.getResourceExpireEndTime());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCountTenantResources());

    std::shared_ptr<CountTenantResourcesResponse> localVarResult = std::make_shared<CountTenantResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTenantResourcesResponse> MetaStudioClient::listTenantResources(ListTenantResourcesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/tenants/resources";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.resourceIsSet()) {
        localVarQueryParams["resource"] = parameterToString(request.getResource());
    }
    if (request.businessIsSet()) {
        localVarQueryParams["business"] = parameterToString(request.getBusiness());
    }
    if (request.resourceSourceIsSet()) {
        localVarQueryParams["resource_source"] = parameterToString(request.getResourceSource());
    }
    if (request.resourceIdIsSet()) {
        localVarQueryParams["resource_id"] = parameterToString(request.getResourceId());
    }
    if (request.orderIdIsSet()) {
        localVarQueryParams["order_id"] = parameterToString(request.getOrderId());
    }
    if (request.chargingModeIsSet()) {
        localVarQueryParams["charging_mode"] = parameterToString(request.getChargingMode());
    }
    if (request.resourceExpireStartTimeIsSet()) {
        localVarQueryParams["resource_expire_start_time"] = parameterToString(request.getResourceExpireStartTime());
    }
    if (request.resourceExpireEndTimeIsSet()) {
        localVarQueryParams["resource_expire_end_time"] = parameterToString(request.getResourceExpireEndTime());
    }
    if (request.subResourceIsSet()) {
        localVarQueryParams["sub_resource"] = parameterToString(request.getSubResource());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListTenantResources());

    std::shared_ptr<ListTenantResourcesResponse> localVarResult = std::make_shared<ListTenantResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResourceUsageResponse> MetaStudioClient::showResourceUsage(ShowResourceUsageRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/tenants/resources-usage";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.resourceIsSet()) {
        localVarQueryParams["resource"] = parameterToString(request.getResource());
    }
    if (request.businessIsSet()) {
        localVarQueryParams["business"] = parameterToString(request.getBusiness());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowResourceUsage());

    std::shared_ptr<ShowResourceUsageResponse> localVarResult = std::make_shared<ShowResourceUsageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CommitVoiceTrainingJobResponse> MetaStudioClient::commitVoiceTrainingJob(CommitVoiceTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCommitVoiceTrainingJob());

    std::shared_ptr<CommitVoiceTrainingJobResponse> localVarResult = std::make_shared<CommitVoiceTrainingJobResponse>();
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
std::shared_ptr<ConfirmTrainingSegmentResponse> MetaStudioClient::confirmTrainingSegment(ConfirmTrainingSegmentRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/training-segment";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.indexIsSet()) {
        localVarQueryParams["index"] = parameterToString(request.getIndex());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForConfirmTrainingSegment());

    std::shared_ptr<ConfirmTrainingSegmentResponse> localVarResult = std::make_shared<ConfirmTrainingSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateTrainingAdvanceJobResponse> MetaStudioClient::createTrainingAdvanceJob(CreateTrainingAdvanceJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/advance-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTrainingAdvanceJob());

    std::shared_ptr<CreateTrainingAdvanceJobResponse> localVarResult = std::make_shared<CreateTrainingAdvanceJobResponse>();
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
std::shared_ptr<CreateTrainingBasicJobResponse> MetaStudioClient::createTrainingBasicJob(CreateTrainingBasicJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/basic-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTrainingBasicJob());

    std::shared_ptr<CreateTrainingBasicJobResponse> localVarResult = std::make_shared<CreateTrainingBasicJobResponse>();
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
std::shared_ptr<CreateTrainingMiddleJobResponse> MetaStudioClient::createTrainingMiddleJob(CreateTrainingMiddleJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/middle-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTrainingMiddleJob());

    std::shared_ptr<CreateTrainingMiddleJobResponse> localVarResult = std::make_shared<CreateTrainingMiddleJobResponse>();
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
std::shared_ptr<DeleteVoiceTrainingJobResponse> MetaStudioClient::deleteVoiceTrainingJob(DeleteVoiceTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteVoiceTrainingJob());

    std::shared_ptr<DeleteVoiceTrainingJobResponse> localVarResult = std::make_shared<DeleteVoiceTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListJobOperationLogResponse> MetaStudioClient::listJobOperationLog(ListJobOperationLogRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}/op-logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListJobOperationLog());

    std::shared_ptr<ListJobOperationLogResponse> localVarResult = std::make_shared<ListJobOperationLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListVoiceTrainingJobResponse> MetaStudioClient::listVoiceTrainingJob(ListVoiceTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs";

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
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.updateUntilIsSet()) {
        localVarQueryParams["update_until"] = parameterToString(request.getUpdateUntil());
    }
    if (request.updateSinceIsSet()) {
        localVarQueryParams["update_since"] = parameterToString(request.getUpdateSince());
    }
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.voiceNameIsSet()) {
        localVarQueryParams["voice_name"] = parameterToString(request.getVoiceName());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.jobTypeIsSet()) {
        localVarQueryParams["job_type"] = parameterToString(request.getJobType());
    }
    if (request.batchNameIsSet()) {
        localVarQueryParams["batch_name"] = parameterToString(request.getBatchName());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListVoiceTrainingJob());

    std::shared_ptr<ListVoiceTrainingJobResponse> localVarResult = std::make_shared<ListVoiceTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetJobBatchNameResponse> MetaStudioClient::setJobBatchName(SetJobBatchNameRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/batch";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForSetJobBatchName());

    std::shared_ptr<SetJobBatchNameResponse> localVarResult = std::make_shared<SetJobBatchNameResponse>();
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
std::shared_ptr<ShowJobAuditResultResponse> MetaStudioClient::showJobAuditResult(ShowJobAuditResultRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}/audit-result";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowJobAuditResult());

    std::shared_ptr<ShowJobAuditResultResponse> localVarResult = std::make_shared<ShowJobAuditResultResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobUploadingAddressResponse> MetaStudioClient::showJobUploadingAddress(ShowJobUploadingAddressRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}/uploading-address-url";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowJobUploadingAddress());

    std::shared_ptr<ShowJobUploadingAddressResponse> localVarResult = std::make_shared<ShowJobUploadingAddressResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTenantDurationCfgResponse> MetaStudioClient::showTenantDurationCfg(ShowTenantDurationCfgRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/tenant-duration-cfg";

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
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowTenantDurationCfg());

    std::shared_ptr<ShowTenantDurationCfgResponse> localVarResult = std::make_shared<ShowTenantDurationCfgResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTrainingSegmentInfoResponse> MetaStudioClient::showTrainingSegmentInfo(ShowTrainingSegmentInfoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/training-segment";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowTrainingSegmentInfo());

    std::shared_ptr<ShowTrainingSegmentInfoResponse> localVarResult = std::make_shared<ShowTrainingSegmentInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVoiceTrainingJobResponse> MetaStudioClient::showVoiceTrainingJob(ShowVoiceTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/voice-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowVoiceTrainingJob());

    std::shared_ptr<ShowVoiceTrainingJobResponse> localVarResult = std::make_shared<ShowVoiceTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Create2dModelTrainingJobResponse> MetaStudioClient::create2dModelTrainingJob(Create2dModelTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreate2dModelTrainingJob());

    std::shared_ptr<Create2dModelTrainingJobResponse> localVarResult = std::make_shared<Create2dModelTrainingJobResponse>();
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
std::shared_ptr<Delete2dModelTrainingJobResponse> MetaStudioClient::delete2dModelTrainingJob(Delete2dModelTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDelete2dModelTrainingJob());

    std::shared_ptr<Delete2dModelTrainingJobResponse> localVarResult = std::make_shared<Delete2dModelTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Execute2dModelTrainingCommandByUserResponse> MetaStudioClient::execute2dModelTrainingCommandByUser(Execute2dModelTrainingCommandByUserRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs/{job_id}/command";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForExecute2dModelTrainingCommandByUser());

    std::shared_ptr<Execute2dModelTrainingCommandByUserResponse> localVarResult = std::make_shared<Execute2dModelTrainingCommandByUserResponse>();
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
std::shared_ptr<List2dModelTrainingJobResponse> MetaStudioClient::list2dModelTrainingJob(List2dModelTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs";

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
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.createUntilIsSet()) {
        localVarQueryParams["create_until"] = parameterToString(request.getCreateUntil());
    }
    if (request.createSinceIsSet()) {
        localVarQueryParams["create_since"] = parameterToString(request.getCreateSince());
    }
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.queryProjectIdIsSet()) {
        localVarQueryParams["query_project_id"] = parameterToString(request.getQueryProjectId());
    }
    if (request.batchNameIsSet()) {
        localVarQueryParams["batch_name"] = parameterToString(request.getBatchName());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.modelResolutionIsSet()) {
        localVarQueryParams["model_resolution"] = parameterToString(request.getModelResolution());
    }
    if (request.isFlexusIsSet()) {
        localVarQueryParams["is_flexus"] = parameterToString(request.isIsFlexus());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForList2dModelTrainingJob());

    std::shared_ptr<List2dModelTrainingJobResponse> localVarResult = std::make_shared<List2dModelTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Show2dModelTrainingJobResponse> MetaStudioClient::show2dModelTrainingJob(Show2dModelTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShow2dModelTrainingJob());

    std::shared_ptr<Show2dModelTrainingJobResponse> localVarResult = std::make_shared<Show2dModelTrainingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<Update2dModelTrainingJobResponse> MetaStudioClient::update2dModelTrainingJob(Update2dModelTrainingJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-training-manage/user/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdate2dModelTrainingJob());

    std::shared_ptr<Update2dModelTrainingJobResponse> localVarResult = std::make_shared<Update2dModelTrainingJobResponse>();
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
std::shared_ptr<CreateFacialAnimationsResponse> MetaStudioClient::createFacialAnimations(CreateFacialAnimationsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsa/fas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=utf-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateFacialAnimations());

    std::shared_ptr<CreateFacialAnimationsResponse> localVarResult = std::make_shared<CreateFacialAnimationsResponse>();
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
std::shared_ptr<CreateTtsaResponse> MetaStudioClient::createTtsa(CreateTtsaRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsa-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTtsa());

    std::shared_ptr<CreateTtsaResponse> localVarResult = std::make_shared<CreateTtsaResponse>();
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
std::shared_ptr<ListFacialAnimationsDataResponse> MetaStudioClient::listFacialAnimationsData(ListFacialAnimationsDataRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/fas-jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListFacialAnimationsData());

    std::shared_ptr<ListFacialAnimationsDataResponse> localVarResult = std::make_shared<ListFacialAnimationsDataResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTtsaDataResponse> MetaStudioClient::listTtsaData(ListTtsaDataRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsa-jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListTtsaData());

    std::shared_ptr<ListTtsaDataResponse> localVarResult = std::make_shared<ListTtsaDataResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTtsaJobsResponse> MetaStudioClient::listTtsaJobs(ListTtsaJobsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsa-jobs";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListTtsaJobs());

    std::shared_ptr<ListTtsaJobsResponse> localVarResult = std::make_shared<ListTtsaJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateAsyncTtsJobResponse> MetaStudioClient::createAsyncTtsJob(CreateAsyncTtsJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/async-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateAsyncTtsJob());

    std::shared_ptr<CreateAsyncTtsJobResponse> localVarResult = std::make_shared<CreateAsyncTtsJobResponse>();
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
std::shared_ptr<CreateTtsAuditionResponse> MetaStudioClient::createTtsAudition(CreateTtsAuditionRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/audition";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTtsAudition());

    std::shared_ptr<CreateTtsAuditionResponse> localVarResult = std::make_shared<CreateTtsAuditionResponse>();
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
std::shared_ptr<CreateTtscVocabularyConfigsResponse> MetaStudioClient::createTtscVocabularyConfigs(CreateTtscVocabularyConfigsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/vocabulary-configs";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateTtscVocabularyConfigs());

    std::shared_ptr<CreateTtscVocabularyConfigsResponse> localVarResult = std::make_shared<CreateTtscVocabularyConfigsResponse>();
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
std::shared_ptr<DeleteTtscVocabularyConfigsResponse> MetaStudioClient::deleteTtscVocabularyConfigs(DeleteTtscVocabularyConfigsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/vocabulary-configs";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteTtscVocabularyConfigs());

    std::shared_ptr<DeleteTtscVocabularyConfigsResponse> localVarResult = std::make_shared<DeleteTtscVocabularyConfigsResponse>();
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
std::shared_ptr<ListTtscVocabularyConfigsResponse> MetaStudioClient::listTtscVocabularyConfigs(ListTtscVocabularyConfigsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/vocabulary-configs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.ttsServiceNameIsSet()) {
        localVarQueryParams["tts_service_name"] = parameterToString(request.getTtsServiceName());
    }
    if (request.isVocabularyConfigEnableIsSet()) {
        localVarQueryParams["is_vocabulary_config_enable"] = parameterToString(request.getIsVocabularyConfigEnable());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.searchKeyIsSet()) {
        localVarQueryParams["search_key"] = parameterToString(request.getSearchKey());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListTtscVocabularyConfigs());

    std::shared_ptr<ListTtscVocabularyConfigsResponse> localVarResult = std::make_shared<ListTtscVocabularyConfigsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SaveTtscVocabularyConfigsResponse> MetaStudioClient::saveTtscVocabularyConfigs(SaveTtscVocabularyConfigsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/vocabulary-configs/{vocabulary_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["vocabulary_id"] = parameterToString(request.getVocabularyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForSaveTtscVocabularyConfigs());

    std::shared_ptr<SaveTtscVocabularyConfigsResponse> localVarResult = std::make_shared<SaveTtscVocabularyConfigsResponse>();
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
std::shared_ptr<ShowAsyncTtsJobResponse> MetaStudioClient::showAsyncTtsJob(ShowAsyncTtsJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/async-jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowAsyncTtsJob());

    std::shared_ptr<ShowAsyncTtsJobResponse> localVarResult = std::make_shared<ShowAsyncTtsJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTtsAuditionFileResponse> MetaStudioClient::showTtsAuditionFile(ShowTtsAuditionFileRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/audition-file/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowTtsAuditionFile());

    std::shared_ptr<ShowTtsAuditionFileResponse> localVarResult = std::make_shared<ShowTtsAuditionFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTtsPhoneticSymbolResponse> MetaStudioClient::showTtsPhoneticSymbol(ShowTtsPhoneticSymbolRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ttsc/phonetic-symbol";

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
    if (request.wordIsSet()) {
        localVarQueryParams["word"] = parameterToString(request.getWord());
    }
    if (request.xRequestIdIsSet()) {
        localVarHeaderParams["X-Request-Id"] = parameterToString(request.getXRequestId());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowTtsPhoneticSymbol());

    std::shared_ptr<ShowTtsPhoneticSymbolResponse> localVarResult = std::make_shared<ShowTtsPhoneticSymbolResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateVideoMotionCaptureJobResponse> MetaStudioClient::createVideoMotionCaptureJob(CreateVideoMotionCaptureJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/video-motion-capture-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }
    if (request.xUserPrivilegeIsSet()) {
        localVarHeaderParams["X-User-Privilege"] = parameterToString(request.getXUserPrivilege());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateVideoMotionCaptureJob());

    std::shared_ptr<CreateVideoMotionCaptureJobResponse> localVarResult = std::make_shared<CreateVideoMotionCaptureJobResponse>();
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
std::shared_ptr<ExecuteVideoMotionCaptureCommandResponse> MetaStudioClient::executeVideoMotionCaptureCommand(ExecuteVideoMotionCaptureCommandRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/video-motion-capture-jobs/{job_id}/command";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForExecuteVideoMotionCaptureCommand());

    std::shared_ptr<ExecuteVideoMotionCaptureCommandResponse> localVarResult = std::make_shared<ExecuteVideoMotionCaptureCommandResponse>();
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
std::shared_ptr<ListVideoMotionCaptureJobsResponse> MetaStudioClient::listVideoMotionCaptureJobs(ListVideoMotionCaptureJobsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/video-motion-capture-jobs";

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
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListVideoMotionCaptureJobs());

    std::shared_ptr<ListVideoMotionCaptureJobsResponse> localVarResult = std::make_shared<ListVideoMotionCaptureJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVideoMotionCaptureJobResponse> MetaStudioClient::showVideoMotionCaptureJob(ShowVideoMotionCaptureJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/video-motion-capture-jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowVideoMotionCaptureJob());

    std::shared_ptr<ShowVideoMotionCaptureJobResponse> localVarResult = std::make_shared<ShowVideoMotionCaptureJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StopVideoMotionCaptureJobResponse> MetaStudioClient::stopVideoMotionCaptureJob(StopVideoMotionCaptureJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/video-motion-capture-jobs/{job_id}/finish";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForStopVideoMotionCaptureJob());

    std::shared_ptr<StopVideoMotionCaptureJobResponse> localVarResult = std::make_shared<StopVideoMotionCaptureJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CopyVideoScriptsResponse> MetaStudioClient::copyVideoScripts(CopyVideoScriptsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts/{script_id}/copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["script_id"] = parameterToString(request.getScriptId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCopyVideoScripts());

    std::shared_ptr<CopyVideoScriptsResponse> localVarResult = std::make_shared<CopyVideoScriptsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateVideoScriptsResponse> MetaStudioClient::createVideoScripts(CreateVideoScriptsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateVideoScripts());

    std::shared_ptr<CreateVideoScriptsResponse> localVarResult = std::make_shared<CreateVideoScriptsResponse>();
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
std::shared_ptr<DeleteVideoScriptResponse> MetaStudioClient::deleteVideoScript(DeleteVideoScriptRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts/{script_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["script_id"] = parameterToString(request.getScriptId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteVideoScript());

    std::shared_ptr<DeleteVideoScriptResponse> localVarResult = std::make_shared<DeleteVideoScriptResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListVideoScriptsResponse> MetaStudioClient::listVideoScripts(ListVideoScriptsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts";

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
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.scriptCatalogIsSet()) {
        localVarQueryParams["script_catalog"] = parameterToString(request.getScriptCatalog());
    }
    if (request.viewModeIsSet()) {
        localVarQueryParams["view_mode"] = parameterToString(request.getViewMode());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListVideoScripts());

    std::shared_ptr<ListVideoScriptsResponse> localVarResult = std::make_shared<ListVideoScriptsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVideoScriptResponse> MetaStudioClient::showVideoScript(ShowVideoScriptRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts/{script_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["script_id"] = parameterToString(request.getScriptId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowVideoScript());

    std::shared_ptr<ShowVideoScriptResponse> localVarResult = std::make_shared<ShowVideoScriptResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateVideoScriptResponse> MetaStudioClient::updateVideoScript(UpdateVideoScriptRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-video-scripts/{script_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["script_id"] = parameterToString(request.getScriptId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateVideoScript());

    std::shared_ptr<UpdateVideoScriptResponse> localVarResult = std::make_shared<UpdateVideoScriptResponse>();
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
std::shared_ptr<CreateWelcomeSpeechResponse> MetaStudioClient::createWelcomeSpeech(CreateWelcomeSpeechRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForCreateWelcomeSpeech());

    std::shared_ptr<CreateWelcomeSpeechResponse> localVarResult = std::make_shared<CreateWelcomeSpeechResponse>();
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
std::shared_ptr<DeleteWelcomeSpeechResponse> MetaStudioClient::deleteWelcomeSpeech(DeleteWelcomeSpeechRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForDeleteWelcomeSpeech());

    std::shared_ptr<DeleteWelcomeSpeechResponse> localVarResult = std::make_shared<DeleteWelcomeSpeechResponse>();
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
std::shared_ptr<ListWelcomeSpeechResponse> MetaStudioClient::listWelcomeSpeech(ListWelcomeSpeechRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech";

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
    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForListWelcomeSpeech());

    std::shared_ptr<ListWelcomeSpeechResponse> localVarResult = std::make_shared<ListWelcomeSpeechResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWelcomeSpeechResponse> MetaStudioClient::showWelcomeSpeech(ShowWelcomeSpeechRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech/{welcome_speech_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["welcome_speech_id"] = parameterToString(request.getWelcomeSpeechId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowWelcomeSpeech());

    std::shared_ptr<ShowWelcomeSpeechResponse> localVarResult = std::make_shared<ShowWelcomeSpeechResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWelcomeSpeechSwitchResponse> MetaStudioClient::showWelcomeSpeechSwitch(ShowWelcomeSpeechSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.robotIdIsSet()) {
        localVarQueryParams["robot_id"] = parameterToString(request.getRobotId());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForShowWelcomeSpeechSwitch());

    std::shared_ptr<ShowWelcomeSpeechSwitchResponse> localVarResult = std::make_shared<ShowWelcomeSpeechSwitchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateWelcomeSpeechResponse> MetaStudioClient::updateWelcomeSpeech(UpdateWelcomeSpeechRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech/{welcome_speech_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["welcome_speech_id"] = parameterToString(request.getWelcomeSpeechId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateWelcomeSpeech());

    std::shared_ptr<UpdateWelcomeSpeechResponse> localVarResult = std::make_shared<UpdateWelcomeSpeechResponse>();
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
std::shared_ptr<UpdateWelcomeSpeechSwitchResponse> MetaStudioClient::updateWelcomeSpeechSwitch(UpdateWelcomeSpeechSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/digital-human-chat/welcome-speech-switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizationIsSet()) {
        localVarHeaderParams["Authorization"] = parameterToString(request.getAuthorization());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }
    if (request.xProjectIdIsSet()) {
        localVarHeaderParams["X-Project-Id"] = parameterToString(request.getXProjectId());
    }
    if (request.xAppUserIdIsSet()) {
        localVarHeaderParams["X-App-UserId"] = parameterToString(request.getXAppUserId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, MetaStudioMeta::genRequestDefForUpdateWelcomeSpeechSwitch());

    std::shared_ptr<UpdateWelcomeSpeechSwitchResponse> localVarResult = std::make_shared<UpdateWelcomeSpeechSwitchResponse>();
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
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string MetaStudioClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string MetaStudioClient::parameterToString(std::string value)
{
    return value;
}

std::string MetaStudioClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string MetaStudioClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string MetaStudioClient::parameterToString(float value)
{
    return toString(value);
}

std::string MetaStudioClient::parameterToString(double value)
{
    return toString(value);
}

std::string MetaStudioClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string MetaStudioClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

