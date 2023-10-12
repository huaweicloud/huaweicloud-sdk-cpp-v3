#include <huaweicloud/cdn/v2/CdnClient.h>
#include <huaweicloud/cdn/v2/CdnMeta.h>

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
namespace Cdn {
namespace V2 {

using namespace HuaweiCloud::Sdk::Cdn::V2::Model;

CdnClient::CdnClient()
{
}

CdnClient::~CdnClient()
{
}

ClientBuilder<CdnClient> CdnClient::newBuilder()
{
    return ClientBuilder<CdnClient>("GlobalCredential");
}
std::shared_ptr<BatchCopyDomainResponse> CdnClient::batchCopyDomain(BatchCopyDomainRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/configuration/domains/batch-copy";

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
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForBatchCopyDomain());

    std::shared_ptr<BatchCopyDomainResponse> localVarResult = std::make_shared<BatchCopyDomainResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DownloadRegionCarrierExcelResponse> CdnClient::downloadRegionCarrierExcel(DownloadRegionCarrierExcelRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/region-carrier-excel";

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
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.countryIsSet()) {
        localVarQueryParams["country"] = parameterToString(request.getCountry());
    }
    if (request.excelLanguageIsSet()) {
        localVarQueryParams["excel_language"] = parameterToString(request.getExcelLanguage());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.excelTypeIsSet()) {
        localVarQueryParams["excel_type"] = parameterToString(request.getExcelType());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.carrierIsSet()) {
        localVarQueryParams["carrier"] = parameterToString(request.getCarrier());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForDownloadRegionCarrierExcel());

