#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussClient.h>
#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussMeta.h>

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
namespace Gaussdbforopengauss {
namespace V3 {

using namespace HuaweiCloud::Sdk::Gaussdbforopengauss::V3::Model;

GaussDBforopenGaussClient::GaussDBforopenGaussClient()
{
}

GaussDBforopenGaussClient::~GaussDBforopenGaussClient()
{
}

ClientBuilder<GaussDBforopenGaussClient> GaussDBforopenGaussClient::newBuilder()
{
    return ClientBuilder<GaussDBforopenGaussClient>("BasicCredentials");
}
std::shared_ptr<AddInstanceTagsResponse> GaussDBforopenGaussClient::addInstanceTags(AddInstanceTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForAddInstanceTags());

    std::shared_ptr<AddInstanceTagsResponse> localVarResult = std::make_shared<AddInstanceTagsResponse>();
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
std::shared_ptr<AllowDbPrivilegesResponse> GaussDBforopenGaussClient::allowDbPrivileges(AllowDbPrivilegesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-privilege";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForAllowDbPrivileges());

    std::shared_ptr<AllowDbPrivilegesResponse> localVarResult = std::make_shared<AllowDbPrivilegesResponse>();
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
std::shared_ptr<AttachEipResponse> GaussDBforopenGaussClient::attachEip(AttachEipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/nodes/{node_id}/public-ip";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["node_id"] = parameterToString(request.getNodeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForAttachEip());

    std::shared_ptr<AttachEipResponse> localVarResult = std::make_shared<AttachEipResponse>();
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
std::shared_ptr<CopyConfigurationResponse> GaussDBforopenGaussClient::copyConfiguration(CopyConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCopyConfiguration());

    std::shared_ptr<CopyConfigurationResponse> localVarResult = std::make_shared<CopyConfigurationResponse>();
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
std::shared_ptr<CreateConfigurationTemplateResponse> GaussDBforopenGaussClient::createConfigurationTemplate(CreateConfigurationTemplateRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateConfigurationTemplate());

    std::shared_ptr<CreateConfigurationTemplateResponse> localVarResult = std::make_shared<CreateConfigurationTemplateResponse>();
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
std::shared_ptr<CreateDatabaseResponse> GaussDBforopenGaussClient::createDatabase(CreateDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/database";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateDatabase());

    std::shared_ptr<CreateDatabaseResponse> localVarResult = std::make_shared<CreateDatabaseResponse>();
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
std::shared_ptr<CreateDatabaseSchemasResponse> GaussDBforopenGaussClient::createDatabaseSchemas(CreateDatabaseSchemasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/schema";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateDatabaseSchemas());

    std::shared_ptr<CreateDatabaseSchemasResponse> localVarResult = std::make_shared<CreateDatabaseSchemasResponse>();
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
std::shared_ptr<CreateDbInstanceResponse> GaussDBforopenGaussClient::createDbInstance(CreateDbInstanceRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateDbInstance());

    std::shared_ptr<CreateDbInstanceResponse> localVarResult = std::make_shared<CreateDbInstanceResponse>();
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
std::shared_ptr<CreateDbUserResponse> GaussDBforopenGaussClient::createDbUser(CreateDbUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-user";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateDbUser());

    std::shared_ptr<CreateDbUserResponse> localVarResult = std::make_shared<CreateDbUserResponse>();
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
std::shared_ptr<CreateInstanceResponse> GaussDBforopenGaussClient::createInstance(CreateInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateInstance());

    std::shared_ptr<CreateInstanceResponse> localVarResult = std::make_shared<CreateInstanceResponse>();
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
std::shared_ptr<CreateManualBackupResponse> GaussDBforopenGaussClient::createManualBackup(CreateManualBackupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateManualBackup());

    std::shared_ptr<CreateManualBackupResponse> localVarResult = std::make_shared<CreateManualBackupResponse>();
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
std::shared_ptr<CreateRestoreInstanceResponse> GaussDBforopenGaussClient::createRestoreInstance(CreateRestoreInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForCreateRestoreInstance());

    std::shared_ptr<CreateRestoreInstanceResponse> localVarResult = std::make_shared<CreateRestoreInstanceResponse>();
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
std::shared_ptr<DeleteConfigurationResponse> GaussDBforopenGaussClient::deleteConfiguration(DeleteConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDeleteConfiguration());

    std::shared_ptr<DeleteConfigurationResponse> localVarResult = std::make_shared<DeleteConfigurationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDatabaseResponse> GaussDBforopenGaussClient::deleteDatabase(DeleteDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/database";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.databaseNameIsSet()) {
        localVarQueryParams["database_name"] = parameterToString(request.getDatabaseName());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDeleteDatabase());

    std::shared_ptr<DeleteDatabaseResponse> localVarResult = std::make_shared<DeleteDatabaseResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteInstanceResponse> GaussDBforopenGaussClient::deleteInstance(DeleteInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDeleteInstance());

    std::shared_ptr<DeleteInstanceResponse> localVarResult = std::make_shared<DeleteInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteJobResponse> GaussDBforopenGaussClient::deleteJob(DeleteJobRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/jobs/{job_id}";

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

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDeleteJob());

    std::shared_ptr<DeleteJobResponse> localVarResult = std::make_shared<DeleteJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteManualBackupResponse> GaussDBforopenGaussClient::deleteManualBackup(DeleteManualBackupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups/{backup_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["backup_id"] = parameterToString(request.getBackupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDeleteManualBackup());

    std::shared_ptr<DeleteManualBackupResponse> localVarResult = std::make_shared<DeleteManualBackupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadBackupResponse> GaussDBforopenGaussClient::downloadBackup(DownloadBackupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backup-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForDownloadBackup());

    std::shared_ptr<DownloadBackupResponse> localVarResult = std::make_shared<DownloadBackupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListApplicableInstancesResponse> GaussDBforopenGaussClient::listApplicableInstances(ListApplicableInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/applicable-instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListApplicableInstances());

    std::shared_ptr<ListApplicableInstancesResponse> localVarResult = std::make_shared<ListApplicableInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAppliedHistoriesResponse> GaussDBforopenGaussClient::listAppliedHistories(ListAppliedHistoriesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/applied-histories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListAppliedHistories());

    std::shared_ptr<ListAppliedHistoriesResponse> localVarResult = std::make_shared<ListAppliedHistoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAvailableFlavorsResponse> GaussDBforopenGaussClient::listAvailableFlavors(ListAvailableFlavorsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/available-flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListAvailableFlavors());

    std::shared_ptr<ListAvailableFlavorsResponse> localVarResult = std::make_shared<ListAvailableFlavorsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBackupsResponse> GaussDBforopenGaussClient::listBackups(ListBackupsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.backupTypeIsSet()) {
        localVarQueryParams["backup_type"] = parameterToString(request.getBackupType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.beginTimeIsSet()) {
        localVarQueryParams["begin_time"] = parameterToString(request.getBeginTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListBackups());

    std::shared_ptr<ListBackupsResponse> localVarResult = std::make_shared<ListBackupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBindedEipsResponse> GaussDBforopenGaussClient::listBindedEips(ListBindedEipsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/public-ips";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListBindedEips());

    std::shared_ptr<ListBindedEipsResponse> localVarResult = std::make_shared<ListBindedEipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListComponentInfosResponse> GaussDBforopenGaussClient::listComponentInfos(ListComponentInfosRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/components";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

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
    if (request.componentTypeIsSet()) {
        localVarQueryParams["component_type"] = parameterToString(request.getComponentType());
    }
    if (request.availabilityZoneIdIsSet()) {
        localVarQueryParams["availability_zone_id"] = parameterToString(request.getAvailabilityZoneId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListComponentInfos());

    std::shared_ptr<ListComponentInfosResponse> localVarResult = std::make_shared<ListComponentInfosResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListConfigurationsResponse> GaussDBforopenGaussClient::listConfigurations(ListConfigurationsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations";

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListConfigurations());

    std::shared_ptr<ListConfigurationsResponse> localVarResult = std::make_shared<ListConfigurationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListConfigurationsDiffResponse> GaussDBforopenGaussClient::listConfigurationsDiff(ListConfigurationsDiffRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/comparison";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListConfigurationsDiff());

    std::shared_ptr<ListConfigurationsDiffResponse> localVarResult = std::make_shared<ListConfigurationsDiffResponse>();
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
std::shared_ptr<ListDatabaseSchemasResponse> GaussDBforopenGaussClient::listDatabaseSchemas(ListDatabaseSchemasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/schemas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.dbNameIsSet()) {
        localVarQueryParams["db_name"] = parameterToString(request.getDbName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDatabaseSchemas());

    std::shared_ptr<ListDatabaseSchemasResponse> localVarResult = std::make_shared<ListDatabaseSchemasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDatabasesResponse> GaussDBforopenGaussClient::listDatabases(ListDatabasesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDatabases());

    std::shared_ptr<ListDatabasesResponse> localVarResult = std::make_shared<ListDatabasesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDatastoresResponse> GaussDBforopenGaussClient::listDatastores(ListDatastoresRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/datastore/versions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDatastores());

    std::shared_ptr<ListDatastoresResponse> localVarResult = std::make_shared<ListDatastoresResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDbBackupsResponse> GaussDBforopenGaussClient::listDbBackups(ListDbBackupsRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/backups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.backupTypeIsSet()) {
        localVarQueryParams["backup_type"] = parameterToString(request.getBackupType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.beginTimeIsSet()) {
        localVarQueryParams["begin_time"] = parameterToString(request.getBeginTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDbBackups());

    std::shared_ptr<ListDbBackupsResponse> localVarResult = std::make_shared<ListDbBackupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDbFlavorsResponse> GaussDBforopenGaussClient::listDbFlavors(ListDbFlavorsRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.versionIsSet()) {
        localVarQueryParams["version"] = parameterToString(request.getVersion());
    }
    if (request.specCodeIsSet()) {
        localVarQueryParams["spec_code"] = parameterToString(request.getSpecCode());
    }
    if (request.haModeIsSet()) {
        localVarQueryParams["ha_mode"] = parameterToString(request.getHaMode());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDbFlavors());

    std::shared_ptr<ListDbFlavorsResponse> localVarResult = std::make_shared<ListDbFlavorsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDbUsersResponse> GaussDBforopenGaussClient::listDbUsers(ListDbUsersRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListDbUsers());

    std::shared_ptr<ListDbUsersResponse> localVarResult = std::make_shared<ListDbUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEpsQuotasResponse> GaussDBforopenGaussClient::listEpsQuotas(ListEpsQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/enterprise-projects/quotas";

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
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListEpsQuotas());

    std::shared_ptr<ListEpsQuotasResponse> localVarResult = std::make_shared<ListEpsQuotasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFlavorsResponse> GaussDBforopenGaussClient::listFlavors(ListFlavorsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.versionIsSet()) {
        localVarQueryParams["version"] = parameterToString(request.getVersion());
    }
    if (request.specCodeIsSet()) {
        localVarQueryParams["spec_code"] = parameterToString(request.getSpecCode());
    }
    if (request.haModeIsSet()) {
        localVarQueryParams["ha_mode"] = parameterToString(request.getHaMode());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListFlavors());

    std::shared_ptr<ListFlavorsResponse> localVarResult = std::make_shared<ListFlavorsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussDbDatastoresResponse> GaussDBforopenGaussClient::listGaussDbDatastores(ListGaussDbDatastoresRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/datastores";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListGaussDbDatastores());

    std::shared_ptr<ListGaussDbDatastoresResponse> localVarResult = std::make_shared<ListGaussDbDatastoresResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListHistoryOperationsResponse> GaussDBforopenGaussClient::listHistoryOperations(ListHistoryOperationsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/histories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListHistoryOperations());

    std::shared_ptr<ListHistoryOperationsResponse> localVarResult = std::make_shared<ListHistoryOperationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInstanceTagsResponse> GaussDBforopenGaussClient::listInstanceTags(ListInstanceTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListInstanceTags());

    std::shared_ptr<ListInstanceTagsResponse> localVarResult = std::make_shared<ListInstanceTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInstancesResponse> GaussDBforopenGaussClient::listInstances(ListInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances";

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
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.datastoreTypeIsSet()) {
        localVarQueryParams["datastore_type"] = parameterToString(request.getDatastoreType());
    }
    if (request.vpcIdIsSet()) {
        localVarQueryParams["vpc_id"] = parameterToString(request.getVpcId());
    }
    if (request.subnetIdIsSet()) {
        localVarQueryParams["subnet_id"] = parameterToString(request.getSubnetId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }
    if (request.chargeModeIsSet()) {
        localVarQueryParams["charge_mode"] = parameterToString(request.getChargeMode());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListInstances());

    std::shared_ptr<ListInstancesResponse> localVarResult = std::make_shared<ListInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInstancesDetailsResponse> GaussDBforopenGaussClient::listInstancesDetails(ListInstancesDetailsRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/instances";

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
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.datastoreTypeIsSet()) {
        localVarQueryParams["datastore_type"] = parameterToString(request.getDatastoreType());
    }
    if (request.vpcIdIsSet()) {
        localVarQueryParams["vpc_id"] = parameterToString(request.getVpcId());
    }
    if (request.subnetIdIsSet()) {
        localVarQueryParams["subnet_id"] = parameterToString(request.getSubnetId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }
    if (request.chargeModeIsSet()) {
        localVarQueryParams["charge_mode"] = parameterToString(request.getChargeMode());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListInstancesDetails());

    std::shared_ptr<ListInstancesDetailsResponse> localVarResult = std::make_shared<ListInstancesDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListParamGroupTemplatesResponse> GaussDBforopenGaussClient::listParamGroupTemplates(ListParamGroupTemplatesRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/configurations";

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListParamGroupTemplates());

    std::shared_ptr<ListParamGroupTemplatesResponse> localVarResult = std::make_shared<ListParamGroupTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPredefinedTagsResponse> GaussDBforopenGaussClient::listPredefinedTags(ListPredefinedTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/predefined-tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListPredefinedTags());

    std::shared_ptr<ListPredefinedTagsResponse> localVarResult = std::make_shared<ListPredefinedTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectTagsResponse> GaussDBforopenGaussClient::listProjectTags(ListProjectTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListProjectTags());

    std::shared_ptr<ListProjectTagsResponse> localVarResult = std::make_shared<ListProjectTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRecycleInstancesResponse> GaussDBforopenGaussClient::listRecycleInstances(ListRecycleInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/recycle-instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceNameIsSet()) {
        localVarQueryParams["instance_name"] = parameterToString(request.getInstanceName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListRecycleInstances());

    std::shared_ptr<ListRecycleInstancesResponse> localVarResult = std::make_shared<ListRecycleInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRestorableInstancesResponse> GaussDBforopenGaussClient::listRestorableInstances(ListRestorableInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/restorable-instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.sourceInstanceIdIsSet()) {
        localVarQueryParams["source_instance_id"] = parameterToString(request.getSourceInstanceId());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.restoreTimeIsSet()) {
        localVarQueryParams["restore_time"] = parameterToString(request.getRestoreTime());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListRestorableInstances());

    std::shared_ptr<ListRestorableInstancesResponse> localVarResult = std::make_shared<ListRestorableInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRestoreTimesResponse> GaussDBforopenGaussClient::listRestoreTimes(ListRestoreTimesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/restore-time";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.dateIsSet()) {
        localVarQueryParams["date"] = parameterToString(request.getDate());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListRestoreTimes());

    std::shared_ptr<ListRestoreTimesResponse> localVarResult = std::make_shared<ListRestoreTimesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListStorageTypesResponse> GaussDBforopenGaussClient::listStorageTypes(ListStorageTypesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/storage-type";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.versionIsSet()) {
        localVarQueryParams["version"] = parameterToString(request.getVersion());
    }
    if (request.haModeIsSet()) {
        localVarQueryParams["ha_mode"] = parameterToString(request.getHaMode());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListStorageTypes());

    std::shared_ptr<ListStorageTypesResponse> localVarResult = std::make_shared<ListStorageTypesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTasksResponse> GaussDBforopenGaussClient::listTasks(ListTasksRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/tasks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForListTasks());

    std::shared_ptr<ListTasksResponse> localVarResult = std::make_shared<ListTasksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ModifyEpsQuotaResponse> GaussDBforopenGaussClient::modifyEpsQuota(ModifyEpsQuotaRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/enterprise-projects/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForModifyEpsQuota());

    std::shared_ptr<ModifyEpsQuotaResponse> localVarResult = std::make_shared<ModifyEpsQuotaResponse>();
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
std::shared_ptr<ResetConfigurationResponse> GaussDBforopenGaussClient::resetConfiguration(ResetConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/reset";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForResetConfiguration());

    std::shared_ptr<ResetConfigurationResponse> localVarResult = std::make_shared<ResetConfigurationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetPwdResponse> GaussDBforopenGaussClient::resetPwd(ResetPwdRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForResetPwd());

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
std::shared_ptr<ResizeInstanceFlavorResponse> GaussDBforopenGaussClient::resizeInstanceFlavor(ResizeInstanceFlavorRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instance/{instance_id}/flavor";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForResizeInstanceFlavor());

    std::shared_ptr<ResizeInstanceFlavorResponse> localVarResult = std::make_shared<ResizeInstanceFlavorResponse>();
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
std::shared_ptr<RestartInstanceResponse> GaussDBforopenGaussClient::restartInstance(RestartInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/restart";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForRestartInstance());

    std::shared_ptr<RestartInstanceResponse> localVarResult = std::make_shared<RestartInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RunInstanceActionResponse> GaussDBforopenGaussClient::runInstanceAction(RunInstanceActionRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForRunInstanceAction());

    std::shared_ptr<RunInstanceActionResponse> localVarResult = std::make_shared<RunInstanceActionResponse>();
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
std::shared_ptr<SetBackupPolicyResponse> GaussDBforopenGaussClient::setBackupPolicy(SetBackupPolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForSetBackupPolicy());

    std::shared_ptr<SetBackupPolicyResponse> localVarResult = std::make_shared<SetBackupPolicyResponse>();
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
std::shared_ptr<SetDbUserPwdResponse> GaussDBforopenGaussClient::setDbUserPwd(SetDbUserPwdRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-user/password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForSetDbUserPwd());

    std::shared_ptr<SetDbUserPwdResponse> localVarResult = std::make_shared<SetDbUserPwdResponse>();
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
std::shared_ptr<SetRecyclePolicyResponse> GaussDBforopenGaussClient::setRecyclePolicy(SetRecyclePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/recycle-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForSetRecyclePolicy());

    std::shared_ptr<SetRecyclePolicyResponse> localVarResult = std::make_shared<SetRecyclePolicyResponse>();
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
std::shared_ptr<ShowBackupPolicyResponse> GaussDBforopenGaussClient::showBackupPolicy(ShowBackupPolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowBackupPolicy());

    std::shared_ptr<ShowBackupPolicyResponse> localVarResult = std::make_shared<ShowBackupPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBalanceStatusResponse> GaussDBforopenGaussClient::showBalanceStatus(ShowBalanceStatusRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/balance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowBalanceStatus());

    std::shared_ptr<ShowBalanceStatusResponse> localVarResult = std::make_shared<ShowBalanceStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowConfigurationDetailResponse> GaussDBforopenGaussClient::showConfigurationDetail(ShowConfigurationDetailRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowConfigurationDetail());

    std::shared_ptr<ShowConfigurationDetailResponse> localVarResult = std::make_shared<ShowConfigurationDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeploymentFormResponse> GaussDBforopenGaussClient::showDeploymentForm(ShowDeploymentFormRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/deployment-form";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.solutionIsSet()) {
        localVarQueryParams["solution"] = parameterToString(request.getSolution());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowDeploymentForm());

    std::shared_ptr<ShowDeploymentFormResponse> localVarResult = std::make_shared<ShowDeploymentFormResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInstanceConfigurationResponse> GaussDBforopenGaussClient::showInstanceConfiguration(ShowInstanceConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowInstanceConfiguration());

    std::shared_ptr<ShowInstanceConfigurationResponse> localVarResult = std::make_shared<ShowInstanceConfigurationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInstanceDiskResponse> GaussDBforopenGaussClient::showInstanceDisk(ShowInstanceDiskRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/volume-usage";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowInstanceDisk());

    std::shared_ptr<ShowInstanceDiskResponse> localVarResult = std::make_shared<ShowInstanceDiskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInstanceParamGroupResponse> GaussDBforopenGaussClient::showInstanceParamGroup(ShowInstanceParamGroupRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/instances/{instance_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowInstanceParamGroup());

    std::shared_ptr<ShowInstanceParamGroupResponse> localVarResult = std::make_shared<ShowInstanceParamGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInstanceSnapshotResponse> GaussDBforopenGaussClient::showInstanceSnapshot(ShowInstanceSnapshotRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instance-snapshot";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.restoreTimeIsSet()) {
        localVarQueryParams["restore_time"] = parameterToString(request.getRestoreTime());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowInstanceSnapshot());

    std::shared_ptr<ShowInstanceSnapshotResponse> localVarResult = std::make_shared<ShowInstanceSnapshotResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobDetailResponse> GaussDBforopenGaussClient::showJobDetail(ShowJobDetailRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/jobs";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowJobDetail());

    std::shared_ptr<ShowJobDetailResponse> localVarResult = std::make_shared<ShowJobDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectQuotasResponse> GaussDBforopenGaussClient::showProjectQuotas(ShowProjectQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/project-quotas";

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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowProjectQuotas());

    std::shared_ptr<ShowProjectQuotasResponse> localVarResult = std::make_shared<ShowProjectQuotasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRecyclePolicyResponse> GaussDBforopenGaussClient::showRecyclePolicy(ShowRecyclePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/recycle-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowRecyclePolicy());

    std::shared_ptr<ShowRecyclePolicyResponse> localVarResult = std::make_shared<ShowRecyclePolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSslCertDownloadLinkResponse> GaussDBforopenGaussClient::showSslCertDownloadLink(ShowSslCertDownloadLinkRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/ssl-cert/download-link";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForShowSslCertDownloadLink());

    std::shared_ptr<ShowSslCertDownloadLinkResponse> localVarResult = std::make_shared<ShowSslCertDownloadLinkResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchConfigurationResponse> GaussDBforopenGaussClient::switchConfiguration(SwitchConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/apply";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForSwitchConfiguration());

    std::shared_ptr<SwitchConfigurationResponse> localVarResult = std::make_shared<SwitchConfigurationResponse>();
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
std::shared_ptr<SwitchShardResponse> GaussDBforopenGaussClient::switchShard(SwitchShardRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/switch-shard";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForSwitchShard());

    std::shared_ptr<SwitchShardResponse> localVarResult = std::make_shared<SwitchShardResponse>();
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
std::shared_ptr<UpdateInstanceConfigurationResponse> GaussDBforopenGaussClient::updateInstanceConfiguration(UpdateInstanceConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForUpdateInstanceConfiguration());

    std::shared_ptr<UpdateInstanceConfigurationResponse> localVarResult = std::make_shared<UpdateInstanceConfigurationResponse>();
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
std::shared_ptr<UpdateInstanceNameResponse> GaussDBforopenGaussClient::updateInstanceName(UpdateInstanceNameRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/name";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForUpdateInstanceName());

    std::shared_ptr<UpdateInstanceNameResponse> localVarResult = std::make_shared<UpdateInstanceNameResponse>();
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
std::shared_ptr<ValidateParaGroupNameResponse> GaussDBforopenGaussClient::validateParaGroupName(ValidateParaGroupNameRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/name-validation";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForValidateParaGroupName());

    std::shared_ptr<ValidateParaGroupNameResponse> localVarResult = std::make_shared<ValidateParaGroupNameResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ValidateWeakPasswordResponse> GaussDBforopenGaussClient::validateWeakPassword(ValidateWeakPasswordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/weak-password-verification";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GaussDBforopenGaussMeta::genRequestDefForValidateWeakPassword());

    std::shared_ptr<ValidateWeakPasswordResponse> localVarResult = std::make_shared<ValidateWeakPasswordResponse>();
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
std::string GaussDBforopenGaussClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string GaussDBforopenGaussClient::parameterToString(std::string value)
{
    return value;
}

std::string GaussDBforopenGaussClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBforopenGaussClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBforopenGaussClient::parameterToString(float value)
{
    return toString(value);
}

std::string GaussDBforopenGaussClient::parameterToString(double value)
{
    return toString(value);
}

std::string GaussDBforopenGaussClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string GaussDBforopenGaussClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

