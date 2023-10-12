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
std::shared_ptr<AddAddressItemsUsingPostResponse> CfwClient::addAddressItemsUsingPost(AddAddressItemsUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddAddressItemsUsingPost());

    std::shared_ptr<AddAddressItemsUsingPostResponse> localVarResult = std::make_shared<AddAddressItemsUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddAddressSetInfoUsingPostResponse> CfwClient::addAddressSetInfoUsingPost(AddAddressSetInfoUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddAddressSetInfoUsingPost());

    std::shared_ptr<AddAddressSetInfoUsingPostResponse> localVarResult = std::make_shared<AddAddressSetInfoUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddBlackWhiteListUsingPostResponse> CfwClient::addBlackWhiteListUsingPost(AddBlackWhiteListUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddBlackWhiteListUsingPost());

    std::shared_ptr<AddBlackWhiteListUsingPostResponse> localVarResult = std::make_shared<AddBlackWhiteListUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddServiceItemsUsingPostResponse> CfwClient::addServiceItemsUsingPost(AddServiceItemsUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddServiceItemsUsingPost());

    std::shared_ptr<AddServiceItemsUsingPostResponse> localVarResult = std::make_shared<AddServiceItemsUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddServiceSetUsingPostResponse> CfwClient::addServiceSetUsingPost(AddServiceSetUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddServiceSetUsingPost());

    std::shared_ptr<AddServiceSetUsingPostResponse> localVarResult = std::make_shared<AddServiceSetUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ChangeEwProtectStatusResponse> CfwClient::changeEwProtectStatus(ChangeEwProtectStatusRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeEwProtectStatus());

    std::shared_ptr<ChangeEwProtectStatusResponse> localVarResult = std::make_shared<ChangeEwProtectStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ChangeIpsProtectModeUsingPostResponse> CfwClient::changeIpsProtectModeUsingPost(ChangeIpsProtectModeUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeIpsProtectModeUsingPost());

    std::shared_ptr<ChangeIpsProtectModeUsingPostResponse> localVarResult = std::make_shared<ChangeIpsProtectModeUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteAclRuleCountResponse> CfwClient::deleteAclRuleCount(DeleteAclRuleCountRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAclRuleCount());

    std::shared_ptr<DeleteAclRuleCountResponse> localVarResult = std::make_shared<DeleteAclRuleCountResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteAddressItemUsingDeleteResponse> CfwClient::deleteAddressItemUsingDelete(DeleteAddressItemUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAddressItemUsingDelete());

    std::shared_ptr<DeleteAddressItemUsingDeleteResponse> localVarResult = std::make_shared<DeleteAddressItemUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteAddressSetInfoUsingDeleteResponse> CfwClient::deleteAddressSetInfoUsingDelete(DeleteAddressSetInfoUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteAddressSetInfoUsingDelete());

    std::shared_ptr<DeleteAddressSetInfoUsingDeleteResponse> localVarResult = std::make_shared<DeleteAddressSetInfoUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteBlackWhiteListUsingDeleteResponse> CfwClient::deleteBlackWhiteListUsingDelete(DeleteBlackWhiteListUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteBlackWhiteListUsingDelete());

    std::shared_ptr<DeleteBlackWhiteListUsingDeleteResponse> localVarResult = std::make_shared<DeleteBlackWhiteListUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteServiceItemUsingDeleteResponse> CfwClient::deleteServiceItemUsingDelete(DeleteServiceItemUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteServiceItemUsingDelete());

    std::shared_ptr<DeleteServiceItemUsingDeleteResponse> localVarResult = std::make_shared<DeleteServiceItemUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteServiceSetUsingDeleteResponse> CfwClient::deleteServiceSetUsingDelete(DeleteServiceSetUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteServiceSetUsingDelete());

    std::shared_ptr<DeleteServiceSetUsingDeleteResponse> localVarResult = std::make_shared<DeleteServiceSetUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAccessControlLogs());

    std::shared_ptr<ListAccessControlLogsResponse> localVarResult = std::make_shared<ListAccessControlLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressItemsUsingGetResponse> CfwClient::listAddressItemsUsingGet(ListAddressItemsUsingGetRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressItemsUsingGet());

    std::shared_ptr<ListAddressItemsUsingGetResponse> localVarResult = std::make_shared<ListAddressItemsUsingGetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressSetDetailUsingGetResponse> CfwClient::listAddressSetDetailUsingGet(ListAddressSetDetailUsingGetRequest &request)
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressSetDetailUsingGet());

    std::shared_ptr<ListAddressSetDetailUsingGetResponse> localVarResult = std::make_shared<ListAddressSetDetailUsingGetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAddressSetListUsingGetResponse> CfwClient::listAddressSetListUsingGet(ListAddressSetListUsingGetRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListAddressSetListUsingGet());

    std::shared_ptr<ListAddressSetListUsingGetResponse> localVarResult = std::make_shared<ListAddressSetListUsingGetResponse>();
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
    if (request.sourceIsSet()) {
        localVarQueryParams["source"] = parameterToString(request.getSource());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
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
std::shared_ptr<ListBlackWhiteListsUsingGetResponse> CfwClient::listBlackWhiteListsUsingGet(ListBlackWhiteListsUsingGetRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListBlackWhiteListsUsingGet());

    std::shared_ptr<ListBlackWhiteListsUsingGetResponse> localVarResult = std::make_shared<ListBlackWhiteListsUsingGetResponse>();
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
std::shared_ptr<ListFirewallUsingGetResponse> CfwClient::listFirewallUsingGet(ListFirewallUsingGetRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListFirewallUsingGet());

    std::shared_ptr<ListFirewallUsingGetResponse> localVarResult = std::make_shared<ListFirewallUsingGetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListFlowLogs());

    std::shared_ptr<ListFlowLogsResponse> localVarResult = std::make_shared<ListFlowLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListIpsProtectModeUsingPostResponse> CfwClient::listIpsProtectModeUsingPost(ListIpsProtectModeUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsProtectModeUsingPost());

    std::shared_ptr<ListIpsProtectModeUsingPostResponse> localVarResult = std::make_shared<ListIpsProtectModeUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListParseDomainDetailsResponse> CfwClient::listParseDomainDetails(ListParseDomainDetailsRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListParseDomainDetails());

    std::shared_ptr<ListParseDomainDetailsResponse> localVarResult = std::make_shared<ListParseDomainDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRuleHitCountResponse> CfwClient::listRuleHitCount(ListRuleHitCountRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListRuleHitCount());

    std::shared_ptr<ListRuleHitCountResponse> localVarResult = std::make_shared<ListRuleHitCountResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListServiceItemsDetailsResponse> CfwClient::listServiceItemsDetails(ListServiceItemsDetailsRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceItemsDetails());

    std::shared_ptr<ListServiceItemsDetailsResponse> localVarResult = std::make_shared<ListServiceItemsDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServiceSetResponse> CfwClient::listServiceSet(ListServiceSetRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceSet());

    std::shared_ptr<ListServiceSetResponse> localVarResult = std::make_shared<ListServiceSetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServiceSetDetailsResponse> CfwClient::listServiceSetDetails(ListServiceSetDetailsRequest &request)
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListServiceSetDetails());

    std::shared_ptr<ListServiceSetDetailsResponse> localVarResult = std::make_shared<ListServiceSetDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAddressSetInfoUsingPutResponse> CfwClient::updateAddressSetInfoUsingPut(UpdateAddressSetInfoUsingPutRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateAddressSetInfoUsingPut());

    std::shared_ptr<UpdateAddressSetInfoUsingPutResponse> localVarResult = std::make_shared<UpdateAddressSetInfoUsingPutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateBlackWhiteListUsingPutResponse> CfwClient::updateBlackWhiteListUsingPut(UpdateBlackWhiteListUsingPutRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateBlackWhiteListUsingPut());

    std::shared_ptr<UpdateBlackWhiteListUsingPutResponse> localVarResult = std::make_shared<UpdateBlackWhiteListUsingPutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
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
std::shared_ptr<UpdateServiceSetUsingPutResponse> CfwClient::updateServiceSetUsingPut(UpdateServiceSetUsingPutRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateServiceSetUsingPut());

    std::shared_ptr<UpdateServiceSetUsingPutResponse> localVarResult = std::make_shared<UpdateServiceSetUsingPutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddRuleAclUsingPostResponse> CfwClient::addRuleAclUsingPost(AddRuleAclUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForAddRuleAclUsingPost());

    std::shared_ptr<AddRuleAclUsingPostResponse> localVarResult = std::make_shared<AddRuleAclUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteRuleAclUsingDeleteResponse> CfwClient::deleteRuleAclUsingDelete(DeleteRuleAclUsingDeleteRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForDeleteRuleAclUsingDelete());

    std::shared_ptr<DeleteRuleAclUsingDeleteResponse> localVarResult = std::make_shared<DeleteRuleAclUsingDeleteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRuleAclUsingPutResponse> CfwClient::listRuleAclUsingPut(ListRuleAclUsingPutRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListRuleAclUsingPut());

    std::shared_ptr<ListRuleAclUsingPutResponse> localVarResult = std::make_shared<ListRuleAclUsingPutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListRuleAclsUsingGetResponse> CfwClient::listRuleAclsUsingGet(ListRuleAclsUsingGetRequest &request)
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
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListRuleAclsUsingGet());

    std::shared_ptr<ListRuleAclsUsingGetResponse> localVarResult = std::make_shared<ListRuleAclsUsingGetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRuleAclUsingPutResponse> CfwClient::updateRuleAclUsingPut(UpdateRuleAclUsingPutRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForUpdateRuleAclUsingPut());

    std::shared_ptr<UpdateRuleAclUsingPutResponse> localVarResult = std::make_shared<UpdateRuleAclUsingPutResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ChangeProtectEipResponse> CfwClient::changeProtectEip(ChangeProtectEipRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeProtectEip());

    std::shared_ptr<ChangeProtectEipResponse> localVarResult = std::make_shared<ChangeProtectEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CountEipsResponse> CfwClient::countEips(CountEipsRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForCountEips());

    std::shared_ptr<CountEipsResponse> localVarResult = std::make_shared<CountEipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEipResourcesResponse> CfwClient::listEipResources(ListEipResourcesRequest &request)
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListEipResources());

    std::shared_ptr<ListEipResourcesResponse> localVarResult = std::make_shared<ListEipResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ChangeIpsSwitchUsingPostResponse> CfwClient::changeIpsSwitchUsingPost(ChangeIpsSwitchUsingPostRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForChangeIpsSwitchUsingPost());

    std::shared_ptr<ChangeIpsSwitchUsingPostResponse> localVarResult = std::make_shared<ChangeIpsSwitchUsingPostResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListIpsSwitchStatusUsingGetResponse> CfwClient::listIpsSwitchStatusUsingGet(ListIpsSwitchStatusUsingGetRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListIpsSwitchStatusUsingGet());

    std::shared_ptr<ListIpsSwitchStatusUsingGetResponse> localVarResult = std::make_shared<ListIpsSwitchStatusUsingGetResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListVpcProtectsResponse> CfwClient::listVpcProtects(ListVpcProtectsRequest &request)
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
        localVarHeaderParams, localVarHttpBody, CfwMeta::genRequestDefForListVpcProtects());

    std::shared_ptr<ListVpcProtectsResponse> localVarResult = std::make_shared<ListVpcProtectsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

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

