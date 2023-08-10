#include <huaweicloud/gaussdb/v3/GaussDBClient.h>
#include <huaweicloud/core/utils/MultipartFormData.h>

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
namespace Gaussdb {
namespace V3 {

using namespace HuaweiCloud::Sdk::Gaussdb::V3::Model;

GaussDBClient::GaussDBClient()
{
}

GaussDBClient::~GaussDBClient()
{
}

ClientBuilder<GaussDBClient> GaussDBClient::newBuilder()
{
    return ClientBuilder<GaussDBClient>("BasicCredentials");
}
std::shared_ptr<AddDatabasePermissionResponse> GaussDBClient::addDatabasePermission(AddDatabasePermissionRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users/privilege";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<AddDatabasePermissionResponse> localVarResult = std::make_shared<AddDatabasePermissionResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BatchTagActionResponse> GaussDBClient::batchTagAction(BatchTagActionRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/tags/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<BatchTagActionResponse> localVarResult = std::make_shared<BatchTagActionResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelGaussMySqlInstanceEipResponse> GaussDBClient::cancelGaussMySqlInstanceEip(CancelGaussMySqlInstanceEipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/public-ips/unbind";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CancelGaussMySqlInstanceEipResponse> localVarResult = std::make_shared<CancelGaussMySqlInstanceEipResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CancelScheduleTaskResponse> GaussDBClient::cancelScheduleTask(CancelScheduleTaskRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/scheduled-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CancelScheduleTaskResponse> localVarResult = std::make_shared<CancelScheduleTaskResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ChangeGaussMySqlInstanceSpecificationResponse> GaussDBClient::changeGaussMySqlInstanceSpecification(ChangeGaussMySqlInstanceSpecificationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ChangeGaussMySqlInstanceSpecificationResponse> localVarResult = std::make_shared<ChangeGaussMySqlInstanceSpecificationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ChangeGaussMySqlProxySpecificationResponse> GaussDBClient::changeGaussMySqlProxySpecification(ChangeGaussMySqlProxySpecificationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/flavor";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ChangeGaussMySqlProxySpecificationResponse> localVarResult = std::make_shared<ChangeGaussMySqlProxySpecificationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlBackupResponse> GaussDBClient::createGaussMySqlBackup(CreateGaussMySqlBackupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups/create";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlBackupResponse> localVarResult = std::make_shared<CreateGaussMySqlBackupResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlConfigurationResponse> GaussDBClient::createGaussMySqlConfiguration(CreateGaussMySqlConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlConfigurationResponse> localVarResult = std::make_shared<CreateGaussMySqlConfigurationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlDatabaseResponse> GaussDBClient::createGaussMySqlDatabase(CreateGaussMySqlDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlDatabaseResponse> localVarResult = std::make_shared<CreateGaussMySqlDatabaseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlDatabaseUserResponse> GaussDBClient::createGaussMySqlDatabaseUser(CreateGaussMySqlDatabaseUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlDatabaseUserResponse> localVarResult = std::make_shared<CreateGaussMySqlDatabaseUserResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlInstanceResponse> GaussDBClient::createGaussMySqlInstance(CreateGaussMySqlInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlInstanceResponse> localVarResult = std::make_shared<CreateGaussMySqlInstanceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlProxyResponse> GaussDBClient::createGaussMySqlProxy(CreateGaussMySqlProxyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlProxyResponse> localVarResult = std::make_shared<CreateGaussMySqlProxyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGaussMySqlReadonlyNodeResponse> GaussDBClient::createGaussMySqlReadonlyNode(CreateGaussMySqlReadonlyNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/nodes/enlarge";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateGaussMySqlReadonlyNodeResponse> localVarResult = std::make_shared<CreateGaussMySqlReadonlyNodeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDatabasePermissionResponse> GaussDBClient::deleteDatabasePermission(DeleteDatabasePermissionRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users/privilege";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteDatabasePermissionResponse> localVarResult = std::make_shared<DeleteDatabasePermissionResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlBackupResponse> GaussDBClient::deleteGaussMySqlBackup(DeleteGaussMySqlBackupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups/{backup_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["backup_id"] = parameterToString(request.getBackupId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlBackupResponse> localVarResult = std::make_shared<DeleteGaussMySqlBackupResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlConfigurationResponse> GaussDBClient::deleteGaussMySqlConfiguration(DeleteGaussMySqlConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlConfigurationResponse> localVarResult = std::make_shared<DeleteGaussMySqlConfigurationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlDatabaseResponse> GaussDBClient::deleteGaussMySqlDatabase(DeleteGaussMySqlDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlDatabaseResponse> localVarResult = std::make_shared<DeleteGaussMySqlDatabaseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlDatabaseUserResponse> GaussDBClient::deleteGaussMySqlDatabaseUser(DeleteGaussMySqlDatabaseUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlDatabaseUserResponse> localVarResult = std::make_shared<DeleteGaussMySqlDatabaseUserResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlInstanceResponse> GaussDBClient::deleteGaussMySqlInstance(DeleteGaussMySqlInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlInstanceResponse> localVarResult = std::make_shared<DeleteGaussMySqlInstanceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlProxyResponse> GaussDBClient::deleteGaussMySqlProxy(DeleteGaussMySqlProxyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlProxyResponse> localVarResult = std::make_shared<DeleteGaussMySqlProxyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGaussMySqlReadonlyNodeResponse> GaussDBClient::deleteGaussMySqlReadonlyNode(DeleteGaussMySqlReadonlyNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/nodes/{node_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["node_id"] = parameterToString(request.getNodeId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteGaussMySqlReadonlyNodeResponse> localVarResult = std::make_shared<DeleteGaussMySqlReadonlyNodeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteTaskRecordResponse> GaussDBClient::deleteTaskRecord(DeleteTaskRecordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteTaskRecordResponse> localVarResult = std::make_shared<DeleteTaskRecordResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeBackupEncryptStatusResponse> GaussDBClient::describeBackupEncryptStatus(DescribeBackupEncryptStatusRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/encryption";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DescribeBackupEncryptStatusResponse> localVarResult = std::make_shared<DescribeBackupEncryptStatusResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExpandGaussMySqlInstanceVolumeResponse> GaussDBClient::expandGaussMySqlInstanceVolume(ExpandGaussMySqlInstanceVolumeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/volume/extend";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ExpandGaussMySqlInstanceVolumeResponse> localVarResult = std::make_shared<ExpandGaussMySqlInstanceVolumeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExpandGaussMySqlProxyResponse> GaussDBClient::expandGaussMySqlProxy(ExpandGaussMySqlProxyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/enlarge";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ExpandGaussMySqlProxyResponse> localVarResult = std::make_shared<ExpandGaussMySqlProxyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<InvokeGaussMySqlInstanceSwitchOverResponse> GaussDBClient::invokeGaussMySqlInstanceSwitchOver(InvokeGaussMySqlInstanceSwitchOverRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/switchover";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<InvokeGaussMySqlInstanceSwitchOverResponse> localVarResult = std::make_shared<InvokeGaussMySqlInstanceSwitchOverResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlConfigurationsResponse> GaussDBClient::listGaussMySqlConfigurations(ListGaussMySqlConfigurationsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlConfigurationsResponse> localVarResult = std::make_shared<ListGaussMySqlConfigurationsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlDatabaseResponse> GaussDBClient::listGaussMySqlDatabase(ListGaussMySqlDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlDatabaseResponse> localVarResult = std::make_shared<ListGaussMySqlDatabaseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlDatabaseCharsetsResponse> GaussDBClient::listGaussMySqlDatabaseCharsets(ListGaussMySqlDatabaseCharsetsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases/charsets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlDatabaseCharsetsResponse> localVarResult = std::make_shared<ListGaussMySqlDatabaseCharsetsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlDatabaseUserResponse> GaussDBClient::listGaussMySqlDatabaseUser(ListGaussMySqlDatabaseUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlDatabaseUserResponse> localVarResult = std::make_shared<ListGaussMySqlDatabaseUserResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlDedicatedResourcesResponse> GaussDBClient::listGaussMySqlDedicatedResources(ListGaussMySqlDedicatedResourcesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/dedicated-resources";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlDedicatedResourcesResponse> localVarResult = std::make_shared<ListGaussMySqlDedicatedResourcesResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlInstanceDetailInfoResponse> GaussDBClient::listGaussMySqlInstanceDetailInfo(ListGaussMySqlInstanceDetailInfoRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/details";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdsIsSet()) {
        localVarQueryParams["instance_ids"] = parameterToString(request.getInstanceIds());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlInstanceDetailInfoResponse> localVarResult = std::make_shared<ListGaussMySqlInstanceDetailInfoResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGaussMySqlInstancesResponse> GaussDBClient::listGaussMySqlInstances(ListGaussMySqlInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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
    if (request.privateIpIsSet()) {
        localVarQueryParams["private_ip"] = parameterToString(request.getPrivateIp());
    }
    if (request.readonlyPrivateIpIsSet()) {
        localVarQueryParams["readonly_private_ip"] = parameterToString(request.getReadonlyPrivateIp());
    }
    if (request.proxyIpIsSet()) {
        localVarQueryParams["proxy_ip"] = parameterToString(request.getProxyIp());
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
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListGaussMySqlInstancesResponse> localVarResult = std::make_shared<ListGaussMySqlInstancesResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListImmediateJobsResponse> GaussDBClient::listImmediateJobs(ListImmediateJobsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/immediate-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.jobNameIsSet()) {
        localVarQueryParams["job_name"] = parameterToString(request.getJobName());
    }
    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListImmediateJobsResponse> localVarResult = std::make_shared<ListImmediateJobsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInstanceTagsResponse> GaussDBClient::listInstanceTags(ListInstanceTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListInstanceTagsResponse> localVarResult = std::make_shared<ListInstanceTagsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListLtsErrorLogDetailsResponse> GaussDBClient::listLtsErrorLogDetails(ListLtsErrorLogDetailsRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/instances/{instance_id}/error-logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListLtsErrorLogDetailsResponse> localVarResult = std::make_shared<ListLtsErrorLogDetailsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListLtsSlowlogDetailsResponse> GaussDBClient::listLtsSlowlogDetails(ListLtsSlowlogDetailsRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/instances/{instance_id}/slow-logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListLtsSlowlogDetailsResponse> localVarResult = std::make_shared<ListLtsSlowlogDetailsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectTagsResponse> GaussDBClient::listProjectTags(ListProjectTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListProjectTagsResponse> localVarResult = std::make_shared<ListProjectTagsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListScheduleJobsResponse> GaussDBClient::listScheduleJobs(ListScheduleJobsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/scheduled-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.jobNameIsSet()) {
        localVarQueryParams["job_name"] = parameterToString(request.getJobName());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListScheduleJobsResponse> localVarResult = std::make_shared<ListScheduleJobsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ModifyBackupEncryptStatusResponse> GaussDBClient::modifyBackupEncryptStatus(ModifyBackupEncryptStatusRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/encryption";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyBackupEncryptStatusResponse> localVarResult = std::make_shared<ModifyBackupEncryptStatusResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ModifyGaussMySqlProxyRouteModeResponse> GaussDBClient::modifyGaussMySqlProxyRouteMode(ModifyGaussMySqlProxyRouteModeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/route-mode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyGaussMySqlProxyRouteModeResponse> localVarResult = std::make_shared<ModifyGaussMySqlProxyRouteModeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetGaussMySqlDatabasePasswordResponse> GaussDBClient::resetGaussMySqlDatabasePassword(ResetGaussMySqlDatabasePasswordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users/password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResetGaussMySqlDatabasePasswordResponse> localVarResult = std::make_shared<ResetGaussMySqlDatabasePasswordResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetGaussMySqlPasswordResponse> GaussDBClient::resetGaussMySqlPassword(ResetGaussMySqlPasswordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResetGaussMySqlPasswordResponse> localVarResult = std::make_shared<ResetGaussMySqlPasswordResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RestartGaussMySqlInstanceResponse> GaussDBClient::restartGaussMySqlInstance(RestartGaussMySqlInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/restart";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RestartGaussMySqlInstanceResponse> localVarResult = std::make_shared<RestartGaussMySqlInstanceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RestartGaussMySqlNodeResponse> GaussDBClient::restartGaussMySqlNode(RestartGaussMySqlNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/nodes/{node_id}/restart";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["node_id"] = parameterToString(request.getNodeId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RestartGaussMySqlNodeResponse> localVarResult = std::make_shared<RestartGaussMySqlNodeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RestoreOldInstanceResponse> GaussDBClient::restoreOldInstance(RestoreOldInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/restore";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RestoreOldInstanceResponse> localVarResult = std::make_shared<RestoreOldInstanceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetGaussMySqlProxyWeightResponse> GaussDBClient::setGaussMySqlProxyWeight(SetGaussMySqlProxyWeightRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/weight";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetGaussMySqlProxyWeightResponse> localVarResult = std::make_shared<SetGaussMySqlProxyWeightResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetGaussMySqlQuotasResponse> GaussDBClient::setGaussMySqlQuotas(SetGaussMySqlQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetGaussMySqlQuotasResponse> localVarResult = std::make_shared<SetGaussMySqlQuotasResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAuditLogResponse> GaussDBClient::showAuditLog(ShowAuditLogRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instance/{instance_id}/audit-log/switch-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowAuditLogResponse> localVarResult = std::make_shared<ShowAuditLogResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBackupRestoreTimeResponse> GaussDBClient::showBackupRestoreTime(ShowBackupRestoreTimeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/restore-time";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.dateIsSet()) {
        localVarQueryParams["date"] = parameterToString(request.getDate());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowBackupRestoreTimeResponse> localVarResult = std::make_shared<ShowBackupRestoreTimeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDedicatedResourceInfoResponse> GaussDBClient::showDedicatedResourceInfo(ShowDedicatedResourceInfoRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/dedicated-resource/{dedicated_resource_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["dedicated_resource_id"] = parameterToString(request.getDedicatedResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowDedicatedResourceInfoResponse> localVarResult = std::make_shared<ShowDedicatedResourceInfoResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlBackupListResponse> GaussDBClient::showGaussMySqlBackupList(ShowGaussMySqlBackupListRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlBackupListResponse> localVarResult = std::make_shared<ShowGaussMySqlBackupListResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlBackupPolicyResponse> GaussDBClient::showGaussMySqlBackupPolicy(ShowGaussMySqlBackupPolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlBackupPolicyResponse> localVarResult = std::make_shared<ShowGaussMySqlBackupPolicyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlConfigurationResponse> GaussDBClient::showGaussMySqlConfiguration(ShowGaussMySqlConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlConfigurationResponse> localVarResult = std::make_shared<ShowGaussMySqlConfigurationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlEngineVersionResponse> GaussDBClient::showGaussMySqlEngineVersion(ShowGaussMySqlEngineVersionRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/datastores/{database_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["database_name"] = parameterToString(request.getDatabaseName());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlEngineVersionResponse> localVarResult = std::make_shared<ShowGaussMySqlEngineVersionResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlFlavorsResponse> GaussDBClient::showGaussMySqlFlavors(ShowGaussMySqlFlavorsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/flavors/{database_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["database_name"] = parameterToString(request.getDatabaseName());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.versionNameIsSet()) {
        localVarQueryParams["version_name"] = parameterToString(request.getVersionName());
    }
    if (request.availabilityZoneModeIsSet()) {
        localVarQueryParams["availability_zone_mode"] = parameterToString(request.getAvailabilityZoneMode());
    }
    if (request.specCodeIsSet()) {
        localVarQueryParams["spec_code"] = parameterToString(request.getSpecCode());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlFlavorsResponse> localVarResult = std::make_shared<ShowGaussMySqlFlavorsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlInstanceInfoResponse> GaussDBClient::showGaussMySqlInstanceInfo(ShowGaussMySqlInstanceInfoRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlInstanceInfoResponse> localVarResult = std::make_shared<ShowGaussMySqlInstanceInfoResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlJobInfoResponse> GaussDBClient::showGaussMySqlJobInfo(ShowGaussMySqlJobInfoRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlJobInfoResponse> localVarResult = std::make_shared<ShowGaussMySqlJobInfoResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlProjectQuotasResponse> GaussDBClient::showGaussMySqlProjectQuotas(ShowGaussMySqlProjectQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/project-quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlProjectQuotasResponse> localVarResult = std::make_shared<ShowGaussMySqlProjectQuotasResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlProxyFlavorsResponse> GaussDBClient::showGaussMySqlProxyFlavors(ShowGaussMySqlProxyFlavorsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlProxyFlavorsResponse> localVarResult = std::make_shared<ShowGaussMySqlProxyFlavorsResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlProxyListResponse> GaussDBClient::showGaussMySqlProxyList(ShowGaussMySqlProxyListRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlProxyListResponse> localVarResult = std::make_shared<ShowGaussMySqlProxyListResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGaussMySqlQuotasResponse> GaussDBClient::showGaussMySqlQuotas(ShowGaussMySqlQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.enterpriseProjectNameIsSet()) {
        localVarQueryParams["enterprise_project_name"] = parameterToString(request.getEnterpriseProjectName());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowGaussMySqlQuotasResponse> localVarResult = std::make_shared<ShowGaussMySqlQuotasResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInstanceMonitorExtendResponse> GaussDBClient::showInstanceMonitorExtend(ShowInstanceMonitorExtendRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/monitor-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowInstanceMonitorExtendResponse> localVarResult = std::make_shared<ShowInstanceMonitorExtendResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchGaussMySqlConfigurationResponse> GaussDBClient::switchGaussMySqlConfiguration(SwitchGaussMySqlConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{configuration_id}/apply";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchGaussMySqlConfigurationResponse> localVarResult = std::make_shared<SwitchGaussMySqlConfigurationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchGaussMySqlInstanceSslResponse> GaussDBClient::switchGaussMySqlInstanceSsl(SwitchGaussMySqlInstanceSslRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/ssl-option";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchGaussMySqlInstanceSslResponse> localVarResult = std::make_shared<SwitchGaussMySqlInstanceSslResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAuditLogResponse> GaussDBClient::updateAuditLog(UpdateAuditLogRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instance/{instance_id}/audit-log/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateAuditLogResponse> localVarResult = std::make_shared<UpdateAuditLogResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlBackupPolicyResponse> GaussDBClient::updateGaussMySqlBackupPolicy(UpdateGaussMySqlBackupPolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/policy/update";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlBackupPolicyResponse> localVarResult = std::make_shared<UpdateGaussMySqlBackupPolicyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlConfigurationResponse> GaussDBClient::updateGaussMySqlConfiguration(UpdateGaussMySqlConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlConfigurationResponse> localVarResult = std::make_shared<UpdateGaussMySqlConfigurationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlDatabaseCommentResponse> GaussDBClient::updateGaussMySqlDatabaseComment(UpdateGaussMySqlDatabaseCommentRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/databases/comment";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlDatabaseCommentResponse> localVarResult = std::make_shared<UpdateGaussMySqlDatabaseCommentResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlDatabaseUserCommentResponse> GaussDBClient::updateGaussMySqlDatabaseUserComment(UpdateGaussMySqlDatabaseUserCommentRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-users/comment";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlDatabaseUserCommentResponse> localVarResult = std::make_shared<UpdateGaussMySqlDatabaseUserCommentResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceAliasResponse> GaussDBClient::updateGaussMySqlInstanceAlias(UpdateGaussMySqlInstanceAliasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/alias";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceAliasResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceAliasResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceEipResponse> GaussDBClient::updateGaussMySqlInstanceEip(UpdateGaussMySqlInstanceEipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/public-ips/bind";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceEipResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceEipResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceInternalIpResponse> GaussDBClient::updateGaussMySqlInstanceInternalIp(UpdateGaussMySqlInstanceInternalIpRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/internal-ip";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceInternalIpResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceInternalIpResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceNameResponse> GaussDBClient::updateGaussMySqlInstanceName(UpdateGaussMySqlInstanceNameRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/name";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceNameResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceNameResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceOpsWindowResponse> GaussDBClient::updateGaussMySqlInstanceOpsWindow(UpdateGaussMySqlInstanceOpsWindowRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/ops-window";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceOpsWindowResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceOpsWindowResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstancePortResponse> GaussDBClient::updateGaussMySqlInstancePort(UpdateGaussMySqlInstancePortRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/port";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstancePortResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstancePortResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlInstanceSecurityGroupResponse> GaussDBClient::updateGaussMySqlInstanceSecurityGroup(UpdateGaussMySqlInstanceSecurityGroupRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/security-group";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlInstanceSecurityGroupResponse> localVarResult = std::make_shared<UpdateGaussMySqlInstanceSecurityGroupResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGaussMySqlQuotasResponse> GaussDBClient::updateGaussMySqlQuotas(UpdateGaussMySqlQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateGaussMySqlQuotasResponse> localVarResult = std::make_shared<UpdateGaussMySqlQuotasResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateInstanceMonitorResponse> GaussDBClient::updateInstanceMonitor(UpdateInstanceMonitorRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/monitor-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateInstanceMonitorResponse> localVarResult = std::make_shared<UpdateInstanceMonitorResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProxyConnectionPoolTypeResponse> GaussDBClient::updateProxyConnectionPoolType(UpdateProxyConnectionPoolTypeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/connection-pool-type";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateProxyConnectionPoolTypeResponse> localVarResult = std::make_shared<UpdateProxyConnectionPoolTypeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProxyPortResponse> GaussDBClient::updateProxyPort(UpdateProxyPortRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/port";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateProxyPortResponse> localVarResult = std::make_shared<UpdateProxyPortResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProxySessionConsistenceResponse> GaussDBClient::updateProxySessionConsistence(UpdateProxySessionConsistenceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/{proxy_id}/session-consistence";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());
    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateProxySessionConsistenceResponse> localVarResult = std::make_shared<UpdateProxySessionConsistenceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateTransactionSplitStatusResponse> GaussDBClient::updateTransactionSplitStatus(UpdateTransactionSplitStatusRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/proxy/transaction-split";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateTransactionSplitStatusResponse> localVarResult = std::make_shared<UpdateTransactionSplitStatusResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpgradeGaussMySqlInstanceDatabaseResponse> GaussDBClient::upgradeGaussMySqlInstanceDatabase(UpgradeGaussMySqlInstanceDatabaseRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/db-upgrade";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpgradeGaussMySqlInstanceDatabaseResponse> localVarResult = std::make_shared<UpgradeGaussMySqlInstanceDatabaseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteSqlFilterRuleResponse> GaussDBClient::deleteSqlFilterRule(DeleteSqlFilterRuleRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/sql-filter/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteSqlFilterRuleResponse> localVarResult = std::make_shared<DeleteSqlFilterRuleResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetSqlFilterRuleResponse> GaussDBClient::setSqlFilterRule(SetSqlFilterRuleRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/sql-filter/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetSqlFilterRuleResponse> localVarResult = std::make_shared<SetSqlFilterRuleResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSqlFilterControlResponse> GaussDBClient::showSqlFilterControl(ShowSqlFilterControlRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/sql-filter/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowSqlFilterControlResponse> localVarResult = std::make_shared<ShowSqlFilterControlResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSqlFilterRuleResponse> GaussDBClient::showSqlFilterRule(ShowSqlFilterRuleRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/sql-filter/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nodeIdIsSet()) {
        localVarQueryParams["node_id"] = parameterToString(request.getNodeId());
    }
    if (request.sqlTypeIsSet()) {
        localVarQueryParams["sql_type"] = parameterToString(request.getSqlType());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowSqlFilterRuleResponse> localVarResult = std::make_shared<ShowSqlFilterRuleResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateSqlFilterControlResponse> GaussDBClient::updateSqlFilterControl(UpdateSqlFilterControlRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/sql-filter/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["instance_id"] = parameterToString(request.getInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateSqlFilterControlResponse> localVarResult = std::make_shared<UpdateSqlFilterControlResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string GaussDBClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string GaussDBClient::parameterToString(std::string value)
{
    return value;
}

std::string GaussDBClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBClient::parameterToString(float value)
{
    return toString(value);
}

std::string GaussDBClient::parameterToString(double value)
{
    return toString(value);
}

std::string GaussDBClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string GaussDBClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

