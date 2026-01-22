#include <huaweicloud/geip/v3/GeipClient.h>
#include <huaweicloud/geip/v3/GeipMeta.h>

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
namespace Geip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Geip::V3::Model;

GeipClient::GeipClient()
{
}

GeipClient::~GeipClient()
{
}

ClientBuilder<GeipClient> GeipClient::newBuilder()
{
    ClientBuilder<GeipClient> client = ClientBuilder<GeipClient>("GlobalCredentials");
    return client;
}
std::shared_ptr<AddInternetBandwidthTagsResponse> GeipClient::addInternetBandwidthTags(AddInternetBandwidthTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/{resource_id}/tags";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAddInternetBandwidthTags());

    std::shared_ptr<AddInternetBandwidthTagsResponse> localVarResult = std::make_shared<AddInternetBandwidthTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchCreateInternetBandwidthResponse> GeipClient::batchCreateInternetBandwidth(BatchCreateInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths/batch-create";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchCreateInternetBandwidth());

    std::shared_ptr<BatchCreateInternetBandwidthResponse> localVarResult = std::make_shared<BatchCreateInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchCreateInternetBandwidthTagsResponse> GeipClient::batchCreateInternetBandwidthTags(BatchCreateInternetBandwidthTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/{resource_id}/tags/create";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchCreateInternetBandwidthTags());

    std::shared_ptr<BatchCreateInternetBandwidthTagsResponse> localVarResult = std::make_shared<BatchCreateInternetBandwidthTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteInternetBandwidthTagsResponse> GeipClient::batchDeleteInternetBandwidthTags(BatchDeleteInternetBandwidthTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/{resource_id}/tags/delete";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchDeleteInternetBandwidthTags());

    std::shared_ptr<BatchDeleteInternetBandwidthTagsResponse> localVarResult = std::make_shared<BatchDeleteInternetBandwidthTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CountInternetBandwidthResponse> GeipClient::countInternetBandwidth(CountInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths/count";

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
    if (request.sizeIsSet()) {
        localVarQueryParams["size"] = parameterToString(request.getSize());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCountInternetBandwidth());

    std::shared_ptr<CountInternetBandwidthResponse> localVarResult = std::make_shared<CountInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateInternetBandwidthResponse> GeipClient::createInternetBandwidth(CreateInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCreateInternetBandwidth());

    std::shared_ptr<CreateInternetBandwidthResponse> localVarResult = std::make_shared<CreateInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateUserDisclaimerResponse> GeipClient::createUserDisclaimer(CreateUserDisclaimerRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/user-disclaimer-records";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCreateUserDisclaimer());

    std::shared_ptr<CreateUserDisclaimerResponse> localVarResult = std::make_shared<CreateUserDisclaimerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteInternetBandwidthResponse> GeipClient::deleteInternetBandwidth(DeleteInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths/{internet_bandwidth_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteInternetBandwidth());

    std::shared_ptr<DeleteInternetBandwidthResponse> localVarResult = std::make_shared<DeleteInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteInternetBandwidthTagResponse> GeipClient::deleteInternetBandwidthTag(DeleteInternetBandwidthTagRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/{resource_id}/tags/{tag_key}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());
    localVarPathParams["tag_key"] = parameterToString(request.getTagKey());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteInternetBandwidthTag());

    std::shared_ptr<DeleteInternetBandwidthTagResponse> localVarResult = std::make_shared<DeleteInternetBandwidthTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteUserDisclaimerResponse> GeipClient::deleteUserDisclaimer(DeleteUserDisclaimerRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/user-disclaimer-records";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteUserDisclaimer());

    std::shared_ptr<DeleteUserDisclaimerResponse> localVarResult = std::make_shared<DeleteUserDisclaimerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAccessSitesResponse> GeipClient::listAccessSites(ListAccessSitesRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/access-sites";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.proxyRegionIsSet()) {
        localVarQueryParams["proxy_region"] = parameterToString(request.getProxyRegion());
    }
    if (request.iecAzCodeIsSet()) {
        localVarQueryParams["iec_az_code"] = parameterToString(request.getIecAzCode());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListAccessSites());

    std::shared_ptr<ListAccessSitesResponse> localVarResult = std::make_shared<ListAccessSitesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGeipResourceQuotasResponse> GeipClient::listGeipResourceQuotas(ListGeipResourceQuotasRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/quotas";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
    }
    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGeipResourceQuotas());

    std::shared_ptr<ListGeipResourceQuotasResponse> localVarResult = std::make_shared<ListGeipResourceQuotasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInternetBandwidthCountFilterTagsResponse> GeipClient::listInternetBandwidthCountFilterTags(ListInternetBandwidthCountFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/resource-instances/count";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListInternetBandwidthCountFilterTags());

    std::shared_ptr<ListInternetBandwidthCountFilterTagsResponse> localVarResult = std::make_shared<ListInternetBandwidthCountFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListInternetBandwidthDomainTagsResponse> GeipClient::listInternetBandwidthDomainTags(ListInternetBandwidthDomainTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/tags";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListInternetBandwidthDomainTags());

    std::shared_ptr<ListInternetBandwidthDomainTagsResponse> localVarResult = std::make_shared<ListInternetBandwidthDomainTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInternetBandwidthFilterTagsResponse> GeipClient::listInternetBandwidthFilterTags(ListInternetBandwidthFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/resource-instances/filter";

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

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListInternetBandwidthFilterTags());

    std::shared_ptr<ListInternetBandwidthFilterTagsResponse> localVarResult = std::make_shared<ListInternetBandwidthFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListInternetBandwidthLimitsResponse> GeipClient::listInternetBandwidthLimits(ListInternetBandwidthLimitsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidth-limits";

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
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.chargeModeIsSet()) {
        localVarQueryParams["charge_mode"] = parameterToString(request.getChargeMode());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListInternetBandwidthLimits());

    std::shared_ptr<ListInternetBandwidthLimitsResponse> localVarResult = std::make_shared<ListInternetBandwidthLimitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInternetBandwidthsResponse> GeipClient::listInternetBandwidths(ListInternetBandwidthsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
    }
    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }
    if (request.extFieldsIsSet()) {
        localVarQueryParams["ext-fields"] = parameterToString(request.getExtFields());
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
    if (request.sizeIsSet()) {
        localVarQueryParams["size"] = parameterToString(request.getSize());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListInternetBandwidths());

    std::shared_ptr<ListInternetBandwidthsResponse> localVarResult = std::make_shared<ListInternetBandwidthsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSupportMasksResponse> GeipClient::listSupportMasks(ListSupportMasksRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/support-masks";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.maskIsSet()) {
        localVarQueryParams["mask"] = parameterToString(request.getMask());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListSupportMasks());

    std::shared_ptr<ListSupportMasksResponse> localVarResult = std::make_shared<ListSupportMasksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInternetBandwidthResponse> GeipClient::showInternetBandwidth(ShowInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths/{internet_bandwidth_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowInternetBandwidth());

    std::shared_ptr<ShowInternetBandwidthResponse> localVarResult = std::make_shared<ShowInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowInternetBandwidthTagsResponse> GeipClient::showInternetBandwidthTags(ShowInternetBandwidthTagsRequest &request)
{
    std::string localVarPath = "/v3/internet-bandwidth/{resource_id}/tags";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowInternetBandwidthTags());

    std::shared_ptr<ShowInternetBandwidthTagsResponse> localVarResult = std::make_shared<ShowInternetBandwidthTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowUserDisclaimerResponse> GeipClient::showUserDisclaimer(ShowUserDisclaimerRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/user-disclaimer-records";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowUserDisclaimer());

    std::shared_ptr<ShowUserDisclaimerResponse> localVarResult = std::make_shared<ShowUserDisclaimerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateInternetBandwidthResponse> GeipClient::updateInternetBandwidth(UpdateInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/internet-bandwidths/{internet_bandwidth_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForUpdateInternetBandwidth());

    std::shared_ptr<UpdateInternetBandwidthResponse> localVarResult = std::make_shared<UpdateInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddGeipSegmentTagsResponse> GeipClient::addGeipSegmentTags(AddGeipSegmentTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/{resource_id}/tags";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAddGeipSegmentTags());

    std::shared_ptr<AddGeipSegmentTagsResponse> localVarResult = std::make_shared<AddGeipSegmentTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddGlobalEipTagsResponse> GeipClient::addGlobalEipTags(AddGlobalEipTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/{resource_id}/tags";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAddGlobalEipTags());

    std::shared_ptr<AddGlobalEipTagsResponse> localVarResult = std::make_shared<AddGlobalEipTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AssociateGeipSegmentInstanceResponse> GeipClient::associateGeipSegmentInstance(AssociateGeipSegmentInstanceRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/{global_eip_segment_id}/associate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_segment_id"] = parameterToString(request.getGlobalEipSegmentId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAssociateGeipSegmentInstance());

    std::shared_ptr<AssociateGeipSegmentInstanceResponse> localVarResult = std::make_shared<AssociateGeipSegmentInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AssociateInstanceResponse> GeipClient::associateInstance(AssociateInstanceRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}/associate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.bindingInstanceServiceIsSet()) {
        localVarHeaderParams["binding-instance-service"] = parameterToString(request.getBindingInstanceService());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAssociateInstance());

    std::shared_ptr<AssociateInstanceResponse> localVarResult = std::make_shared<AssociateInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AttachInternetBandwidthResponse> GeipClient::attachInternetBandwidth(AttachInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}/attach-internet-bandwidth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForAttachInternetBandwidth());

    std::shared_ptr<AttachInternetBandwidthResponse> localVarResult = std::make_shared<AttachInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchAttachGeipSegmentInternetBandwidthResponse> GeipClient::batchAttachGeipSegmentInternetBandwidth(BatchAttachGeipSegmentInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/batch-attach-internet-bandwidths";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchAttachGeipSegmentInternetBandwidth());

    std::shared_ptr<BatchAttachGeipSegmentInternetBandwidthResponse> localVarResult = std::make_shared<BatchAttachGeipSegmentInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchAttachInternetBandwidthResponse> GeipClient::batchAttachInternetBandwidth(BatchAttachInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/batch-attach-internet-bandwidths";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchAttachInternetBandwidth());

    std::shared_ptr<BatchAttachInternetBandwidthResponse> localVarResult = std::make_shared<BatchAttachInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchCreateGeipSegmentTagsResponse> GeipClient::batchCreateGeipSegmentTags(BatchCreateGeipSegmentTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/{resource_id}/tags/create";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchCreateGeipSegmentTags());

    std::shared_ptr<BatchCreateGeipSegmentTagsResponse> localVarResult = std::make_shared<BatchCreateGeipSegmentTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchCreateGlobalEipResponse> GeipClient::batchCreateGlobalEip(BatchCreateGlobalEipRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/batch-create";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchCreateGlobalEip());

    std::shared_ptr<BatchCreateGlobalEipResponse> localVarResult = std::make_shared<BatchCreateGlobalEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchCreateGlobalEipTagsResponse> GeipClient::batchCreateGlobalEipTags(BatchCreateGlobalEipTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/{resource_id}/tags/create";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchCreateGlobalEipTags());

    std::shared_ptr<BatchCreateGlobalEipTagsResponse> localVarResult = std::make_shared<BatchCreateGlobalEipTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteGeipSegmentTagsResponse> GeipClient::batchDeleteGeipSegmentTags(BatchDeleteGeipSegmentTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/{resource_id}/tags/delete";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchDeleteGeipSegmentTags());

    std::shared_ptr<BatchDeleteGeipSegmentTagsResponse> localVarResult = std::make_shared<BatchDeleteGeipSegmentTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteGlobalEipTagsResponse> GeipClient::batchDeleteGlobalEipTags(BatchDeleteGlobalEipTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/{resource_id}/tags/delete";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchDeleteGlobalEipTags());

    std::shared_ptr<BatchDeleteGlobalEipTagsResponse> localVarResult = std::make_shared<BatchDeleteGlobalEipTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDetachGeipSegmentInternetBandwidthResponse> GeipClient::batchDetachGeipSegmentInternetBandwidth(BatchDetachGeipSegmentInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/batch-detach-internet-bandwidths";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchDetachGeipSegmentInternetBandwidth());

    std::shared_ptr<BatchDetachGeipSegmentInternetBandwidthResponse> localVarResult = std::make_shared<BatchDetachGeipSegmentInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDetachInternetBandwidthResponse> GeipClient::batchDetachInternetBandwidth(BatchDetachInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/batch-detach-internet-bandwidths";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForBatchDetachInternetBandwidth());

    std::shared_ptr<BatchDetachInternetBandwidthResponse> localVarResult = std::make_shared<BatchDetachInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CountGlobalEipSegmentResponse> GeipClient::countGlobalEipSegment(CountGlobalEipSegmentRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/count";

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
    if (request.internetBandwidthIdIsSet()) {
        localVarQueryParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.geipPoolNameIsSet()) {
        localVarQueryParams["geip_pool_name"] = parameterToString(request.getGeipPoolName());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.cidrIsSet()) {
        localVarQueryParams["cidr"] = parameterToString(request.getCidr());
    }
    if (request.cidrV6IsSet()) {
        localVarQueryParams["cidr_v6"] = parameterToString(request.getCidrV6());
    }
    if (request.freezenIsSet()) {
        localVarQueryParams["freezen"] = parameterToString(request.getFreezen());
    }
    if (request.internetBandwidthIsNullIsSet()) {
        localVarQueryParams["internet_bandwidth_is_null"] = parameterToString(request.getInternetBandwidthIsNull());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.associateInstancePeriodregionIsSet()) {
        localVarQueryParams["associate_instance.region"] = parameterToString(request.getAssociateInstancePeriodregion());
    }
    if (request.associateInstancePeriodpublicBorderGroupIsSet()) {
        localVarQueryParams["associate_instance.public_border_group"] = parameterToString(request.getAssociateInstancePeriodpublicBorderGroup());
    }
    if (request.associateInstancePeriodinstanceSiteIsSet()) {
        localVarQueryParams["associate_instance.instance_site"] = parameterToString(request.getAssociateInstancePeriodinstanceSite());
    }
    if (request.associateInstancePeriodinstanceTypeIsSet()) {
        localVarQueryParams["associate_instance.instance_type"] = parameterToString(request.getAssociateInstancePeriodinstanceType());
    }
    if (request.associateInstancePeriodinstanceIdIsSet()) {
        localVarQueryParams["associate_instance.instance_id"] = parameterToString(request.getAssociateInstancePeriodinstanceId());
    }
    if (request.associateInstancePeriodprojectIdIsSet()) {
        localVarQueryParams["associate_instance.project_id"] = parameterToString(request.getAssociateInstancePeriodprojectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCountGlobalEipSegment());

    std::shared_ptr<CountGlobalEipSegmentResponse> localVarResult = std::make_shared<CountGlobalEipSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CountGlobalEipsResponse> GeipClient::countGlobalEips(CountGlobalEipsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/count";

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
    if (request.internetBandwidthIdIsSet()) {
        localVarQueryParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.geipPoolNameIsSet()) {
        localVarQueryParams["geip_pool_name"] = parameterToString(request.getGeipPoolName());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.ipAddressIsSet()) {
        localVarQueryParams["ip_address"] = parameterToString(request.getIpAddress());
    }
    if (request.ipv6AddressIsSet()) {
        localVarQueryParams["ipv6_address"] = parameterToString(request.getIpv6Address());
    }
    if (request.freezenIsSet()) {
        localVarQueryParams["freezen"] = parameterToString(request.getFreezen());
    }
    if (request.pollutedIsSet()) {
        localVarQueryParams["polluted"] = parameterToString(request.getPolluted());
    }
    if (request.internetBandwidthIsNullIsSet()) {
        localVarQueryParams["internet_bandwidth_is_null"] = parameterToString(request.getInternetBandwidthIsNull());
    }
    if (request.gcbBandwidthIsNullIsSet()) {
        localVarQueryParams["gcb_bandwidth_is_null"] = parameterToString(request.getGcbBandwidthIsNull());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.associateInstanceInfoPeriodregionIsSet()) {
        localVarQueryParams["associate_instance_info.region"] = parameterToString(request.getAssociateInstanceInfoPeriodregion());
    }
    if (request.associateInstanceInfoPeriodpublicBorderGroupIsSet()) {
        localVarQueryParams["associate_instance_info.public_border_group"] = parameterToString(request.getAssociateInstanceInfoPeriodpublicBorderGroup());
    }
    if (request.associateInstanceInfoPeriodinstanceSiteIsSet()) {
        localVarQueryParams["associate_instance_info.instance_site"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceSite());
    }
    if (request.associateInstanceInfoPeriodinstanceTypeIsSet()) {
        localVarQueryParams["associate_instance_info.instance_type"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceType());
    }
    if (request.associateInstanceInfoPeriodinstanceIdIsSet()) {
        localVarQueryParams["associate_instance_info.instance_id"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceId());
    }
    if (request.associateInstanceInfoPeriodprojectIdIsSet()) {
        localVarQueryParams["associate_instance_info.project_id"] = parameterToString(request.getAssociateInstanceInfoPeriodprojectId());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCountGlobalEips());

    std::shared_ptr<CountGlobalEipsResponse> localVarResult = std::make_shared<CountGlobalEipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGlobalEipResponse> GeipClient::createGlobalEip(CreateGlobalEipRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCreateGlobalEip());

    std::shared_ptr<CreateGlobalEipResponse> localVarResult = std::make_shared<CreateGlobalEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateGlobalEipSegmentResponse> GeipClient::createGlobalEipSegment(CreateGlobalEipSegmentRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForCreateGlobalEipSegment());

    std::shared_ptr<CreateGlobalEipSegmentResponse> localVarResult = std::make_shared<CreateGlobalEipSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteGeipSegmentTagResponse> GeipClient::deleteGeipSegmentTag(DeleteGeipSegmentTagRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/{resource_id}/tags/{tag_key}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());
    localVarPathParams["tag_key"] = parameterToString(request.getTagKey());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteGeipSegmentTag());

    std::shared_ptr<DeleteGeipSegmentTagResponse> localVarResult = std::make_shared<DeleteGeipSegmentTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGlobalEipResponse> GeipClient::deleteGlobalEip(DeleteGlobalEipRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteGlobalEip());

    std::shared_ptr<DeleteGlobalEipResponse> localVarResult = std::make_shared<DeleteGlobalEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGlobalEipSegmentResponse> GeipClient::deleteGlobalEipSegment(DeleteGlobalEipSegmentRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/{global_eip_segment_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_segment_id"] = parameterToString(request.getGlobalEipSegmentId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteGlobalEipSegment());

    std::shared_ptr<DeleteGlobalEipSegmentResponse> localVarResult = std::make_shared<DeleteGlobalEipSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGlobalEipTagResponse> GeipClient::deleteGlobalEipTag(DeleteGlobalEipTagRequest &request)
{
    std::string localVarPath = "/v3/global-eip/{resource_id}/tags/{tag_key}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());
    localVarPathParams["tag_key"] = parameterToString(request.getTagKey());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDeleteGlobalEipTag());

    std::shared_ptr<DeleteGlobalEipTagResponse> localVarResult = std::make_shared<DeleteGlobalEipTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DetachInternetBandwidthResponse> GeipClient::detachInternetBandwidth(DetachInternetBandwidthRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}/detach-internet-bandwidth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.forceUnbindIsSet()) {
        localVarQueryParams["force_unbind"] = parameterToString(request.isForceUnbind());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDetachInternetBandwidth());

    std::shared_ptr<DetachInternetBandwidthResponse> localVarResult = std::make_shared<DetachInternetBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisassociateGeipSegmentInstanceResponse> GeipClient::disassociateGeipSegmentInstance(DisassociateGeipSegmentInstanceRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/{global_eip_segment_id}/disassociate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_segment_id"] = parameterToString(request.getGlobalEipSegmentId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDisassociateGeipSegmentInstance());

    std::shared_ptr<DisassociateGeipSegmentInstanceResponse> localVarResult = std::make_shared<DisassociateGeipSegmentInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisassociateInstanceResponse> GeipClient::disassociateInstance(DisassociateInstanceRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}/disassociate-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.isReserveGcbIsSet()) {
        localVarHeaderParams["is_reserve_gcb"] = parameterToString(request.isIsReserveGcb());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForDisassociateInstance());

    std::shared_ptr<DisassociateInstanceResponse> localVarResult = std::make_shared<DisassociateInstanceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGeipPoolsResponse> GeipClient::listGeipPools(ListGeipPoolsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/geip-pools";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGeipPools());

    std::shared_ptr<ListGeipPoolsResponse> localVarResult = std::make_shared<ListGeipPoolsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGeipSegmentCountFilterTagsResponse> GeipClient::listGeipSegmentCountFilterTags(ListGeipSegmentCountFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/resource-instances/count";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGeipSegmentCountFilterTags());

    std::shared_ptr<ListGeipSegmentCountFilterTagsResponse> localVarResult = std::make_shared<ListGeipSegmentCountFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListGeipSegmentDomainTagsResponse> GeipClient::listGeipSegmentDomainTags(ListGeipSegmentDomainTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/tags";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGeipSegmentDomainTags());

    std::shared_ptr<ListGeipSegmentDomainTagsResponse> localVarResult = std::make_shared<ListGeipSegmentDomainTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGeipSegmentFilterTagsResponse> GeipClient::listGeipSegmentFilterTags(ListGeipSegmentFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/resource-instances/filter";

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

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGeipSegmentFilterTags());

    std::shared_ptr<ListGeipSegmentFilterTagsResponse> localVarResult = std::make_shared<ListGeipSegmentFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListGlobalEipCountFilterTagsResponse> GeipClient::listGlobalEipCountFilterTags(ListGlobalEipCountFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/resource-instances/count";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGlobalEipCountFilterTags());

    std::shared_ptr<ListGlobalEipCountFilterTagsResponse> localVarResult = std::make_shared<ListGlobalEipCountFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListGlobalEipDomainTagsResponse> GeipClient::listGlobalEipDomainTags(ListGlobalEipDomainTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/tags";

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGlobalEipDomainTags());

    std::shared_ptr<ListGlobalEipDomainTagsResponse> localVarResult = std::make_shared<ListGlobalEipDomainTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGlobalEipFilterTagsResponse> GeipClient::listGlobalEipFilterTags(ListGlobalEipFilterTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/resource-instances/filter";

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

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGlobalEipFilterTags());

    std::shared_ptr<ListGlobalEipFilterTagsResponse> localVarResult = std::make_shared<ListGlobalEipFilterTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListGlobalEipSegmentsResponse> GeipClient::listGlobalEipSegments(ListGlobalEipSegmentsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.internetBandwidthIdIsSet()) {
        localVarQueryParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.geipPoolNameIsSet()) {
        localVarQueryParams["geip_pool_name"] = parameterToString(request.getGeipPoolName());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.cidrIsSet()) {
        localVarQueryParams["cidr"] = parameterToString(request.getCidr());
    }
    if (request.cidrV6IsSet()) {
        localVarQueryParams["cidr_v6"] = parameterToString(request.getCidrV6());
    }
    if (request.freezenIsSet()) {
        localVarQueryParams["freezen"] = parameterToString(request.getFreezen());
    }
    if (request.internetBandwidthIsNullIsSet()) {
        localVarQueryParams["internet_bandwidth_is_null"] = parameterToString(request.getInternetBandwidthIsNull());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.associateInstancePeriodregionIsSet()) {
        localVarQueryParams["associate_instance.region"] = parameterToString(request.getAssociateInstancePeriodregion());
    }
    if (request.associateInstancePeriodinstanceTypeIsSet()) {
        localVarQueryParams["associate_instance.instance_type"] = parameterToString(request.getAssociateInstancePeriodinstanceType());
    }
    if (request.associateInstancePeriodpublicBorderGroupIsSet()) {
        localVarQueryParams["associate_instance.public_border_group"] = parameterToString(request.getAssociateInstancePeriodpublicBorderGroup());
    }
    if (request.associateInstancePeriodinstanceSiteIsSet()) {
        localVarQueryParams["associate_instance.instance_site"] = parameterToString(request.getAssociateInstancePeriodinstanceSite());
    }
    if (request.associateInstancePeriodinstanceIdIsSet()) {
        localVarQueryParams["associate_instance.instance_id"] = parameterToString(request.getAssociateInstancePeriodinstanceId());
    }
    if (request.associateInstancePeriodprojectIdIsSet()) {
        localVarQueryParams["associate_instance.project_id"] = parameterToString(request.getAssociateInstancePeriodprojectId());
    }
    if (request.associateInstancePeriodserviceIdIsSet()) {
        localVarQueryParams["associate_instance.service_id"] = parameterToString(request.getAssociateInstancePeriodserviceId());
    }
    if (request.associateInstancePeriodserviceTypeIsSet()) {
        localVarQueryParams["associate_instance.service_type"] = parameterToString(request.getAssociateInstancePeriodserviceType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGlobalEipSegments());

    std::shared_ptr<ListGlobalEipSegmentsResponse> localVarResult = std::make_shared<ListGlobalEipSegmentsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGlobalEipsResponse> GeipClient::listGlobalEips(ListGlobalEipsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.internetBandwidthIdIsSet()) {
        localVarQueryParams["internet_bandwidth_id"] = parameterToString(request.getInternetBandwidthId());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.nameLikeIsSet()) {
        localVarQueryParams["name_like"] = parameterToString(request.getNameLike());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.geipPoolNameIsSet()) {
        localVarQueryParams["geip_pool_name"] = parameterToString(request.getGeipPoolName());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.ipVersionIsSet()) {
        localVarQueryParams["ip_version"] = parameterToString(request.getIpVersion());
    }
    if (request.ipAddressIsSet()) {
        localVarQueryParams["ip_address"] = parameterToString(request.getIpAddress());
    }
    if (request.ipv6AddressIsSet()) {
        localVarQueryParams["ipv6_address"] = parameterToString(request.getIpv6Address());
    }
    if (request.freezenIsSet()) {
        localVarQueryParams["freezen"] = parameterToString(request.getFreezen());
    }
    if (request.pollutedIsSet()) {
        localVarQueryParams["polluted"] = parameterToString(request.getPolluted());
    }
    if (request.internetBandwidthIsNullIsSet()) {
        localVarQueryParams["internet_bandwidth_is_null"] = parameterToString(request.getInternetBandwidthIsNull());
    }
    if (request.gcbBandwidthIsNullIsSet()) {
        localVarQueryParams["gcb_bandwidth_is_null"] = parameterToString(request.getGcbBandwidthIsNull());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.associateInstanceInfoPeriodregionIsSet()) {
        localVarQueryParams["associate_instance_info.region"] = parameterToString(request.getAssociateInstanceInfoPeriodregion());
    }
    if (request.associateInstanceInfoPeriodinstanceTypeIsSet()) {
        localVarQueryParams["associate_instance_info.instance_type"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceType());
    }
    if (request.associateInstanceInfoPeriodpublicBorderGroupIsSet()) {
        localVarQueryParams["associate_instance_info.public_border_group"] = parameterToString(request.getAssociateInstanceInfoPeriodpublicBorderGroup());
    }
    if (request.associateInstanceInfoPeriodinstanceSiteIsSet()) {
        localVarQueryParams["associate_instance_info.instance_site"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceSite());
    }
    if (request.associateInstanceInfoPeriodinstanceIdIsSet()) {
        localVarQueryParams["associate_instance_info.instance_id"] = parameterToString(request.getAssociateInstanceInfoPeriodinstanceId());
    }
    if (request.associateInstanceInfoPeriodprojectIdIsSet()) {
        localVarQueryParams["associate_instance_info.project_id"] = parameterToString(request.getAssociateInstanceInfoPeriodprojectId());
    }
    if (request.associateInstanceInfoPeriodserviceIdIsSet()) {
        localVarQueryParams["associate_instance_info.service_id"] = parameterToString(request.getAssociateInstanceInfoPeriodserviceId());
    }
    if (request.associateInstanceInfoPeriodserviceTypeIsSet()) {
        localVarQueryParams["associate_instance_info.service_type"] = parameterToString(request.getAssociateInstanceInfoPeriodserviceType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListGlobalEips());

    std::shared_ptr<ListGlobalEipsResponse> localVarResult = std::make_shared<ListGlobalEipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGeipSegmentTagsResponse> GeipClient::showGeipSegmentTags(ShowGeipSegmentTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip-segment/{resource_id}/tags";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowGeipSegmentTags());

    std::shared_ptr<ShowGeipSegmentTagsResponse> localVarResult = std::make_shared<ShowGeipSegmentTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGlobalEipResponse> GeipClient::showGlobalEip(ShowGlobalEipRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowGlobalEip());

    std::shared_ptr<ShowGlobalEipResponse> localVarResult = std::make_shared<ShowGlobalEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGlobalEipSegmentResponse> GeipClient::showGlobalEipSegment(ShowGlobalEipSegmentRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/{global_eip_segment_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_segment_id"] = parameterToString(request.getGlobalEipSegmentId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowGlobalEipSegment());

    std::shared_ptr<ShowGlobalEipSegmentResponse> localVarResult = std::make_shared<ShowGlobalEipSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGlobalEipTagsResponse> GeipClient::showGlobalEipTags(ShowGlobalEipTagsRequest &request)
{
    std::string localVarPath = "/v3/global-eip/{resource_id}/tags";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowGlobalEipTags());

    std::shared_ptr<ShowGlobalEipTagsResponse> localVarResult = std::make_shared<ShowGlobalEipTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGlobalEipResponse> GeipClient::updateGlobalEip(UpdateGlobalEipRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/{global_eip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_id"] = parameterToString(request.getGlobalEipId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForUpdateGlobalEip());

    std::shared_ptr<UpdateGlobalEipResponse> localVarResult = std::make_shared<UpdateGlobalEipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateGlobalEipSegmentResponse> GeipClient::updateGlobalEipSegment(UpdateGlobalEipSegmentRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eip-segments/{global_eip_segment_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["global_eip_segment_id"] = parameterToString(request.getGlobalEipSegmentId());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForUpdateGlobalEipSegment());

    std::shared_ptr<UpdateGlobalEipSegmentResponse> localVarResult = std::make_shared<UpdateGlobalEipSegmentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListJobsResponse> GeipClient::listJobs(ListJobsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/jobs";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListJobs());

    std::shared_ptr<ListJobsResponse> localVarResult = std::make_shared<ListJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobsResponse> GeipClient::showJobs(ShowJobsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/jobs/{job_id}";

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

    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForShowJobs());

    std::shared_ptr<ShowJobsResponse> localVarResult = std::make_shared<ShowJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSupportRegionsResponse> GeipClient::listSupportRegions(ListSupportRegionsRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/geip/support-regions";

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
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.pageReverseIsSet()) {
        localVarQueryParams["page_reverse"] = parameterToString(request.isPageReverse());
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
    if (request.instanceTypeIsSet()) {
        localVarQueryParams["instance_type"] = parameterToString(request.getInstanceType());
    }
    if (request.publicBorderGroupIsSet()) {
        localVarQueryParams["public_border_group"] = parameterToString(request.getPublicBorderGroup());
    }
    if (request.accessSiteIsSet()) {
        localVarQueryParams["access_site"] = parameterToString(request.getAccessSite());
    }
    if (request.regionIdIsSet()) {
        localVarQueryParams["region_id"] = parameterToString(request.getRegionId());
    }
    if (request.remoteEndpointIsSet()) {
        localVarQueryParams["remote_endpoint"] = parameterToString(request.getRemoteEndpoint());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListSupportRegions());

    std::shared_ptr<ListSupportRegionsResponse> localVarResult = std::make_shared<ListSupportRegionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTenantGeipSupportInstancesResponse> GeipClient::listTenantGeipSupportInstances(ListTenantGeipSupportInstancesRequest &request)
{
    std::string localVarPath = "/v3/{domain_id}/global-eips/support-instances/{access_site}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["access_site"] = parameterToString(request.getAccessSite());

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
        localVarHeaderParams, localVarHttpBody, GeipMeta::genRequestDefForListTenantGeipSupportInstances());

    std::shared_ptr<ListTenantGeipSupportInstancesResponse> localVarResult = std::make_shared<ListTenantGeipSupportInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string GeipClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string GeipClient::parameterToString(std::string value)
{
    return value;
}

std::string GeipClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GeipClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string GeipClient::parameterToString(float value)
{
    return toString(value);
}

std::string GeipClient::parameterToString(double value)
{
    return toString(value);
}

std::string GeipClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string GeipClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

