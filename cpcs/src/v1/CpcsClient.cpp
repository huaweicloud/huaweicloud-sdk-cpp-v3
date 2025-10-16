#include <huaweicloud/cpcs/v1/CpcsClient.h>
#include <huaweicloud/cpcs/v1/CpcsMeta.h>

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
namespace Cpcs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Cpcs::V1::Model;

CpcsClient::CpcsClient()
{
}

CpcsClient::~CpcsClient()
{
}

ClientBuilder<CpcsClient> CpcsClient::newBuilder()
{
    ClientBuilder<CpcsClient> client = ClientBuilder<CpcsClient>("");
    return client;
}
std::shared_ptr<AddClusterPortResponse> CpcsClient::addClusterPort(AddClusterPortRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/port";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForAddClusterPort());

    std::shared_ptr<AddClusterPortResponse> localVarResult = std::make_shared<AddClusterPortResponse>();
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
std::shared_ptr<AssociateAppsResponse> CpcsClient::associateApps(AssociateAppsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/associate-apps";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForAssociateApps());

    std::shared_ptr<AssociateAppsResponse> localVarResult = std::make_shared<AssociateAppsResponse>();
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
std::shared_ptr<AuthorizeAccessKeysResponse> CpcsClient::authorizeAccessKeys(AuthorizeAccessKeysRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/authorize-access-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForAuthorizeAccessKeys());

    std::shared_ptr<AuthorizeAccessKeysResponse> localVarResult = std::make_shared<AuthorizeAccessKeysResponse>();
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
std::shared_ptr<BatchDisableAccessKeysResponse> CpcsClient::batchDisableAccessKeys(BatchDisableAccessKeysRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys/disable";

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


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForBatchDisableAccessKeys());

    std::shared_ptr<BatchDisableAccessKeysResponse> localVarResult = std::make_shared<BatchDisableAccessKeysResponse>();
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
std::shared_ptr<BatchEnableAccessKeysResponse> CpcsClient::batchEnableAccessKeys(BatchEnableAccessKeysRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys/enable";

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


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForBatchEnableAccessKeys());

    std::shared_ptr<BatchEnableAccessKeysResponse> localVarResult = std::make_shared<BatchEnableAccessKeysResponse>();
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
std::shared_ptr<CancelAuthorizeAccessKeysResponse> CpcsClient::cancelAuthorizeAccessKeys(CancelAuthorizeAccessKeysRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/de-authorize-access-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForCancelAuthorizeAccessKeys());

    std::shared_ptr<CancelAuthorizeAccessKeysResponse> localVarResult = std::make_shared<CancelAuthorizeAccessKeysResponse>();
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
std::shared_ptr<CheckClusterPortResponse> CpcsClient::checkClusterPort(CheckClusterPortRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/port/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());
    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForCheckClusterPort());

    std::shared_ptr<CheckClusterPortResponse> localVarResult = std::make_shared<CheckClusterPortResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateAppResponse> CpcsClient::createApp(CreateAppRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForCreateApp());

    std::shared_ptr<CreateAppResponse> localVarResult = std::make_shared<CreateAppResponse>();
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
std::shared_ptr<CreateAppAccessKeyResponse> CpcsClient::createAppAccessKey(CreateAppAccessKeyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys";

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


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForCreateAppAccessKey());

    std::shared_ptr<CreateAppAccessKeyResponse> localVarResult = std::make_shared<CreateAppAccessKeyResponse>();
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
std::shared_ptr<CreateClusterResponse> CpcsClient::createCluster(CreateClusterRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForCreateCluster());

    std::shared_ptr<CreateClusterResponse> localVarResult = std::make_shared<CreateClusterResponse>();
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
std::shared_ptr<DeleteAccessKeyResponse> CpcsClient::deleteAccessKey(DeleteAccessKeyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys/{access_key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["access_key_id"] = parameterToString(request.getAccessKeyId());
    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDeleteAccessKey());

    std::shared_ptr<DeleteAccessKeyResponse> localVarResult = std::make_shared<DeleteAccessKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAppResponse> CpcsClient::deleteApp(DeleteAppRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDeleteApp());

    std::shared_ptr<DeleteAppResponse> localVarResult = std::make_shared<DeleteAppResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteCcspClusterResponse> CpcsClient::deleteCcspCluster(DeleteCcspClusterRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDeleteCcspCluster());

    std::shared_ptr<DeleteCcspClusterResponse> localVarResult = std::make_shared<DeleteCcspClusterResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteClusterPortResponse> CpcsClient::deleteClusterPort(DeleteClusterPortRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/port/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());
    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDeleteClusterPort());

    std::shared_ptr<DeleteClusterPortResponse> localVarResult = std::make_shared<DeleteClusterPortResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisableCcspInstanceResponse> CpcsClient::disableCcspInstance(DisableCcspInstanceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/instances/{instance_id}/disable";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDisableCcspInstance());

    std::shared_ptr<DisableCcspInstanceResponse> localVarResult = std::make_shared<DisableCcspInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisassociateAppsResponse> CpcsClient::disassociateApps(DisassociateAppsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/disassociate-apps";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForDisassociateApps());

    std::shared_ptr<DisassociateAppsResponse> localVarResult = std::make_shared<DisassociateAppsResponse>();
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
std::shared_ptr<EnableCcspInstanceResponse> CpcsClient::enableCcspInstance(EnableCcspInstanceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/instances/{instance_id}/enable";

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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForEnableCcspInstance());

    std::shared_ptr<EnableCcspInstanceResponse> localVarResult = std::make_shared<EnableCcspInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCcspTenantImagesResponse> CpcsClient::listCcspTenantImages(ListCcspTenantImagesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/images";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.imageNameIsSet()) {
        localVarQueryParams["image_name"] = parameterToString(request.getImageName());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForListCcspTenantImages());

    std::shared_ptr<ListCcspTenantImagesResponse> localVarResult = std::make_shared<ListCcspTenantImagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListClusterPortResponse> CpcsClient::listClusterPort(ListClusterPortRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/port";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForListClusterPort());

    std::shared_ptr<ListClusterPortResponse> localVarResult = std::make_shared<ListClusterPortResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAccessKeyResponse> CpcsClient::showAccessKey(ShowAccessKeyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys/{access_key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["access_key_id"] = parameterToString(request.getAccessKeyId());
    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAccessKey());

    std::shared_ptr<ShowAccessKeyResponse> localVarResult = std::make_shared<ShowAccessKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAppAccessKeyListResponse> CpcsClient::showAppAccessKeyList(ShowAppAccessKeyListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps/{app_id}/access-keys";

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

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.keyNameIsSet()) {
        localVarQueryParams["key_name"] = parameterToString(request.getKeyName());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAppAccessKeyList());

    std::shared_ptr<ShowAppAccessKeyListResponse> localVarResult = std::make_shared<ShowAppAccessKeyListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAppListResponse> CpcsClient::showAppList(ShowAppListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/apps";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.appNameIsSet()) {
        localVarQueryParams["app_name"] = parameterToString(request.getAppName());
    }
    if (request.vpcNameIsSet()) {
        localVarQueryParams["vpc_name"] = parameterToString(request.getVpcName());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAppList());

    std::shared_ptr<ShowAppListResponse> localVarResult = std::make_shared<ShowAppListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAssociationListResponse> CpcsClient::showAssociationList(ShowAssociationListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/associations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAssociationList());

    std::shared_ptr<ShowAssociationListResponse> localVarResult = std::make_shared<ShowAssociationListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAuditLogResponse> CpcsClient::showAuditLog(ShowAuditLogRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/platform/audit-log";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAuditLog());

    std::shared_ptr<ShowAuditLogResponse> localVarResult = std::make_shared<ShowAuditLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAvailableAzResponse> CpcsClient::showAvailableAz(ShowAvailableAzRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/az";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowAvailableAz());

    std::shared_ptr<ShowAvailableAzResponse> localVarResult = std::make_shared<ShowAvailableAzResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCcspClusterResponse> CpcsClient::showCcspCluster(ShowCcspClusterRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowCcspCluster());

    std::shared_ptr<ShowCcspClusterResponse> localVarResult = std::make_shared<ShowCcspClusterResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCcspClusterListResponse> CpcsClient::showCcspClusterList(ShowCcspClusterListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowCcspClusterList());

    std::shared_ptr<ShowCcspClusterListResponse> localVarResult = std::make_shared<ShowCcspClusterListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCcspInstanceInfoResponse> CpcsClient::showCcspInstanceInfo(ShowCcspInstanceInfoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/instances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.isNormalIsSet()) {
        localVarQueryParams["is_normal"] = parameterToString(request.isIsNormal());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowCcspInstanceInfo());

    std::shared_ptr<ShowCcspInstanceInfoResponse> localVarResult = std::make_shared<ShowCcspInstanceInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowClusterAccessKeyListResponse> CpcsClient::showClusterAccessKeyList(ShowClusterAccessKeyListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/access-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.appNameIsSet()) {
        localVarQueryParams["app_name"] = parameterToString(request.getAppName());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowClusterAccessKeyList());

    std::shared_ptr<ShowClusterAccessKeyListResponse> localVarResult = std::make_shared<ShowClusterAccessKeyListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowClusterUriResponse> CpcsClient::showClusterUri(ShowClusterUriRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/{cluster_id}/uri";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["cluster_id"] = parameterToString(request.getClusterId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowClusterUri());

    std::shared_ptr<ShowClusterUriResponse> localVarResult = std::make_shared<ShowClusterUriResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResourceDetailAccessKeyResponse> CpcsClient::showResourceDetailAccessKey(ShowResourceDetailAccessKeyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/resource/access-key";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowResourceDetailAccessKey());

    std::shared_ptr<ShowResourceDetailAccessKeyResponse> localVarResult = std::make_shared<ShowResourceDetailAccessKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResourceDetailCertificateResponse> CpcsClient::showResourceDetailCertificate(ShowResourceDetailCertificateRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/resource/certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowResourceDetailCertificate());

    std::shared_ptr<ShowResourceDetailCertificateResponse> localVarResult = std::make_shared<ShowResourceDetailCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResourceInfoResponse> CpcsClient::showResourceInfo(ShowResourceInfoRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/resource-info";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowResourceInfo());

    std::shared_ptr<ShowResourceInfoResponse> localVarResult = std::make_shared<ShowResourceInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticCertificateResponse> CpcsClient::showStatisticCertificate(ShowStatisticCertificateRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/certificate/statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.algorithmIsSet()) {
        localVarQueryParams["algorithm"] = parameterToString(request.getAlgorithm());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatisticCertificate());

    std::shared_ptr<ShowStatisticCertificateResponse> localVarResult = std::make_shared<ShowStatisticCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticInterfaceResponse> CpcsClient::showStatisticInterface(ShowStatisticInterfaceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/interface/statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.algorithmIsSet()) {
        localVarQueryParams["algorithm"] = parameterToString(request.getAlgorithm());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatisticInterface());

    std::shared_ptr<ShowStatisticInterfaceResponse> localVarResult = std::make_shared<ShowStatisticInterfaceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticResourceResponse> CpcsClient::showStatisticResource(ShowStatisticResourceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/resource/statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.algorithmIsSet()) {
        localVarQueryParams["algorithm"] = parameterToString(request.getAlgorithm());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatisticResource());

    std::shared_ptr<ShowStatisticResourceResponse> localVarResult = std::make_shared<ShowStatisticResourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticSecretKeyResponse> CpcsClient::showStatisticSecretKey(ShowStatisticSecretKeyRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/secret-key/statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.algorithmIsSet()) {
        localVarQueryParams["algorithm"] = parameterToString(request.getAlgorithm());
    }
    if (request.algorithmTypeIsSet()) {
        localVarQueryParams["algorithm_type"] = parameterToString(request.getAlgorithmType());
    }
    if (request.certificateTypeIsSet()) {
        localVarQueryParams["certificate_type"] = parameterToString(request.getCertificateType());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatisticSecretKey());

    std::shared_ptr<ShowStatisticSecretKeyResponse> localVarResult = std::make_shared<ShowStatisticSecretKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatusAppResponse> CpcsClient::showStatusApp(ShowStatusAppRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/app/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatusApp());

    std::shared_ptr<ShowStatusAppResponse> localVarResult = std::make_shared<ShowStatusAppResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatusClusterResponse> CpcsClient::showStatusCluster(ShowStatusClusterRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/cluster/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatusCluster());

    std::shared_ptr<ShowStatusClusterResponse> localVarResult = std::make_shared<ShowStatusClusterResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatusInstanceResponse> CpcsClient::showStatusInstance(ShowStatusInstanceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/instance/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatusInstance());

    std::shared_ptr<ShowStatusInstanceResponse> localVarResult = std::make_shared<ShowStatusInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatusServiceResponse> CpcsClient::showStatusService(ShowStatusServiceRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/service/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.clusterIdIsSet()) {
        localVarQueryParams["cluster_id"] = parameterToString(request.getClusterId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.serverTypeIsSet()) {
        localVarQueryParams["server_type"] = parameterToString(request.getServerType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowStatusService());

    std::shared_ptr<ShowStatusServiceResponse> localVarResult = std::make_shared<ShowStatusServiceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVmMonitorResponse> CpcsClient::showVmMonitor(ShowVmMonitorRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/vm-monitor";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.namespaceIsSet()) {
        localVarQueryParams["namespace"] = parameterToString(request.getNamespace());
    }
    if (request.metricNameIsSet()) {
        localVarQueryParams["metric_name"] = parameterToString(request.getMetricName());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.vsmIdIsSet()) {
        localVarQueryParams["vsm_id"] = parameterToString(request.getVsmId());
    }
    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForShowVmMonitor());

    std::shared_ptr<ShowVmMonitorResponse> localVarResult = std::make_shared<ShowVmMonitorResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchCpcsTokenResponse> CpcsClient::switchCpcsToken(SwitchCpcsTokenRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dew/cpcs/token/switch";

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
        localVarHeaderParams, localVarHttpBody, CpcsMeta::genRequestDefForSwitchCpcsToken());

    std::shared_ptr<SwitchCpcsTokenResponse> localVarResult = std::make_shared<SwitchCpcsTokenResponse>();
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
std::string CpcsClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CpcsClient::parameterToString(std::string value)
{
    return value;
}

std::string CpcsClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CpcsClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CpcsClient::parameterToString(float value)
{
    return toString(value);
}

std::string CpcsClient::parameterToString(double value)
{
    return toString(value);
}

std::string CpcsClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CpcsClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

