#include <huaweicloud/cfw/v1/CfwClient.h>
#include <huaweicloud/cfw/v1/CfwMeta.h>

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
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Cfw::V1::Model;

CfwClient::CfwClient()
{
}

CfwClient::~CfwClient()
{
}

ClientBuilder<CfwClient> CfwClient::newBuilder()
{
    return ClientBuilder<CfwClient>("BasicCredentials");
}
std::shared_ptr<AddAddressItemResponse> CfwClient::addAddressItem(AddAddressItemRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddAddressItem());

    std::shared_ptr<AddAddressItemResponse> localVarResult = std::make_shared<AddAddressItemResponse>();
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
std::shared_ptr<AddAddressSetResponse> CfwClient::addAddressSet(AddAddressSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-set";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddAddressSet());

    std::shared_ptr<AddAddressSetResponse> localVarResult = std::make_shared<AddAddressSetResponse>();
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
std::shared_ptr<AddBlackWhiteListResponse> CfwClient::addBlackWhiteList(AddBlackWhiteListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/black-white-list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddBlackWhiteList());

    std::shared_ptr<AddBlackWhiteListResponse> localVarResult = std::make_shared<AddBlackWhiteListResponse>();
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
std::shared_ptr<AddDomainSetResponse> CfwClient::addDomainSet(AddDomainSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddDomainSet());

    std::shared_ptr<AddDomainSetResponse> localVarResult = std::make_shared<AddDomainSetResponse>();
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
std::shared_ptr<AddDomainsResponse> CfwClient::addDomains(AddDomainsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/domains/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddDomains());

    std::shared_ptr<AddDomainsResponse> localVarResult = std::make_shared<AddDomainsResponse>();
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
std::shared_ptr<AddLogConfigResponse> CfwClient::addLogConfig(AddLogConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/configuration";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddLogConfig());

    std::shared_ptr<AddLogConfigResponse> localVarResult = std::make_shared<AddLogConfigResponse>();
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
std::shared_ptr<AddServiceItemsResponse> CfwClient::addServiceItems(AddServiceItemsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddServiceItems());

    std::shared_ptr<AddServiceItemsResponse> localVarResult = std::make_shared<AddServiceItemsResponse>();
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
std::shared_ptr<AddServiceSetResponse> CfwClient::addServiceSet(AddServiceSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-set";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddServiceSet());

    std::shared_ptr<AddServiceSetResponse> localVarResult = std::make_shared<AddServiceSetResponse>();
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
std::shared_ptr<BatchDeleteAddressItemsResponse> CfwClient::batchDeleteAddressItems(BatchDeleteAddressItemsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForBatchDeleteAddressItems());

    std::shared_ptr<BatchDeleteAddressItemsResponse> localVarResult = std::make_shared<BatchDeleteAddressItemsResponse>();
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
std::shared_ptr<BatchDeleteDomainSetResponse> CfwClient::batchDeleteDomainSet(BatchDeleteDomainSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-sets/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForBatchDeleteDomainSet());

    std::shared_ptr<BatchDeleteDomainSetResponse> localVarResult = std::make_shared<BatchDeleteDomainSetResponse>();
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
std::shared_ptr<BatchDeleteServiceItemsResponse> CfwClient::batchDeleteServiceItems(BatchDeleteServiceItemsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForBatchDeleteServiceItems());

    std::shared_ptr<BatchDeleteServiceItemsResponse> localVarResult = std::make_shared<BatchDeleteServiceItemsResponse>();
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
std::shared_ptr<CancelCaptureTaskResponse> CfwClient::cancelCaptureTask(CancelCaptureTaskRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/capture-task/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCancelCaptureTask());

    std::shared_ptr<CancelCaptureTaskResponse> localVarResult = std::make_shared<CancelCaptureTaskResponse>();
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
std::shared_ptr<ChangeEastWestFirewallStatusResponse> CfwClient::changeEastWestFirewallStatus(ChangeEastWestFirewallStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/firewall/east-west/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeEastWestFirewallStatus());

    std::shared_ptr<ChangeEastWestFirewallStatusResponse> localVarResult = std::make_shared<ChangeEastWestFirewallStatusResponse>();
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
std::shared_ptr<CreateCaptureTaskResponse> CfwClient::createCaptureTask(CreateCaptureTaskRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/capture-task";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCreateCaptureTask());

    std::shared_ptr<CreateCaptureTaskResponse> localVarResult = std::make_shared<CreateCaptureTaskResponse>();
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
std::shared_ptr<CreateEastWestFirewallResponse> CfwClient::createEastWestFirewall(CreateEastWestFirewallRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/firewall/east-west";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCreateEastWestFirewall());

    std::shared_ptr<CreateEastWestFirewallResponse> localVarResult = std::make_shared<CreateEastWestFirewallResponse>();
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
std::shared_ptr<CreateFirewallResponse> CfwClient::createFirewall(CreateFirewallRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/firewall";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xClientTokenIsSet()) {
        localVarHeaderParams["X-Client-Token"] = parameterToString(request.getXClientToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCreateFirewall());

    std::shared_ptr<CreateFirewallResponse> localVarResult = std::make_shared<CreateFirewallResponse>();
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
std::shared_ptr<CreateTagResponse> CfwClient::createTag(CreateTagRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-cfw/{fw_instance_id}/tags/create";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());

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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCreateTag());

    std::shared_ptr<CreateTagResponse> localVarResult = std::make_shared<CreateTagResponse>();
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
std::shared_ptr<DeleteAddressItemResponse> CfwClient::deleteAddressItem(DeleteAddressItemRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-items/{item_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["item_id"] = parameterToString(request.getItemId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAddressItem());

    std::shared_ptr<DeleteAddressItemResponse> localVarResult = std::make_shared<DeleteAddressItemResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAddressSetResponse> CfwClient::deleteAddressSet(DeleteAddressSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAddressSet());

    std::shared_ptr<DeleteAddressSetResponse> localVarResult = std::make_shared<DeleteAddressSetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteBlackWhiteListResponse> CfwClient::deleteBlackWhiteList(DeleteBlackWhiteListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/black-white-list/{list_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["list_id"] = parameterToString(request.getListId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteBlackWhiteList());

    std::shared_ptr<DeleteBlackWhiteListResponse> localVarResult = std::make_shared<DeleteBlackWhiteListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteCaptureTaskResponse> CfwClient::deleteCaptureTask(DeleteCaptureTaskRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/capture-task/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteCaptureTask());

    std::shared_ptr<DeleteCaptureTaskResponse> localVarResult = std::make_shared<DeleteCaptureTaskResponse>();
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
std::shared_ptr<DeleteDomainSetResponse> CfwClient::deleteDomainSet(DeleteDomainSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteDomainSet());

    std::shared_ptr<DeleteDomainSetResponse> localVarResult = std::make_shared<DeleteDomainSetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDomainsResponse> CfwClient::deleteDomains(DeleteDomainsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/domains/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteDomains());

    std::shared_ptr<DeleteDomainsResponse> localVarResult = std::make_shared<DeleteDomainsResponse>();
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
std::shared_ptr<DeleteFirewallResponse> CfwClient::deleteFirewall(DeleteFirewallRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/firewall/{resource_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteFirewall());

    std::shared_ptr<DeleteFirewallResponse> localVarResult = std::make_shared<DeleteFirewallResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteIpBlacklistResponse> CfwClient::deleteIpBlacklist(DeleteIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteIpBlacklist());

    std::shared_ptr<DeleteIpBlacklistResponse> localVarResult = std::make_shared<DeleteIpBlacklistResponse>();
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
std::shared_ptr<DeleteServiceItemResponse> CfwClient::deleteServiceItem(DeleteServiceItemRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-items/{item_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["item_id"] = parameterToString(request.getItemId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteServiceItem());

    std::shared_ptr<DeleteServiceItemResponse> localVarResult = std::make_shared<DeleteServiceItemResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteServiceSetResponse> CfwClient::deleteServiceSet(DeleteServiceSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteServiceSet());

    std::shared_ptr<DeleteServiceSetResponse> localVarResult = std::make_shared<DeleteServiceSetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteTagResponse> CfwClient::deleteTag(DeleteTagRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-cfw/{fw_instance_id}/tags/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteTag());

    std::shared_ptr<DeleteTagResponse> localVarResult = std::make_shared<DeleteTagResponse>();
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
std::shared_ptr<EnableIpBlacklistResponse> CfwClient::enableIpBlacklist(EnableIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForEnableIpBlacklist());

    std::shared_ptr<EnableIpBlacklistResponse> localVarResult = std::make_shared<EnableIpBlacklistResponse>();
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
std::shared_ptr<ExportIpBlacklistResponse> CfwClient::exportIpBlacklist(ExportIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist/export";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForExportIpBlacklist());

    std::shared_ptr<ExportIpBlacklistResponse> localVarResult = std::make_shared<ExportIpBlacklistResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ImportIpBlacklistResponse> CfwClient::importIpBlacklist(ImportIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist/import";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForImportIpBlacklist());

    std::shared_ptr<ImportIpBlacklistResponse> localVarResult = std::make_shared<ImportIpBlacklistResponse>();
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
std::shared_ptr<ListAccessControlLogsResponse> CfwClient::listAccessControlLogs(ListAccessControlLogsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/access-control";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.ruleIdIsSet()) {
        localVarQueryParams["rule_id"] = parameterToString(request.getRuleId());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.srcIpIsSet()) {
        localVarQueryParams["src_ip"] = parameterToString(request.getSrcIp());
    }
    if (request.srcPortIsSet()) {
        localVarQueryParams["src_port"] = parameterToString(request.getSrcPort());
    }
    if (request.dstIpIsSet()) {
        localVarQueryParams["dst_ip"] = parameterToString(request.getDstIp());
    }
    if (request.dstPortIsSet()) {
        localVarQueryParams["dst_port"] = parameterToString(request.getDstPort());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.logIdIsSet()) {
        localVarQueryParams["log_id"] = parameterToString(request.getLogId());
    }
    if (request.nextDateIsSet()) {
        localVarQueryParams["next_date"] = parameterToString(request.getNextDate());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.logTypeIsSet()) {
        localVarQueryParams["log_type"] = parameterToString(request.getLogType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.dstHostIsSet()) {
        localVarQueryParams["dst_host"] = parameterToString(request.getDstHost());
    }
    if (request.ruleNameIsSet()) {
        localVarQueryParams["rule_name"] = parameterToString(request.getRuleName());
    }
    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.srcRegionNameIsSet()) {
        localVarQueryParams["src_region_name"] = parameterToString(request.getSrcRegionName());
    }
    if (request.dstRegionNameIsSet()) {
        localVarQueryParams["dst_region_name"] = parameterToString(request.getDstRegionName());
    }
    if (request.srcProvinceNameIsSet()) {
        localVarQueryParams["src_province_name"] = parameterToString(request.getSrcProvinceName());
    }
    if (request.dstProvinceNameIsSet()) {
        localVarQueryParams["dst_province_name"] = parameterToString(request.getDstProvinceName());
    }
    if (request.srcCityNameIsSet()) {
        localVarQueryParams["src_city_name"] = parameterToString(request.getSrcCityName());
    }
    if (request.dstCityNameIsSet()) {
        localVarQueryParams["dst_city_name"] = parameterToString(request.getDstCityName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAccessControlLogs());

    std::shared_ptr<ListAccessControlLogsResponse> localVarResult = std::make_shared<ListAccessControlLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressItemsResponse> CfwClient::listAddressItems(ListAddressItemsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.setIdIsSet()) {
        localVarQueryParams["set_id"] = parameterToString(request.getSetId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.addressIsSet()) {
        localVarQueryParams["address"] = parameterToString(request.getAddress());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryAddressSetTypeIsSet()) {
        localVarQueryParams["query_address_set_type"] = parameterToString(request.getQueryAddressSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressItems());

    std::shared_ptr<ListAddressItemsResponse> localVarResult = std::make_shared<ListAddressItemsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressSetDetailResponse> CfwClient::listAddressSetDetail(ListAddressSetDetailRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryAddressSetTypeIsSet()) {
        localVarQueryParams["query_address_set_type"] = parameterToString(request.getQueryAddressSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressSetDetail());

    std::shared_ptr<ListAddressSetDetailResponse> localVarResult = std::make_shared<ListAddressSetDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressSetsResponse> CfwClient::listAddressSets(ListAddressSetsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-sets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.addressIsSet()) {
        localVarQueryParams["address"] = parameterToString(request.getAddress());
    }
    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryAddressSetTypeIsSet()) {
        localVarQueryParams["query_address_set_type"] = parameterToString(request.getQueryAddressSetType());
    }
    if (request.addressSetTypeIsSet()) {
        localVarQueryParams["address_set_type"] = parameterToString(request.getAddressSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressSets());

    std::shared_ptr<ListAddressSetsResponse> localVarResult = std::make_shared<ListAddressSetsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAttackLogsResponse> CfwClient::listAttackLogs(ListAttackLogsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/attack";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.srcIpIsSet()) {
        localVarQueryParams["src_ip"] = parameterToString(request.getSrcIp());
    }
    if (request.srcPortIsSet()) {
        localVarQueryParams["src_port"] = parameterToString(request.getSrcPort());
    }
    if (request.dstIpIsSet()) {
        localVarQueryParams["dst_ip"] = parameterToString(request.getDstIp());
    }
    if (request.dstPortIsSet()) {
        localVarQueryParams["dst_port"] = parameterToString(request.getDstPort());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.logIdIsSet()) {
        localVarQueryParams["log_id"] = parameterToString(request.getLogId());
    }
    if (request.nextDateIsSet()) {
        localVarQueryParams["next_date"] = parameterToString(request.getNextDate());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.directionIsSet()) {
        localVarQueryParams["direction"] = parameterToString(request.getDirection());
    }
    if (request.attackTypeIsSet()) {
        localVarQueryParams["attack_type"] = parameterToString(request.getAttackType());
    }
    if (request.attackRuleIsSet()) {
        localVarQueryParams["attack_rule"] = parameterToString(request.getAttackRule());
    }
    if (request.levelIsSet()) {
        localVarQueryParams["level"] = parameterToString(request.getLevel());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.dstHostIsSet()) {
        localVarQueryParams["dst_host"] = parameterToString(request.getDstHost());
    }
    if (request.logTypeIsSet()) {
        localVarQueryParams["log_type"] = parameterToString(request.getLogType());
    }
    if (request.attackRuleIdIsSet()) {
        localVarQueryParams["attack_rule_id"] = parameterToString(request.getAttackRuleId());
    }
    if (request.srcRegionNameIsSet()) {
        localVarQueryParams["src_region_name"] = parameterToString(request.getSrcRegionName());
    }
    if (request.dstRegionNameIsSet()) {
        localVarQueryParams["dst_region_name"] = parameterToString(request.getDstRegionName());
    }
    if (request.srcProvinceNameIsSet()) {
        localVarQueryParams["src_province_name"] = parameterToString(request.getSrcProvinceName());
    }
    if (request.dstProvinceNameIsSet()) {
        localVarQueryParams["dst_province_name"] = parameterToString(request.getDstProvinceName());
    }
    if (request.srcCityNameIsSet()) {
        localVarQueryParams["src_city_name"] = parameterToString(request.getSrcCityName());
    }
    if (request.dstCityNameIsSet()) {
        localVarQueryParams["dst_city_name"] = parameterToString(request.getDstCityName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAttackLogs());

    std::shared_ptr<ListAttackLogsResponse> localVarResult = std::make_shared<ListAttackLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBlackWhiteListsResponse> CfwClient::listBlackWhiteLists(ListBlackWhiteListsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/black-white-lists";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.listTypeIsSet()) {
        localVarQueryParams["list_type"] = parameterToString(request.getListType());
    }
    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }
    if (request.addressIsSet()) {
        localVarQueryParams["address"] = parameterToString(request.getAddress());
    }
    if (request.portIsSet()) {
        localVarQueryParams["port"] = parameterToString(request.getPort());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListBlackWhiteLists());

    std::shared_ptr<ListBlackWhiteListsResponse> localVarResult = std::make_shared<ListBlackWhiteListsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCaptureResultResponse> CfwClient::listCaptureResult(ListCaptureResultRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/capture-task/capture-result";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.taskIdIsSet()) {
        localVarQueryParams["task_id"] = parameterToString(request.getTaskId());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.ipIsSet()) {
        localVarQueryParams["ip"] = parameterToString(request.getIp());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListCaptureResult());

    std::shared_ptr<ListCaptureResultResponse> localVarResult = std::make_shared<ListCaptureResultResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCaptureTaskResponse> CfwClient::listCaptureTask(ListCaptureTaskRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/capture-task";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListCaptureTask());

    std::shared_ptr<ListCaptureTaskResponse> localVarResult = std::make_shared<ListCaptureTaskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDnsServersResponse> CfwClient::listDnsServers(ListDnsServersRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dns/servers";

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
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListDnsServers());

    std::shared_ptr<ListDnsServersResponse> localVarResult = std::make_shared<ListDnsServersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainParseDetailResponse> CfwClient::listDomainParseDetail(ListDomainParseDetailRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain/parse/{domain_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["domain_name"] = parameterToString(request.getDomainName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListDomainParseDetail());

    std::shared_ptr<ListDomainParseDetailResponse> localVarResult = std::make_shared<ListDomainParseDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainParseIpResponse> CfwClient::listDomainParseIp(ListDomainParseIpRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain/parse-ip-list/{domain_address_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["domain_address_id"] = parameterToString(request.getDomainAddressId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }
    if (request.domainSetIdIsSet()) {
        localVarQueryParams["domain_set_id"] = parameterToString(request.getDomainSetId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListDomainParseIp());

    std::shared_ptr<ListDomainParseIpResponse> localVarResult = std::make_shared<ListDomainParseIpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainSetsResponse> CfwClient::listDomainSets(ListDomainSetsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-sets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.domainSetTypeIsSet()) {
        localVarQueryParams["domain_set_type"] = parameterToString(request.getDomainSetType());
    }
    if (request.configStatusIsSet()) {
        localVarQueryParams["config_status"] = parameterToString(request.getConfigStatus());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListDomainSets());

    std::shared_ptr<ListDomainSetsResponse> localVarResult = std::make_shared<ListDomainSetsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainsResponse> CfwClient::listDomains(ListDomainsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/domains/{domain_set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["domain_set_id"] = parameterToString(request.getDomainSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.objectIdIsSet()) {
        localVarQueryParams["object_Id"] = parameterToString(request.getObjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListDomains());

    std::shared_ptr<ListDomainsResponse> localVarResult = std::make_shared<ListDomainsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEastWestFirewallResponse> CfwClient::listEastWestFirewall(ListEastWestFirewallRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/firewall/east-west";

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
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListEastWestFirewall());

    std::shared_ptr<ListEastWestFirewallResponse> localVarResult = std::make_shared<ListEastWestFirewallResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFirewallDetailResponse> CfwClient::listFirewallDetail(ListFirewallDetailRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/firewall/exist";

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
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListFirewallDetail());

    std::shared_ptr<ListFirewallDetailResponse> localVarResult = std::make_shared<ListFirewallDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFirewallListResponse> CfwClient::listFirewallList(ListFirewallListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/firewalls/list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListFirewallList());

    std::shared_ptr<ListFirewallListResponse> localVarResult = std::make_shared<ListFirewallListResponse>();
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
std::shared_ptr<ListFlowLogsResponse> CfwClient::listFlowLogs(ListFlowLogsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/flow";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.directionIsSet()) {
        localVarQueryParams["direction"] = parameterToString(request.getDirection());
    }
    if (request.logTypeIsSet()) {
        localVarQueryParams["log_type"] = parameterToString(request.getLogType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.srcIpIsSet()) {
        localVarQueryParams["src_ip"] = parameterToString(request.getSrcIp());
    }
    if (request.srcPortIsSet()) {
        localVarQueryParams["src_port"] = parameterToString(request.getSrcPort());
    }
    if (request.dstIpIsSet()) {
        localVarQueryParams["dst_ip"] = parameterToString(request.getDstIp());
    }
    if (request.dstPortIsSet()) {
        localVarQueryParams["dst_port"] = parameterToString(request.getDstPort());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.logIdIsSet()) {
        localVarQueryParams["log_id"] = parameterToString(request.getLogId());
    }
    if (request.nextDateIsSet()) {
        localVarQueryParams["next_date"] = parameterToString(request.getNextDate());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.dstHostIsSet()) {
        localVarQueryParams["dst_host"] = parameterToString(request.getDstHost());
    }
    if (request.srcRegionNameIsSet()) {
        localVarQueryParams["src_region_name"] = parameterToString(request.getSrcRegionName());
    }
    if (request.dstRegionNameIsSet()) {
        localVarQueryParams["dst_region_name"] = parameterToString(request.getDstRegionName());
    }
    if (request.srcProvinceNameIsSet()) {
        localVarQueryParams["src_province_name"] = parameterToString(request.getSrcProvinceName());
    }
    if (request.dstProvinceNameIsSet()) {
        localVarQueryParams["dst_province_name"] = parameterToString(request.getDstProvinceName());
    }
    if (request.srcCityNameIsSet()) {
        localVarQueryParams["src_city_name"] = parameterToString(request.getSrcCityName());
    }
    if (request.dstCityNameIsSet()) {
        localVarQueryParams["dst_city_name"] = parameterToString(request.getDstCityName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListFlowLogs());

    std::shared_ptr<ListFlowLogsResponse> localVarResult = std::make_shared<ListFlowLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpBlacklistResponse> CfwClient::listIpBlacklist(ListIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpBlacklist());

    std::shared_ptr<ListIpBlacklistResponse> localVarResult = std::make_shared<ListIpBlacklistResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpBlacklistSwitchResponse> CfwClient::listIpBlacklistSwitch(ListIpBlacklistSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpBlacklistSwitch());

    std::shared_ptr<ListIpBlacklistSwitchResponse> localVarResult = std::make_shared<ListIpBlacklistSwitchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListJobResponse> CfwClient::listJob(ListJobRequest &request)
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


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListJob());

    std::shared_ptr<ListJobResponse> localVarResult = std::make_shared<ListJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListLogConfigResponse> CfwClient::listLogConfig(ListLogConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/configuration";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListLogConfig());

    std::shared_ptr<ListLogConfigResponse> localVarResult = std::make_shared<ListLogConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectTagsResponse> CfwClient::listProjectTags(ListProjectTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-cfw/tags";

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
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListProjectTags());

    std::shared_ptr<ListProjectTagsResponse> localVarResult = std::make_shared<ListProjectTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProtectedVpcsResponse> CfwClient::listProtectedVpcs(ListProtectedVpcsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/vpcs/protection";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListProtectedVpcs());

    std::shared_ptr<ListProtectedVpcsResponse> localVarResult = std::make_shared<ListProtectedVpcsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListResourceTagsResponse> CfwClient::listResourceTags(ListResourceTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-cfw/{fw_instance_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListResourceTags());

    std::shared_ptr<ListResourceTagsResponse> localVarResult = std::make_shared<ListResourceTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServiceItemsResponse> CfwClient::listServiceItems(ListServiceItemsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-items";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.setIdIsSet()) {
        localVarQueryParams["set_id"] = parameterToString(request.getSetId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryServiceSetTypeIsSet()) {
        localVarQueryParams["query_service_set_type"] = parameterToString(request.getQueryServiceSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceItems());

    std::shared_ptr<ListServiceItemsResponse> localVarResult = std::make_shared<ListServiceItemsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServiceSetDetailResponse> CfwClient::listServiceSetDetail(ListServiceSetDetailRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryServiceSetTypeIsSet()) {
        localVarQueryParams["query_service_set_type"] = parameterToString(request.getQueryServiceSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceSetDetail());

    std::shared_ptr<ListServiceSetDetailResponse> localVarResult = std::make_shared<ListServiceSetDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServiceSetsResponse> CfwClient::listServiceSets(ListServiceSetsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-sets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.queryServiceSetTypeIsSet()) {
        localVarQueryParams["query_service_set_type"] = parameterToString(request.getQueryServiceSetType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceSets());

    std::shared_ptr<ListServiceSetsResponse> localVarResult = std::make_shared<ListServiceSetsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RetryIpBlacklistResponse> CfwClient::retryIpBlacklist(RetryIpBlacklistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ptf/ip-blacklist/retry";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForRetryIpBlacklist());

    std::shared_ptr<RetryIpBlacklistResponse> localVarResult = std::make_shared<RetryIpBlacklistResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SaveTagsResponse> CfwClient::saveTags(SaveTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-cfw/{fw_instance_id}/tags/save";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForSaveTags());

    std::shared_ptr<SaveTagsResponse> localVarResult = std::make_shared<SaveTagsResponse>();
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
std::shared_ptr<ShowAlarmConfigResponse> CfwClient::showAlarmConfig(ShowAlarmConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/alarm/config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowAlarmConfig());

    std::shared_ptr<ShowAlarmConfigResponse> localVarResult = std::make_shared<ShowAlarmConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAntiVirusRuleResponse> CfwClient::showAntiVirusRule(ShowAntiVirusRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/anti-virus/rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.engineTypeIsSet()) {
        localVarQueryParams["engine_type"] = parameterToString(request.getEngineType());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowAntiVirusRule());

    std::shared_ptr<ShowAntiVirusRuleResponse> localVarResult = std::make_shared<ShowAntiVirusRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAntiVirusSwitchResponse> CfwClient::showAntiVirusSwitch(ShowAntiVirusSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/anti-virus/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowAntiVirusSwitch());

    std::shared_ptr<ShowAntiVirusSwitchResponse> localVarResult = std::make_shared<ShowAntiVirusSwitchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainSetDetailResponse> CfwClient::showDomainSetDetail(ShowDomainSetDetailRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/{domain_set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["domain_set_id"] = parameterToString(request.getDomainSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowDomainSetDetail());

    std::shared_ptr<ShowDomainSetDetailResponse> localVarResult = std::make_shared<ShowDomainSetDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAddressSetResponse> CfwClient::updateAddressSet(UpdateAddressSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/address-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAddressSet());

    std::shared_ptr<UpdateAddressSetResponse> localVarResult = std::make_shared<UpdateAddressSetResponse>();
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
std::shared_ptr<UpdateAlarmConfigResponse> CfwClient::updateAlarmConfig(UpdateAlarmConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/alarm/config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAlarmConfig());

    std::shared_ptr<UpdateAlarmConfigResponse> localVarResult = std::make_shared<UpdateAlarmConfigResponse>();
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
std::shared_ptr<UpdateAntiVirusRuleResponse> CfwClient::updateAntiVirusRule(UpdateAntiVirusRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/anti-virus/rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAntiVirusRule());

    std::shared_ptr<UpdateAntiVirusRuleResponse> localVarResult = std::make_shared<UpdateAntiVirusRuleResponse>();
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
std::shared_ptr<UpdateAntiVirusSwitchResponse> CfwClient::updateAntiVirusSwitch(UpdateAntiVirusSwitchRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/anti-virus/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAntiVirusSwitch());

    std::shared_ptr<UpdateAntiVirusSwitchResponse> localVarResult = std::make_shared<UpdateAntiVirusSwitchResponse>();
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
std::shared_ptr<UpdateBlackWhiteListResponse> CfwClient::updateBlackWhiteList(UpdateBlackWhiteListRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/black-white-list/{list_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["list_id"] = parameterToString(request.getListId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateBlackWhiteList());

    std::shared_ptr<UpdateBlackWhiteListResponse> localVarResult = std::make_shared<UpdateBlackWhiteListResponse>();
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
std::shared_ptr<UpdateDnsServersResponse> CfwClient::updateDnsServers(UpdateDnsServersRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/dns/servers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateDnsServers());

    std::shared_ptr<UpdateDnsServersResponse> localVarResult = std::make_shared<UpdateDnsServersResponse>();
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
std::shared_ptr<UpdateDomainSetResponse> CfwClient::updateDomainSet(UpdateDomainSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/domain-set/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateDomainSet());

    std::shared_ptr<UpdateDomainSetResponse> localVarResult = std::make_shared<UpdateDomainSetResponse>();
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
std::shared_ptr<UpdateLogConfigResponse> CfwClient::updateLogConfig(UpdateLogConfigRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cfw/logs/configuration";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateLogConfig());

    std::shared_ptr<UpdateLogConfigResponse> localVarResult = std::make_shared<UpdateLogConfigResponse>();
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
std::shared_ptr<UpdateObjectConfigDescResponse> CfwClient::updateObjectConfigDesc(UpdateObjectConfigDescRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/config/object/description";

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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateObjectConfigDesc());

    std::shared_ptr<UpdateObjectConfigDescResponse> localVarResult = std::make_shared<UpdateObjectConfigDescResponse>();
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
std::shared_ptr<UpdateServiceSetResponse> CfwClient::updateServiceSet(UpdateServiceSetRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/service-sets/{set_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["set_id"] = parameterToString(request.getSetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateServiceSet());

    std::shared_ptr<UpdateServiceSetResponse> localVarResult = std::make_shared<UpdateServiceSetResponse>();
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
std::shared_ptr<AddAclRuleResponse> CfwClient::addAclRule(AddAclRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddAclRule());

    std::shared_ptr<AddAclRuleResponse> localVarResult = std::make_shared<AddAclRuleResponse>();
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
std::shared_ptr<BatchDeleteAclRulesResponse> CfwClient::batchDeleteAclRules(BatchDeleteAclRulesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForBatchDeleteAclRules());

    std::shared_ptr<BatchDeleteAclRulesResponse> localVarResult = std::make_shared<BatchDeleteAclRulesResponse>();
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
std::shared_ptr<BatchUpdateAclRuleActionsResponse> CfwClient::batchUpdateAclRuleActions(BatchUpdateAclRuleActionsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForBatchUpdateAclRuleActions());

    std::shared_ptr<BatchUpdateAclRuleActionsResponse> localVarResult = std::make_shared<BatchUpdateAclRuleActionsResponse>();
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
std::shared_ptr<DeleteAclRuleResponse> CfwClient::deleteAclRule(DeleteAclRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/{acl_rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["acl_rule_id"] = parameterToString(request.getAclRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAclRule());

    std::shared_ptr<DeleteAclRuleResponse> localVarResult = std::make_shared<DeleteAclRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAclRuleHitCountResponse> CfwClient::deleteAclRuleHitCount(DeleteAclRuleHitCountRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/count";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAclRuleHitCount());

    std::shared_ptr<DeleteAclRuleHitCountResponse> localVarResult = std::make_shared<DeleteAclRuleHitCountResponse>();
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
std::shared_ptr<ListAclRuleHitCountResponse> CfwClient::listAclRuleHitCount(ListAclRuleHitCountRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/count";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAclRuleHitCount());

    std::shared_ptr<ListAclRuleHitCountResponse> localVarResult = std::make_shared<ListAclRuleHitCountResponse>();
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
std::shared_ptr<ListAclRulesResponse> CfwClient::listAclRules(ListAclRulesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.ipIsSet()) {
        localVarQueryParams["ip"] = parameterToString(request.getIp());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.directionIsSet()) {
        localVarQueryParams["direction"] = parameterToString(request.getDirection());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.actionTypeIsSet()) {
        localVarQueryParams["action_type"] = parameterToString(request.getActionType());
    }
    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.tagsIdIsSet()) {
        localVarQueryParams["tags_id"] = parameterToString(request.getTagsId());
    }
    if (request.sourceIsSet()) {
        localVarQueryParams["source"] = parameterToString(request.getSource());
    }
    if (request.destinationIsSet()) {
        localVarQueryParams["destination"] = parameterToString(request.getDestination());
    }
    if (request.serviceIsSet()) {
        localVarQueryParams["service"] = parameterToString(request.getService());
    }
    if (request.applicationIsSet()) {
        localVarQueryParams["application"] = parameterToString(request.getApplication());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAclRules());

    std::shared_ptr<ListAclRulesResponse> localVarResult = std::make_shared<ListAclRulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRegionsResponse> CfwClient::listRegions(ListRegionsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/regions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListRegions());

    std::shared_ptr<ListRegionsResponse> localVarResult = std::make_shared<ListRegionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRuleAclTagsResponse> CfwClient::listRuleAclTags(ListRuleAclTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/cfw-acl/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListRuleAclTags());

    std::shared_ptr<ListRuleAclTagsResponse> localVarResult = std::make_shared<ListRuleAclTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowImportStatusResponse> CfwClient::showImportStatus(ShowImportStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/import-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowImportStatus());

    std::shared_ptr<ShowImportStatusResponse> localVarResult = std::make_shared<ShowImportStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAclRuleResponse> CfwClient::updateAclRule(UpdateAclRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/{acl_rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["acl_rule_id"] = parameterToString(request.getAclRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAclRule());

    std::shared_ptr<UpdateAclRuleResponse> localVarResult = std::make_shared<UpdateAclRuleResponse>();
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
std::shared_ptr<UpdateAclRuleOrderResponse> CfwClient::updateAclRuleOrder(UpdateAclRuleOrderRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/acl-rule/order/{acl_rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["acl_rule_id"] = parameterToString(request.getAclRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAclRuleOrder());

    std::shared_ptr<UpdateAclRuleOrderResponse> localVarResult = std::make_shared<UpdateAclRuleOrderResponse>();
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
std::shared_ptr<ChangeEipStatusResponse> CfwClient::changeEipStatus(ChangeEipStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eip/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeEipStatus());

    std::shared_ptr<ChangeEipStatusResponse> localVarResult = std::make_shared<ChangeEipStatusResponse>();
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
std::shared_ptr<ListAlarmWhitelistResponse> CfwClient::listAlarmWhitelist(ListAlarmWhitelistRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eip/alarm-whitelist/{fw_instance_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.ipAddressIsSet()) {
        localVarQueryParams["ip_address"] = parameterToString(request.getIpAddress());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAlarmWhitelist());

    std::shared_ptr<ListAlarmWhitelistResponse> localVarResult = std::make_shared<ListAlarmWhitelistResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEipCountResponse> CfwClient::listEipCount(ListEipCountRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eip-count/{object_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["object_id"] = parameterToString(request.getObjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListEipCount());

    std::shared_ptr<ListEipCountResponse> localVarResult = std::make_shared<ListEipCountResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEipsResponse> CfwClient::listEips(ListEipsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eips/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.keyWordIsSet()) {
        localVarQueryParams["key_word"] = parameterToString(request.getKeyWord());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.syncIsSet()) {
        localVarQueryParams["sync"] = parameterToString(request.getSync());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.deviceKeyIsSet()) {
        localVarQueryParams["device_key"] = parameterToString(request.getDeviceKey());
    }
    if (request.addressTypeIsSet()) {
        localVarQueryParams["address_type"] = parameterToString(request.getAddressType());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.fwKeyWordIsSet()) {
        localVarQueryParams["fw_key_word"] = parameterToString(request.getFwKeyWord());
    }
    if (request.epsIdIsSet()) {
        localVarQueryParams["eps_id"] = parameterToString(request.getEpsId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListEips());

    std::shared_ptr<ListEipsResponse> localVarResult = std::make_shared<ListEipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAutoProtectStatusResponse> CfwClient::showAutoProtectStatus(ShowAutoProtectStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eip/auto-protect-status/{object_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["object_id"] = parameterToString(request.getObjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowAutoProtectStatus());

    std::shared_ptr<ShowAutoProtectStatusResponse> localVarResult = std::make_shared<ShowAutoProtectStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SwitchAutoProtectStatusResponse> CfwClient::switchAutoProtectStatus(SwitchAutoProtectStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/eip/auto-protect-status/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForSwitchAutoProtectStatus());

    std::shared_ptr<SwitchAutoProtectStatusResponse> localVarResult = std::make_shared<SwitchAutoProtectStatusResponse>();
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
std::shared_ptr<ChangeIpsProtectModeResponse> CfwClient::changeIpsProtectMode(ChangeIpsProtectModeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeIpsProtectMode());

    std::shared_ptr<ChangeIpsProtectModeResponse> localVarResult = std::make_shared<ChangeIpsProtectModeResponse>();
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
std::shared_ptr<ChangeIpsRuleModeResponse> CfwClient::changeIpsRuleMode(ChangeIpsRuleModeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips-rule/mode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeIpsRuleMode());

    std::shared_ptr<ChangeIpsRuleModeResponse> localVarResult = std::make_shared<ChangeIpsRuleModeResponse>();
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
std::shared_ptr<ChangeIpsSwitchStatusResponse> CfwClient::changeIpsSwitchStatus(ChangeIpsSwitchStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeIpsSwitchStatus());

    std::shared_ptr<ChangeIpsSwitchStatusResponse> localVarResult = std::make_shared<ChangeIpsSwitchStatusResponse>();
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
std::shared_ptr<ListCustomerIpsResponse> CfwClient::listCustomerIps(ListCustomerIpsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips/custom-rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionTypeIsSet()) {
        localVarQueryParams["action_type"] = parameterToString(request.getActionType());
    }
    if (request.affectedOsIsSet()) {
        localVarQueryParams["affected_os"] = parameterToString(request.getAffectedOs());
    }
    if (request.attackTypeIsSet()) {
        localVarQueryParams["attack_type"] = parameterToString(request.getAttackType());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.ipsNameIsSet()) {
        localVarQueryParams["ips_name"] = parameterToString(request.getIpsName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.severityIsSet()) {
        localVarQueryParams["severity"] = parameterToString(request.getSeverity());
    }
    if (request.softwareIsSet()) {
        localVarQueryParams["software"] = parameterToString(request.getSoftware());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListCustomerIps());

    std::shared_ptr<ListCustomerIpsResponse> localVarResult = std::make_shared<ListCustomerIpsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpsProtectModeResponse> CfwClient::listIpsProtectMode(ListIpsProtectModeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsProtectMode());

    std::shared_ptr<ListIpsProtectModeResponse> localVarResult = std::make_shared<ListIpsProtectModeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpsRulesResponse> CfwClient::listIpsRules(ListIpsRulesRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/advanced-ips-rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsRules());

    std::shared_ptr<ListIpsRulesResponse> localVarResult = std::make_shared<ListIpsRulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpsRules1Response> CfwClient::listIpsRules1(ListIpsRules1Request &request)
{
    std::string localVarPath = "/v1/{project_id}/ips-rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.affectedApplicationLikeIsSet()) {
        localVarQueryParams["affected_application_like"] = parameterToString(request.getAffectedApplicationLike());
    }
    if (request.createTimeIsSet()) {
        localVarQueryParams["create_time"] = parameterToString(request.getCreateTime());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.ipsCveLikeIsSet()) {
        localVarQueryParams["ips_cve_like"] = parameterToString(request.getIpsCveLike());
    }
    if (request.ipsGroupIsSet()) {
        localVarQueryParams["ips_group"] = parameterToString(request.getIpsGroup());
    }
    if (request.ipsIdIsSet()) {
        localVarQueryParams["ips_id"] = parameterToString(request.getIpsId());
    }
    if (request.ipsLevelIsSet()) {
        localVarQueryParams["ips_level"] = parameterToString(request.getIpsLevel());
    }
    if (request.ipsNameLikeIsSet()) {
        localVarQueryParams["ips_name_like"] = parameterToString(request.getIpsNameLike());
    }
    if (request.ipsRulesTypeLikeIsSet()) {
        localVarQueryParams["ips_rules_type_like"] = parameterToString(request.getIpsRulesTypeLike());
    }
    if (request.ipsStatusIsSet()) {
        localVarQueryParams["ips_status"] = parameterToString(request.getIpsStatus());
    }
    if (request.isUpdatedIpsRuleQueriedIsSet()) {
        localVarQueryParams["is_updated_ips_rule_queried"] = parameterToString(request.isIsUpdatedIpsRuleQueried());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsRules1());

    std::shared_ptr<ListIpsRules1Response> localVarResult = std::make_shared<ListIpsRules1Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpsSwitchStatusResponse> CfwClient::listIpsSwitchStatus(ListIpsSwitchStatusRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips/switch";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.objectIdIsSet()) {
        localVarQueryParams["object_id"] = parameterToString(request.getObjectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsSwitchStatus());

    std::shared_ptr<ListIpsSwitchStatusResponse> localVarResult = std::make_shared<ListIpsSwitchStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowIpsUpdateTimeResponse> CfwClient::showIpsUpdateTime(ShowIpsUpdateTimeRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/ips-rule/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForShowIpsUpdateTime());

    std::shared_ptr<ShowIpsUpdateTimeResponse> localVarResult = std::make_shared<ShowIpsUpdateTimeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAdvancedIpsRuleResponse> CfwClient::updateAdvancedIpsRule(UpdateAdvancedIpsRuleRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/advanced-ips-rule";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fwInstanceIdIsSet()) {
        localVarQueryParams["fw_instance_id"] = parameterToString(request.getFwInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAdvancedIpsRule());

    std::shared_ptr<UpdateAdvancedIpsRuleResponse> localVarResult = std::make_shared<UpdateAdvancedIpsRuleResponse>();
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
std::string CfwClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CfwClient::parameterToString(std::string value)
{
    return value;
}

std::string CfwClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CfwClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CfwClient::parameterToString(float value)
{
    return toString(value);
}

std::string CfwClient::parameterToString(double value)
{
    return toString(value);
}

std::string CfwClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CfwClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

