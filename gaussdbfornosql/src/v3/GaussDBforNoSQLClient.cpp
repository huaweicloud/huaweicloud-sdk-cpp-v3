#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLClient.h>
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
namespace Gaussdbfornosql {
namespace V3 {

using namespace HuaweiCloud::Sdk::Gaussdbfornosql::V3::Model;

GaussDBforNoSQLClient::GaussDBforNoSQLClient()
{
}

GaussDBforNoSQLClient::~GaussDBforNoSQLClient()
{
}

ClientBuilder<GaussDBforNoSQLClient> GaussDBforNoSQLClient::newBuilder()
{
    return ClientBuilder<GaussDBforNoSQLClient>("BasicCredentials");
}
std::shared_ptr<ApplyConfigurationResponse> GaussDBforNoSQLClient::applyConfiguration(ApplyConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/apply";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ApplyConfigurationResponse> localVarResult = std::make_shared<ApplyConfigurationResponse>();

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
std::shared_ptr<BatchTagActionResponse> GaussDBforNoSQLClient::batchTagAction(BatchTagActionRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


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
std::shared_ptr<CheckDisasterRecoveryOperationResponse> GaussDBforNoSQLClient::checkDisasterRecoveryOperation(CheckDisasterRecoveryOperationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/precheck";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CheckDisasterRecoveryOperationResponse> localVarResult = std::make_shared<CheckDisasterRecoveryOperationResponse>();

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
std::shared_ptr<CheckWeekPasswordResponse> GaussDBforNoSQLClient::checkWeekPassword(CheckWeekPasswordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/weak-password-verification";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CheckWeekPasswordResponse> localVarResult = std::make_shared<CheckWeekPasswordResponse>();

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
std::shared_ptr<CompareConfigurationResponse> GaussDBforNoSQLClient::compareConfiguration(CompareConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/comparison";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CompareConfigurationResponse> localVarResult = std::make_shared<CompareConfigurationResponse>();

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
std::shared_ptr<CopyConfigurationResponse> GaussDBforNoSQLClient::copyConfiguration(CopyConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CopyConfigurationResponse> localVarResult = std::make_shared<CopyConfigurationResponse>();

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
std::shared_ptr<CreateBackResponse> GaussDBforNoSQLClient::createBack(CreateBackRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateBackResponse> localVarResult = std::make_shared<CreateBackResponse>();

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
std::shared_ptr<CreateColdVolumeResponse> GaussDBforNoSQLClient::createColdVolume(CreateColdVolumeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/cold-volume";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateColdVolumeResponse> localVarResult = std::make_shared<CreateColdVolumeResponse>();

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
std::shared_ptr<CreateConfigurationResponse> GaussDBforNoSQLClient::createConfiguration(CreateConfigurationRequest &request)
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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateConfigurationResponse> localVarResult = std::make_shared<CreateConfigurationResponse>();

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
std::shared_ptr<CreateDbUserResponse> GaussDBforNoSQLClient::createDbUser(CreateDbUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/db-users";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateDbUserResponse> localVarResult = std::make_shared<CreateDbUserResponse>();

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
std::shared_ptr<CreateDisasterRecoveryResponse> GaussDBforNoSQLClient::createDisasterRecovery(CreateDisasterRecoveryRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/construction";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateDisasterRecoveryResponse> localVarResult = std::make_shared<CreateDisasterRecoveryResponse>();

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
std::shared_ptr<CreateInstanceResponse> GaussDBforNoSQLClient::createInstance(CreateInstanceRequest &request)
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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<CreateInstanceResponse> localVarResult = std::make_shared<CreateInstanceResponse>();

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
std::shared_ptr<DeleteBackupResponse> GaussDBforNoSQLClient::deleteBackup(DeleteBackupRequest &request)
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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteBackupResponse> localVarResult = std::make_shared<DeleteBackupResponse>();

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
std::shared_ptr<DeleteConfigurationResponse> GaussDBforNoSQLClient::deleteConfiguration(DeleteConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteConfigurationResponse> localVarResult = std::make_shared<DeleteConfigurationResponse>();

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
std::shared_ptr<DeleteDbUserResponse> GaussDBforNoSQLClient::deleteDbUser(DeleteDbUserRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/db-users";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteDbUserResponse> localVarResult = std::make_shared<DeleteDbUserResponse>();

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
std::shared_ptr<DeleteDisasterRecoveryResponse> GaussDBforNoSQLClient::deleteDisasterRecovery(DeleteDisasterRecoveryRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/deconstruction";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteDisasterRecoveryResponse> localVarResult = std::make_shared<DeleteDisasterRecoveryResponse>();

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
std::shared_ptr<DeleteEnlargeFailNodeResponse> GaussDBforNoSQLClient::deleteEnlargeFailNode(DeleteEnlargeFailNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/enlarge-failed-nodes";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteEnlargeFailNodeResponse> localVarResult = std::make_shared<DeleteEnlargeFailNodeResponse>();

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
std::shared_ptr<DeleteInstanceResponse> GaussDBforNoSQLClient::deleteInstance(DeleteInstanceRequest &request)
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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<DeleteInstanceResponse> localVarResult = std::make_shared<DeleteInstanceResponse>();

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
std::shared_ptr<ExpandInstanceNodeResponse> GaussDBforNoSQLClient::expandInstanceNode(ExpandInstanceNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/enlarge-node";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ExpandInstanceNodeResponse> localVarResult = std::make_shared<ExpandInstanceNodeResponse>();

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
std::shared_ptr<ListAvailableFlavorInfosResponse> GaussDBforNoSQLClient::listAvailableFlavorInfos(ListAvailableFlavorInfosRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/available-flavors";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListAvailableFlavorInfosResponse> localVarResult = std::make_shared<ListAvailableFlavorInfosResponse>();

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
std::shared_ptr<ListConfigurationDatastoresResponse> GaussDBforNoSQLClient::listConfigurationDatastores(ListConfigurationDatastoresRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/datastores";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListConfigurationDatastoresResponse> localVarResult = std::make_shared<ListConfigurationDatastoresResponse>();

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
std::shared_ptr<ListConfigurationTemplatesResponse> GaussDBforNoSQLClient::listConfigurationTemplates(ListConfigurationTemplatesRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/configurations";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListConfigurationTemplatesResponse> localVarResult = std::make_shared<ListConfigurationTemplatesResponse>();

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
std::shared_ptr<ListConfigurationsResponse> GaussDBforNoSQLClient::listConfigurations(ListConfigurationsRequest &request)
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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListConfigurationsResponse> localVarResult = std::make_shared<ListConfigurationsResponse>();

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
std::shared_ptr<ListDatastoresResponse> GaussDBforNoSQLClient::listDatastores(ListDatastoresRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/datastores/{datastore_name}/versions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["datastore_name"] = parameterToString(request.getDatastoreName());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDatastoresResponse> localVarResult = std::make_shared<ListDatastoresResponse>();

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
std::shared_ptr<ListDbUsersResponse> GaussDBforNoSQLClient::listDbUsers(ListDbUsersRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/db-users";

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

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDbUsersResponse> localVarResult = std::make_shared<ListDbUsersResponse>();

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
std::shared_ptr<ListDedicatedResourcesResponse> GaussDBforNoSQLClient::listDedicatedResources(ListDedicatedResourcesRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDedicatedResourcesResponse> localVarResult = std::make_shared<ListDedicatedResourcesResponse>();

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
std::shared_ptr<ListEpsQuotasResponse> GaussDBforNoSQLClient::listEpsQuotas(ListEpsQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/enterprise-projects/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectNameIsSet()) {
        localVarQueryParams["enterprise_project_name"] = parameterToString(request.getEnterpriseProjectName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListEpsQuotasResponse> localVarResult = std::make_shared<ListEpsQuotasResponse>();

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
std::shared_ptr<ListFlavorInfosResponse> GaussDBforNoSQLClient::listFlavorInfos(ListFlavorInfosRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.engineNameIsSet()) {
        localVarQueryParams["engine_name"] = parameterToString(request.getEngineName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListFlavorInfosResponse> localVarResult = std::make_shared<ListFlavorInfosResponse>();

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
std::shared_ptr<ListFlavorsResponse> GaussDBforNoSQLClient::listFlavors(ListFlavorsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/flavors";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.engineNameIsSet()) {
        localVarQueryParams["engine_name"] = parameterToString(request.getEngineName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListFlavorsResponse> localVarResult = std::make_shared<ListFlavorsResponse>();

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
std::shared_ptr<ListInstanceDatabasesResponse> GaussDBforNoSQLClient::listInstanceDatabases(ListInstanceDatabasesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/databases";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListInstanceDatabasesResponse> localVarResult = std::make_shared<ListInstanceDatabasesResponse>();

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
std::shared_ptr<ListInstanceTagsResponse> GaussDBforNoSQLClient::listInstanceTags(ListInstanceTagsRequest &request)
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
std::shared_ptr<ListInstancesResponse> GaussDBforNoSQLClient::listInstances(ListInstancesRequest &request)
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
    if (request.modeIsSet()) {
        localVarQueryParams["mode"] = parameterToString(request.getMode());
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListInstancesResponse> localVarResult = std::make_shared<ListInstancesResponse>();

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
std::shared_ptr<ListInstancesByResourceTagsResponse> GaussDBforNoSQLClient::listInstancesByResourceTags(ListInstancesByResourceTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/resource-instances/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListInstancesByResourceTagsResponse> localVarResult = std::make_shared<ListInstancesByResourceTagsResponse>();

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
std::shared_ptr<ListInstancesByTagsResponse> GaussDBforNoSQLClient::listInstancesByTags(ListInstancesByTagsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/resource_instances/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListInstancesByTagsResponse> localVarResult = std::make_shared<ListInstancesByTagsResponse>();

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
std::shared_ptr<ListProjectTagsResponse> GaussDBforNoSQLClient::listProjectTags(ListProjectTagsRequest &request)
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
std::shared_ptr<ListRecycleInstancesResponse> GaussDBforNoSQLClient::listRecycleInstances(ListRecycleInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/recycle-instances";

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

    std::shared_ptr<ListRecycleInstancesResponse> localVarResult = std::make_shared<ListRecycleInstancesResponse>();

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
std::shared_ptr<ListRestoreTimeResponse> GaussDBforNoSQLClient::listRestoreTime(ListRestoreTimeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/backups/restorable-time-periods";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListRestoreTimeResponse> localVarResult = std::make_shared<ListRestoreTimeResponse>();

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
std::shared_ptr<ListSlowLogsResponse> GaussDBforNoSQLClient::listSlowLogs(ListSlowLogsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/slowlog";

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

    if (request.startDateIsSet()) {
        localVarQueryParams["start_date"] = parameterToString(request.getStartDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["end_date"] = parameterToString(request.getEndDate());
    }
    if (request.nodeIdIsSet()) {
        localVarQueryParams["node_id"] = parameterToString(request.getNodeId());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListSlowLogsResponse> localVarResult = std::make_shared<ListSlowLogsResponse>();

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
std::shared_ptr<ModifyDbUserPrivilegeResponse> GaussDBforNoSQLClient::modifyDbUserPrivilege(ModifyDbUserPrivilegeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/db-users/privilege";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyDbUserPrivilegeResponse> localVarResult = std::make_shared<ModifyDbUserPrivilegeResponse>();

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
std::shared_ptr<ModifyEpsQuotasResponse> GaussDBforNoSQLClient::modifyEpsQuotas(ModifyEpsQuotasRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/enterprise-projects/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyEpsQuotasResponse> localVarResult = std::make_shared<ModifyEpsQuotasResponse>();

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
std::shared_ptr<ModifyPortResponse> GaussDBforNoSQLClient::modifyPort(ModifyPortRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyPortResponse> localVarResult = std::make_shared<ModifyPortResponse>();

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
std::shared_ptr<ModifyPublicIpResponse> GaussDBforNoSQLClient::modifyPublicIp(ModifyPublicIpRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/nodes/{node_id}/public-ip";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyPublicIpResponse> localVarResult = std::make_shared<ModifyPublicIpResponse>();

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
std::shared_ptr<ModifyVolumeResponse> GaussDBforNoSQLClient::modifyVolume(ModifyVolumeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/volume";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ModifyVolumeResponse> localVarResult = std::make_shared<ModifyVolumeResponse>();

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
std::shared_ptr<PauseResumeDataSynchronizationResponse> GaussDBforNoSQLClient::pauseResumeDataSynchronization(PauseResumeDataSynchronizationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/data-synchronization";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<PauseResumeDataSynchronizationResponse> localVarResult = std::make_shared<PauseResumeDataSynchronizationResponse>();

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
std::shared_ptr<ResetDbUserPasswordResponse> GaussDBforNoSQLClient::resetDbUserPassword(ResetDbUserPasswordRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/redis/instances/{instance_id}/db-users/password";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResetDbUserPasswordResponse> localVarResult = std::make_shared<ResetDbUserPasswordResponse>();

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
std::shared_ptr<ResetPasswordResponse> GaussDBforNoSQLClient::resetPassword(ResetPasswordRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResetPasswordResponse> localVarResult = std::make_shared<ResetPasswordResponse>();

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
std::shared_ptr<ResizeColdVolumeResponse> GaussDBforNoSQLClient::resizeColdVolume(ResizeColdVolumeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/cold-volume";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResizeColdVolumeResponse> localVarResult = std::make_shared<ResizeColdVolumeResponse>();

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
std::shared_ptr<ResizeInstanceResponse> GaussDBforNoSQLClient::resizeInstance(ResizeInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/resize";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResizeInstanceResponse> localVarResult = std::make_shared<ResizeInstanceResponse>();

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
std::shared_ptr<ResizeInstanceVolumeResponse> GaussDBforNoSQLClient::resizeInstanceVolume(ResizeInstanceVolumeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/extend-volume";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ResizeInstanceVolumeResponse> localVarResult = std::make_shared<ResizeInstanceVolumeResponse>();

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
std::shared_ptr<RestartInstanceResponse> GaussDBforNoSQLClient::restartInstance(RestartInstanceRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RestartInstanceResponse> localVarResult = std::make_shared<RestartInstanceResponse>();

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
std::shared_ptr<RestoreExistingInstanceResponse> GaussDBforNoSQLClient::restoreExistingInstance(RestoreExistingInstanceRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/recovery";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RestoreExistingInstanceResponse> localVarResult = std::make_shared<RestoreExistingInstanceResponse>();

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
std::shared_ptr<SetAutoEnlargePolicyResponse> GaussDBforNoSQLClient::setAutoEnlargePolicy(SetAutoEnlargePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/disk-auto-expansion";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetAutoEnlargePolicyResponse> localVarResult = std::make_shared<SetAutoEnlargePolicyResponse>();

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
std::shared_ptr<SetBackupPolicyResponse> GaussDBforNoSQLClient::setBackupPolicy(SetBackupPolicyRequest &request)
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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetBackupPolicyResponse> localVarResult = std::make_shared<SetBackupPolicyResponse>();

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
std::shared_ptr<SetRecyclePolicyResponse> GaussDBforNoSQLClient::setRecyclePolicy(SetRecyclePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/recycle-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SetRecyclePolicyResponse> localVarResult = std::make_shared<SetRecyclePolicyResponse>();

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
std::shared_ptr<ShowAllInstancesBackupsResponse> GaussDBforNoSQLClient::showAllInstancesBackups(ShowAllInstancesBackupsRequest &request)
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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.datastoreTypeIsSet()) {
        localVarQueryParams["datastore_type"] = parameterToString(request.getDatastoreType());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.backupTypeIsSet()) {
        localVarQueryParams["backup_type"] = parameterToString(request.getBackupType());
    }
    if (request.beginTimeIsSet()) {
        localVarQueryParams["begin_time"] = parameterToString(request.getBeginTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowAllInstancesBackupsResponse> localVarResult = std::make_shared<ShowAllInstancesBackupsResponse>();

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
std::shared_ptr<ShowAllInstancesBackupsNewResponse> GaussDBforNoSQLClient::showAllInstancesBackupsNew(ShowAllInstancesBackupsNewRequest &request)
{
    std::string localVarPath = "/v3.1/{project_id}/backups";

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
    if (request.datastoreTypeIsSet()) {
        localVarQueryParams["datastore_type"] = parameterToString(request.getDatastoreType());
    }
    if (request.backupIdIsSet()) {
        localVarQueryParams["backup_id"] = parameterToString(request.getBackupId());
    }
    if (request.backupTypeIsSet()) {
        localVarQueryParams["backup_type"] = parameterToString(request.getBackupType());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.beginTimeIsSet()) {
        localVarQueryParams["begin_time"] = parameterToString(request.getBeginTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowAllInstancesBackupsNewResponse> localVarResult = std::make_shared<ShowAllInstancesBackupsNewResponse>();

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
std::shared_ptr<ShowApplicableInstancesResponse> GaussDBforNoSQLClient::showApplicableInstances(ShowApplicableInstancesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/applicable-instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowApplicableInstancesResponse> localVarResult = std::make_shared<ShowApplicableInstancesResponse>();

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
std::shared_ptr<ShowApplyHistoryResponse> GaussDBforNoSQLClient::showApplyHistory(ShowApplyHistoryRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}/applied-histories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowApplyHistoryResponse> localVarResult = std::make_shared<ShowApplyHistoryResponse>();

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
std::shared_ptr<ShowAutoEnlargePolicyResponse> GaussDBforNoSQLClient::showAutoEnlargePolicy(ShowAutoEnlargePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disk-auto-expansion";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowAutoEnlargePolicyResponse> localVarResult = std::make_shared<ShowAutoEnlargePolicyResponse>();

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
std::shared_ptr<ShowBackupPolicyResponse> GaussDBforNoSQLClient::showBackupPolicy(ShowBackupPolicyRequest &request)
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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowBackupPolicyResponse> localVarResult = std::make_shared<ShowBackupPolicyResponse>();

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
std::shared_ptr<ShowConfigurationDetailResponse> GaussDBforNoSQLClient::showConfigurationDetail(ShowConfigurationDetailRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowConfigurationDetailResponse> localVarResult = std::make_shared<ShowConfigurationDetailResponse>();

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
std::shared_ptr<ShowErrorLogResponse> GaussDBforNoSQLClient::showErrorLog(ShowErrorLogRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/error-log";

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

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.nodeIdIsSet()) {
        localVarQueryParams["node_id"] = parameterToString(request.getNodeId());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowErrorLogResponse> localVarResult = std::make_shared<ShowErrorLogResponse>();

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
std::shared_ptr<ShowHighRiskCommandsResponse> GaussDBforNoSQLClient::showHighRiskCommands(ShowHighRiskCommandsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/high-risk-commands";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowHighRiskCommandsResponse> localVarResult = std::make_shared<ShowHighRiskCommandsResponse>();

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
std::shared_ptr<ShowInstanceBiactiveRegionsResponse> GaussDBforNoSQLClient::showInstanceBiactiveRegions(ShowInstanceBiactiveRegionsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/regions";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowInstanceBiactiveRegionsResponse> localVarResult = std::make_shared<ShowInstanceBiactiveRegionsResponse>();

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
std::shared_ptr<ShowInstanceConfigurationResponse> GaussDBforNoSQLClient::showInstanceConfiguration(ShowInstanceConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/configurations";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowInstanceConfigurationResponse> localVarResult = std::make_shared<ShowInstanceConfigurationResponse>();

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
std::shared_ptr<ShowInstanceRoleResponse> GaussDBforNoSQLClient::showInstanceRole(ShowInstanceRoleRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/instance-role";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowInstanceRoleResponse> localVarResult = std::make_shared<ShowInstanceRoleResponse>();

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
std::shared_ptr<ShowIpNumRequirementResponse> GaussDBforNoSQLClient::showIpNumRequirement(ShowIpNumRequirementRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/ip-num-requirement";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nodeNumIsSet()) {
        localVarQueryParams["node_num"] = parameterToString(request.getNodeNum());
    }
    if (request.engineNameIsSet()) {
        localVarQueryParams["engine_name"] = parameterToString(request.getEngineName());
    }
    if (request.instanceModeIsSet()) {
        localVarQueryParams["instance_mode"] = parameterToString(request.getInstanceMode());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowIpNumRequirementResponse> localVarResult = std::make_shared<ShowIpNumRequirementResponse>();

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
std::shared_ptr<ShowModifyHistoryResponse> GaussDBforNoSQLClient::showModifyHistory(ShowModifyHistoryRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/configuration-histories";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowModifyHistoryResponse> localVarResult = std::make_shared<ShowModifyHistoryResponse>();

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
std::shared_ptr<ShowPauseResumeStutusResponse> GaussDBforNoSQLClient::showPauseResumeStutus(ShowPauseResumeStutusRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/disaster-recovery/data-synchronization";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowPauseResumeStutusResponse> localVarResult = std::make_shared<ShowPauseResumeStutusResponse>();

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
std::shared_ptr<ShowQuotasResponse> GaussDBforNoSQLClient::showQuotas(ShowQuotasRequest &request)
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

    if (request.datastoreTypeIsSet()) {
        localVarQueryParams["datastore_type"] = parameterToString(request.getDatastoreType());
    }
    if (request.modeIsSet()) {
        localVarQueryParams["mode"] = parameterToString(request.getMode());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowQuotasResponse> localVarResult = std::make_shared<ShowQuotasResponse>();

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
std::shared_ptr<ShowRecyclePolicyResponse> GaussDBforNoSQLClient::showRecyclePolicy(ShowRecyclePolicyRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/recycle-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowRecyclePolicyResponse> localVarResult = std::make_shared<ShowRecyclePolicyResponse>();

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
std::shared_ptr<ShowRestorableListResponse> GaussDBforNoSQLClient::showRestorableList(ShowRestorableListRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/backups/{backup_id}/restorable-instances";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowRestorableListResponse> localVarResult = std::make_shared<ShowRestorableListResponse>();

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
std::shared_ptr<ShowSlowLogDesensitizationResponse> GaussDBforNoSQLClient::showSlowLogDesensitization(ShowSlowLogDesensitizationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/slowlog-desensitization";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowSlowLogDesensitizationResponse> localVarResult = std::make_shared<ShowSlowLogDesensitizationResponse>();

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
std::shared_ptr<ShrinkInstanceNodeResponse> GaussDBforNoSQLClient::shrinkInstanceNode(ShrinkInstanceNodeRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/reduce-node";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShrinkInstanceNodeResponse> localVarResult = std::make_shared<ShrinkInstanceNodeResponse>();

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
std::shared_ptr<SwitchSlowlogDesensitizationResponse> GaussDBforNoSQLClient::switchSlowlogDesensitization(SwitchSlowlogDesensitizationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/slowlog-desensitization";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchSlowlogDesensitizationResponse> localVarResult = std::make_shared<SwitchSlowlogDesensitizationResponse>();

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
std::shared_ptr<SwitchSslResponse> GaussDBforNoSQLClient::switchSsl(SwitchSslRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchSslResponse> localVarResult = std::make_shared<SwitchSslResponse>();

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
std::shared_ptr<SwitchToMasterResponse> GaussDBforNoSQLClient::switchToMaster(SwitchToMasterRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/switchover-master";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchToMasterResponse> localVarResult = std::make_shared<SwitchToMasterResponse>();

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
std::shared_ptr<SwitchToSlaveResponse> GaussDBforNoSQLClient::switchToSlave(SwitchToSlaveRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/switchover-slave";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<SwitchToSlaveResponse> localVarResult = std::make_shared<SwitchToSlaveResponse>();

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
std::shared_ptr<UpdateClientNetworkResponse> GaussDBforNoSQLClient::updateClientNetwork(UpdateClientNetworkRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/client-network";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateClientNetworkResponse> localVarResult = std::make_shared<UpdateClientNetworkResponse>();

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
std::shared_ptr<UpdateConfigurationResponse> GaussDBforNoSQLClient::updateConfiguration(UpdateConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/configurations/{config_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["config_id"] = parameterToString(request.getConfigId());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateConfigurationResponse> localVarResult = std::make_shared<UpdateConfigurationResponse>();

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
std::shared_ptr<UpdateHighRiskCommandsResponse> GaussDBforNoSQLClient::updateHighRiskCommands(UpdateHighRiskCommandsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/high-risk-commands";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateHighRiskCommandsResponse> localVarResult = std::make_shared<UpdateHighRiskCommandsResponse>();

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
std::shared_ptr<UpdateInstanceConfigurationResponse> GaussDBforNoSQLClient::updateInstanceConfiguration(UpdateInstanceConfigurationRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/instances/{instance_id}/configurations";

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


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateInstanceConfigurationResponse> localVarResult = std::make_shared<UpdateInstanceConfigurationResponse>();

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
std::shared_ptr<UpdateInstanceNameResponse> GaussDBforNoSQLClient::updateInstanceName(UpdateInstanceNameRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateInstanceNameResponse> localVarResult = std::make_shared<UpdateInstanceNameResponse>();

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
std::shared_ptr<UpdateSecurityGroupResponse> GaussDBforNoSQLClient::updateSecurityGroup(UpdateSecurityGroupRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpdateSecurityGroupResponse> localVarResult = std::make_shared<UpdateSecurityGroupResponse>();

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
std::shared_ptr<UpgradeDbVersionResponse> GaussDBforNoSQLClient::upgradeDbVersion(UpgradeDbVersionRequest &request)
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
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<UpgradeDbVersionResponse> localVarResult = std::make_shared<UpgradeDbVersionResponse>();

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
std::shared_ptr<ListApiVersionResponse> GaussDBforNoSQLClient::listApiVersion(ListApiVersionRequest &request)
{
    std::string localVarPath = "/";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListApiVersionResponse> localVarResult = std::make_shared<ListApiVersionResponse>();

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
std::shared_ptr<ShowApiVersionResponse> GaussDBforNoSQLClient::showApiVersion(ShowApiVersionRequest &request)
{
    std::string localVarPath = "/{version}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;

    localVarPathParams["version"] = parameterToString(request.getVersion());

    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowApiVersionResponse> localVarResult = std::make_shared<ShowApiVersionResponse>();

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
std::string GaussDBforNoSQLClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string GaussDBforNoSQLClient::parameterToString(std::string value)
{
    return value;
}

std::string GaussDBforNoSQLClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBforNoSQLClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GaussDBforNoSQLClient::parameterToString(float value)
{
    return toString(value);
}

std::string GaussDBforNoSQLClient::parameterToString(double value)
{
    return toString(value);
}

std::string GaussDBforNoSQLClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string GaussDBforNoSQLClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