    std::shared_ptr<DownloadRegionCarrierExcelResponse> localVarResult = std::make_shared<DownloadRegionCarrierExcelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadStatisticsExcelResponse> CdnClient::downloadStatisticsExcel(DownloadStatisticsExcelRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/statistics-excel";

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
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.excelLanguageIsSet()) {
        localVarQueryParams["excel_language"] = parameterToString(request.getExcelLanguage());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.excelTypeIsSet()) {
        localVarQueryParams["excel_type"] = parameterToString(request.getExcelType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForDownloadStatisticsExcel());

    std::shared_ptr<DownloadStatisticsExcelResponse> localVarResult = std::make_shared<DownloadStatisticsExcelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainsResponse> CdnClient::listDomains(ListDomainsRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/domains";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.businessTypeIsSet()) {
        localVarQueryParams["business_type"] = parameterToString(request.getBusinessType());
    }
    if (request.domainStatusIsSet()) {
        localVarQueryParams["domain_status"] = parameterToString(request.getDomainStatus());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNumberIsSet()) {
        localVarQueryParams["page_number"] = parameterToString(request.getPageNumber());
    }
    if (request.showTagsIsSet()) {
        localVarQueryParams["show_tags"] = parameterToString(request.isShowTags());
    }
    if (request.exactMatchIsSet()) {
        localVarQueryParams["exact_match"] = parameterToString(request.isExactMatch());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForListDomains());

    std::shared_ptr<ListDomainsResponse> localVarResult = std::make_shared<ListDomainsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetChargeModesResponse> CdnClient::setChargeModes(SetChargeModesRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/charge/charge-modes";

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
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForSetChargeModes());

    std::shared_ptr<SetChargeModesResponse> localVarResult = std::make_shared<SetChargeModesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowBandwidthCalcResponse> CdnClient::showBandwidthCalc(ShowBandwidthCalcRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/bandwidth-calc";

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
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.calcTypeIsSet()) {
        localVarQueryParams["calc_type"] = parameterToString(request.getCalcType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowBandwidthCalc());

    std::shared_ptr<ShowBandwidthCalcResponse> localVarResult = std::make_shared<ShowBandwidthCalcResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowChargeModesResponse> CdnClient::showChargeModes(ShowChargeModesRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/charge/charge-modes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.productTypeIsSet()) {
        localVarQueryParams["product_type"] = parameterToString(request.getProductType());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowChargeModes());

    std::shared_ptr<ShowChargeModesResponse> localVarResult = std::make_shared<ShowChargeModesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainDetailByNameResponse> CdnClient::showDomainDetailByName(ShowDomainDetailByNameRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/configuration/domains/{domain_name}";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowDomainDetailByName());

    std::shared_ptr<ShowDomainDetailByNameResponse> localVarResult = std::make_shared<ShowDomainDetailByNameResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainFullConfigResponse> CdnClient::showDomainFullConfig(ShowDomainFullConfigRequest &request)
{
    std::string localVarPath = "/v1.1/cdn/configuration/domains/{domain_name}/configs";

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
    if (request.showSpecialConfigsIsSet()) {
        localVarQueryParams["show_special_configs"] = parameterToString(request.getShowSpecialConfigs());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowDomainFullConfig());

    std::shared_ptr<ShowDomainFullConfigResponse> localVarResult = std::make_shared<ShowDomainFullConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainLocationStatsResponse> CdnClient::showDomainLocationStats(ShowDomainLocationStatsRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/domain-location-stats";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.statTypeIsSet()) {
        localVarQueryParams["stat_type"] = parameterToString(request.getStatType());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.countryIsSet()) {
        localVarQueryParams["country"] = parameterToString(request.getCountry());
    }
    if (request.provinceIsSet()) {
        localVarQueryParams["province"] = parameterToString(request.getProvince());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.groupByIsSet()) {
        localVarQueryParams["group_by"] = parameterToString(request.getGroupBy());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowDomainLocationStats());

    std::shared_ptr<ShowDomainLocationStatsResponse> localVarResult = std::make_shared<ShowDomainLocationStatsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainStatsResponse> CdnClient::showDomainStats(ShowDomainStatsRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/domain-stats";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.statTypeIsSet()) {
        localVarQueryParams["stat_type"] = parameterToString(request.getStatType());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.groupByIsSet()) {
        localVarQueryParams["group_by"] = parameterToString(request.getGroupBy());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowDomainStats());

    std::shared_ptr<ShowDomainStatsResponse> localVarResult = std::make_shared<ShowDomainStatsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTopDomainNamesResponse> CdnClient::showTopDomainNames(ShowTopDomainNamesRequest &request)
{
    std::string localVarPath = "/v1/cdn/statistics/top-domain-names";

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
    if (request.statTypeIsSet()) {
        localVarQueryParams["stat_type"] = parameterToString(request.getStatType());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowTopDomainNames());

    std::shared_ptr<ShowTopDomainNamesResponse> localVarResult = std::make_shared<ShowTopDomainNamesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTopUrlResponse> CdnClient::showTopUrl(ShowTopUrlRequest &request)
{
    std::string localVarPath = "/v1.0/cdn/statistics/top-url";

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
    if (request.domainNameIsSet()) {
        localVarQueryParams["domain_name"] = parameterToString(request.getDomainName());
    }
    if (request.statTypeIsSet()) {
        localVarQueryParams["stat_type"] = parameterToString(request.getStatType());
    }
    if (request.serviceAreaIsSet()) {
        localVarQueryParams["service_area"] = parameterToString(request.getServiceArea());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForShowTopUrl());

    std::shared_ptr<ShowTopUrlResponse> localVarResult = std::make_shared<ShowTopUrlResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDomainFullConfigResponse> CdnClient::updateDomainFullConfig(UpdateDomainFullConfigRequest &request)
{
    std::string localVarPath = "/v1.1/cdn/configuration/domains/{domain_name}/configs";

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

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CdnMeta::genRequestDefForUpdateDomainFullConfig());

    std::shared_ptr<UpdateDomainFullConfigResponse> localVarResult = std::make_shared<UpdateDomainFullConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
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
std::string CdnClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CdnClient::parameterToString(std::string value)
{
    return value;
}

std::string CdnClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CdnClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CdnClient::parameterToString(float value)
{
    return toString(value);
}

std::string CdnClient::parameterToString(double value)
{
    return toString(value);
}

std::string CdnClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CdnClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

