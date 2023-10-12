#include <huaweicloud/eip/v3/EipClient.h>
#include <huaweicloud/eip/v3/EipMeta.h>

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
namespace Eip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Eip::V3::Model;

EipClient::EipClient()
{
}

EipClient::~EipClient()
{
}

ClientBuilder<EipClient> EipClient::newBuilder()
{
    return ClientBuilder<EipClient>("BasicCredentials");
}
std::shared_ptr<ListBandwidthResponse> EipClient::listBandwidth(ListBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/bandwidths";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.bandwidthTypeIsSet()) {
        localVarQueryParams["bandwidth_type"] = parameterToString(request.getBandwidthType());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.ingressSizeIsSet()) {
        localVarQueryParams["ingress_size"] = parameterToString(request.getIngressSize());
    }
    if (request.adminStateIsSet()) {
        localVarQueryParams["admin_state"] = parameterToString(request.getAdminState());
    }
    if (request.billingInfoIsSet()) {
        localVarQueryParams["billing_info"] = parameterToString(request.getBillingInfo());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }
    if (request.enableBandwidthRulesIsSet()) {
        localVarQueryParams["enable_bandwidth_rules"] = parameterToString(request.getEnableBandwidthRules());
    }
    if (request.ruleQuotaIsSet()) {
        localVarQueryParams["rule_quota"] = parameterToString(request.getRuleQuota());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }
    if (request.chargeModeIsSet()) {
        localVarQueryParams["charge_mode"] = parameterToString(request.getChargeMode());
    }
    if (request.sizeIsSet()) {
        localVarQueryParams["size"] = parameterToString(request.getSize());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListBandwidth());

    std::shared_ptr<ListBandwidthResponse> localVarResult = std::make_shared<ListBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCommonPoolsResponse> EipClient::listCommonPools(ListCommonPoolsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicip-pools/common-pools";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListCommonPools());

    std::shared_ptr<ListCommonPoolsResponse> localVarResult = std::make_shared<ListCommonPoolsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPublicBorderGroupsResponse> EipClient::listPublicBorderGroups(ListPublicBorderGroupsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/public-border-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListPublicBorderGroups());

    std::shared_ptr<ListPublicBorderGroupsResponse> localVarResult = std::make_shared<ListPublicBorderGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPublicipPoolResponse> EipClient::listPublicipPool(ListPublicipPoolRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicip-pools";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.sizeIsSet()) {
        localVarQueryParams["size"] = parameterToString(request.getSize());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.descriptionIsSet()) {
        localVarQueryParams["description"] = parameterToString(request.getDescription());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListPublicipPool());

    std::shared_ptr<ListPublicipPoolResponse> localVarResult = std::make_shared<ListPublicipPoolResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListShareBandwidthTypesResponse> EipClient::listShareBandwidthTypes(ListShareBandwidthTypesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/share-bandwidth-types";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.bandwidthTypeIsSet()) {
        localVarQueryParams["bandwidth_type"] = parameterToString(request.getBandwidthType());
    }
    if (request.nameEnIsSet()) {
        localVarQueryParams["name_en"] = parameterToString(request.getNameEn());
    }
    if (request.nameZhIsSet()) {
        localVarQueryParams["name_zh"] = parameterToString(request.getNameZh());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListShareBandwidthTypes());

    std::shared_ptr<ListShareBandwidthTypesResponse> localVarResult = std::make_shared<ListShareBandwidthTypesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPublicipPoolResponse> EipClient::showPublicipPool(ShowPublicipPoolRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicip-pools/{publicip_pool_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_pool_id"] = parameterToString(request.getPublicipPoolId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForShowPublicipPool());

    std::shared_ptr<ShowPublicipPoolResponse> localVarResult = std::make_shared<ShowPublicipPoolResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AssociatePublicipsResponse> EipClient::associatePublicips(AssociatePublicipsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/associate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForAssociatePublicips());

    std::shared_ptr<AssociatePublicipsResponse> localVarResult = std::make_shared<AssociatePublicipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AttachBatchPublicIpResponse> EipClient::attachBatchPublicIp(AttachBatchPublicIpRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/attach-share-bandwidth";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForAttachBatchPublicIp());

    std::shared_ptr<AttachBatchPublicIpResponse> localVarResult = std::make_shared<AttachBatchPublicIpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AttachShareBandwidthResponse> EipClient::attachShareBandwidth(AttachShareBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/attach-share-bandwidth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForAttachShareBandwidth());

    std::shared_ptr<AttachShareBandwidthResponse> localVarResult = std::make_shared<AttachShareBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CountEipAvailableResourcesResponse> EipClient::countEipAvailableResources(CountEipAvailableResourcesRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/resources/available";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForCountEipAvailableResources());

    std::shared_ptr<CountEipAvailableResourcesResponse> localVarResult = std::make_shared<CountEipAvailableResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DetachBatchPublicIpResponse> EipClient::detachBatchPublicIp(DetachBatchPublicIpRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/detach-share-bandwidth";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForDetachBatchPublicIp());

    std::shared_ptr<DetachBatchPublicIpResponse> localVarResult = std::make_shared<DetachBatchPublicIpResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DetachShareBandwidthResponse> EipClient::detachShareBandwidth(DetachShareBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/detach-share-bandwidth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForDetachShareBandwidth());

    std::shared_ptr<DetachShareBandwidthResponse> localVarResult = std::make_shared<DetachShareBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DisableNat64Response> EipClient::disableNat64(DisableNat64Request &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/disable-nat64";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForDisableNat64());

    std::shared_ptr<DisableNat64Response> localVarResult = std::make_shared<DisableNat64Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisassociatePublicipsResponse> EipClient::disassociatePublicips(DisassociatePublicipsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/disassociate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForDisassociatePublicips());

    std::shared_ptr<DisassociatePublicipsResponse> localVarResult = std::make_shared<DisassociatePublicipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableNat64Response> EipClient::enableNat64(EnableNat64Request &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/enable-nat64";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForEnableNat64());

    std::shared_ptr<EnableNat64Response> localVarResult = std::make_shared<EnableNat64Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPublicipsResponse> EipClient::listPublicips(ListPublicipsRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.publicIpAddressIsSet()) {
        localVarQueryParams["public_ip_address"] = parameterToString(request.getPublicIpAddress());
    }
    if (request.publicIpAddressLikeIsSet()) {
        localVarQueryParams["public_ip_address_like"] = parameterToString(request.getPublicIpAddressLike());
    }
    if (request.publicIpv6AddressIsSet()) {
        localVarQueryParams["public_ipv6_address"] = parameterToString(request.getPublicIpv6Address());
    }
    if (request.publicIpv6AddressLikeIsSet()) {
        localVarQueryParams["public_ipv6_address_like"] = parameterToString(request.getPublicIpv6AddressLike());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.networkTypeIsSet()) {
        localVarQueryParams["network_type"] = parameterToString(request.getNetworkType());
    }
    if (request.publicipPoolNameIsSet()) {
        localVarQueryParams["publicip_pool_name"] = parameterToString(request.getPublicipPoolName());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.aliasLikeIsSet()) {
        localVarQueryParams["alias_like"] = parameterToString(request.getAliasLike());
    }
    if (request.aliasIsSet()) {
        localVarQueryParams["alias"] = parameterToString(request.getAlias());
    }
    if (request.descriptionIsSet()) {
        localVarQueryParams["description"] = parameterToString(request.getDescription());
    }
    if (request.vnicPeriodprivateIpAddressIsSet()) {
        localVarQueryParams["vnic.private_ip_address"] = parameterToString(request.getVnicPeriodprivateIpAddress());
    }
    if (request.vnicPeriodprivateIpAddressLikeIsSet()) {
        localVarQueryParams["vnic.private_ip_address_like"] = parameterToString(request.getVnicPeriodprivateIpAddressLike());
    }
    if (request.vnicPerioddeviceIdIsSet()) {
        localVarQueryParams["vnic.device_id"] = parameterToString(request.getVnicPerioddeviceId());
    }
    if (request.vnicPerioddeviceOwnerIsSet()) {
        localVarQueryParams["vnic.device_owner"] = parameterToString(request.getVnicPerioddeviceOwner());
    }
    if (request.vnicPeriodvpcIdIsSet()) {
        localVarQueryParams["vnic.vpc_id"] = parameterToString(request.getVnicPeriodvpcId());
    }
    if (request.vnicPeriodportIdIsSet()) {
        localVarQueryParams["vnic.port_id"] = parameterToString(request.getVnicPeriodportId());
    }
    if (request.vnicPerioddeviceOwnerPrefixlikeIsSet()) {
        localVarQueryParams["vnic.device_owner_prefixlike"] = parameterToString(request.getVnicPerioddeviceOwnerPrefixlike());
    }
    if (request.vnicPeriodinstanceTypeIsSet()) {
        localVarQueryParams["vnic.instance_type"] = parameterToString(request.getVnicPeriodinstanceType());
    }
    if (request.vnicPeriodinstanceIdIsSet()) {
        localVarQueryParams["vnic.instance_id"] = parameterToString(request.getVnicPeriodinstanceId());
    }
    if (request.bandwidthPeriodidIsSet()) {
        localVarQueryParams["bandwidth.id"] = parameterToString(request.getBandwidthPeriodid());
    }
    if (request.bandwidthPeriodnameIsSet()) {
        localVarQueryParams["bandwidth.name"] = parameterToString(request.getBandwidthPeriodname());
    }
    if (request.bandwidthPeriodnameLikeIsSet()) {
        localVarQueryParams["bandwidth.name_like"] = parameterToString(request.getBandwidthPeriodnameLike());
    }
    if (request.bandwidthPeriodsizeIsSet()) {
        localVarQueryParams["bandwidth.size"] = parameterToString(request.getBandwidthPeriodsize());
    }
    if (request.bandwidthPeriodshareTypeIsSet()) {
        localVarQueryParams["bandwidth.share_type"] = parameterToString(request.getBandwidthPeriodshareType());
    }
    if (request.bandwidthPeriodchargeModeIsSet()) {
        localVarQueryParams["bandwidth.charge_mode"] = parameterToString(request.getBandwidthPeriodchargeMode());
    }
    if (request.billingInfoIsSet()) {
        localVarQueryParams["billing_info"] = parameterToString(request.getBillingInfo());
    }
    if (request.billingModeIsSet()) {
        localVarQueryParams["billing_mode"] = parameterToString(request.getBillingMode());
    }
    if (request.associateInstanceTypeIsSet()) {
        localVarQueryParams["associate_instance_type"] = parameterToString(request.getAssociateInstanceType());
    }
    if (request.associateInstanceIdIsSet()) {
        localVarQueryParams["associate_instance_id"] = parameterToString(request.getAssociateInstanceId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }
    if (request.allowShareBandwidthTypeAnyIsSet()) {
        localVarQueryParams["allow_share_bandwidth_type_any"] = parameterToString(request.getAllowShareBandwidthTypeAny());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForListPublicips());

    std::shared_ptr<ListPublicipsResponse> localVarResult = std::make_shared<ListPublicipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPublicipResponse> EipClient::showPublicip(ShowPublicipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForShowPublicip());

    std::shared_ptr<ShowPublicipResponse> localVarResult = std::make_shared<ShowPublicipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateAssociatePublicipResponse> EipClient::updateAssociatePublicip(UpdateAssociatePublicipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/associate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

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
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForUpdateAssociatePublicip());

    std::shared_ptr<UpdateAssociatePublicipResponse> localVarResult = std::make_shared<UpdateAssociatePublicipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateDisassociatePublicipResponse> EipClient::updateDisassociatePublicip(UpdateDisassociatePublicipRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/eip/publicips/{publicip_id}/disassociate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["publicip_id"] = parameterToString(request.getPublicipId());

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
        localVarHeaderParams, localVarHttpBody, EipMeta::genRequestDefForUpdateDisassociatePublicip());

    std::shared_ptr<UpdateDisassociatePublicipResponse> localVarResult = std::make_shared<UpdateDisassociatePublicipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
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
std::string EipClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string EipClient::parameterToString(std::string value)
{
    return value;
}

std::string EipClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string EipClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string EipClient::parameterToString(float value)
{
    return toString(value);
}

std::string EipClient::parameterToString(double value)
{
    return toString(value);
}

std::string EipClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string EipClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

