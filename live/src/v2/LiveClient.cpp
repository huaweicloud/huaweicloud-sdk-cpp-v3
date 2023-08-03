#include <huaweicloud/live/v2/LiveClient.h>
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
namespace Live {
namespace V2 {

using namespace HuaweiCloud::Sdk::Live::V2::Model;

LiveClient::LiveClient()
{
}

LiveClient::~LiveClient()
{
}

ClientBuilder<LiveClient> LiveClient::newBuilder()
{
    return ClientBuilder<LiveClient>("BasicCredentials");
}
std::shared_ptr<ListAreaDetailResponse> LiveClient::listAreaDetail(ListAreaDetailRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/area/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


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
    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.areaIsSet()) {
        localVarQueryParams["area"] = parameterToString(request.getArea());
    }
    if (request.metricIsSet()) {
        localVarQueryParams["metric"] = parameterToString(request.getMetric());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListAreaDetailResponse> localVarResult = std::make_shared<ListAreaDetailResponse>();

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
std::shared_ptr<ListBandwidthDetailResponse> LiveClient::listBandwidthDetail(ListBandwidthDetailRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/bandwidth/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.countryIsSet()) {
        localVarQueryParams["country"] = parameterToString(request.getCountry());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListBandwidthDetailResponse> localVarResult = std::make_shared<ListBandwidthDetailResponse>();

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
std::shared_ptr<ListDomainBandwidthPeakResponse> LiveClient::listDomainBandwidthPeak(ListDomainBandwidthPeakRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/bandwidth/peak";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDomainBandwidthPeakResponse> localVarResult = std::make_shared<ListDomainBandwidthPeakResponse>();

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
std::shared_ptr<ListDomainTrafficDetailResponse> LiveClient::listDomainTrafficDetail(ListDomainTrafficDetailRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/traffic/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDomainTrafficDetailResponse> localVarResult = std::make_shared<ListDomainTrafficDetailResponse>();

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
std::shared_ptr<ListDomainTrafficSummaryResponse> LiveClient::listDomainTrafficSummary(ListDomainTrafficSummaryRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/traffic/summary";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListDomainTrafficSummaryResponse> localVarResult = std::make_shared<ListDomainTrafficSummaryResponse>();

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
std::shared_ptr<ListHistoryStreamsResponse> LiveClient::listHistoryStreams(ListHistoryStreamsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/history/streams";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainIsSet()) {
        localVarQueryParams["domain"] = parameterToString(request.getDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListHistoryStreamsResponse> localVarResult = std::make_shared<ListHistoryStreamsResponse>();

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
std::shared_ptr<ListQueryHttpCodeResponse> LiveClient::listQueryHttpCode(ListQueryHttpCodeRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/httpcodes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainsIsSet()) {
        localVarQueryParams["play_domains"] = parameterToString(request.getPlayDomains());
    }
    if (request.codeIsSet()) {
        localVarQueryParams["code"] = parameterToString(request.getCode());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListQueryHttpCodeResponse> localVarResult = std::make_shared<ListQueryHttpCodeResponse>();

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
std::shared_ptr<ListRecordDataResponse> LiveClient::listRecordData(ListRecordDataRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/record";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainIsSet()) {
        localVarQueryParams["publish_domain"] = parameterToString(request.getPublishDomain());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListRecordDataResponse> localVarResult = std::make_shared<ListRecordDataResponse>();

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
std::shared_ptr<ListSnapshotDataResponse> LiveClient::listSnapshotData(ListSnapshotDataRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/snapshot";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainIsSet()) {
        localVarQueryParams["publish_domain"] = parameterToString(request.getPublishDomain());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListSnapshotDataResponse> localVarResult = std::make_shared<ListSnapshotDataResponse>();

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
std::shared_ptr<ListTranscodeDataResponse> LiveClient::listTranscodeData(ListTranscodeDataRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/transcode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainIsSet()) {
        localVarQueryParams["publish_domain"] = parameterToString(request.getPublishDomain());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListTranscodeDataResponse> localVarResult = std::make_shared<ListTranscodeDataResponse>();

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
std::shared_ptr<ListUsersOfStreamResponse> LiveClient::listUsersOfStream(ListUsersOfStreamRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/user";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainIsSet()) {
        localVarQueryParams["play_domain"] = parameterToString(request.getPlayDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.countryIsSet()) {
        localVarQueryParams["country"] = parameterToString(request.getCountry());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.protocolIsSet()) {
        localVarQueryParams["protocol"] = parameterToString(request.getProtocol());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.serviceTypeIsSet()) {
        localVarQueryParams["service_type"] = parameterToString(request.getServiceType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListUsersOfStreamResponse> localVarResult = std::make_shared<ListUsersOfStreamResponse>();

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
std::shared_ptr<ShowStreamCountResponse> LiveClient::showStreamCount(ShowStreamCountRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/stream-count";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainsIsSet()) {
        localVarQueryParams["publish_domains"] = parameterToString(request.getPublishDomains());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowStreamCountResponse> localVarResult = std::make_shared<ShowStreamCountResponse>();

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
std::shared_ptr<ShowStreamPortraitResponse> LiveClient::showStreamPortrait(ShowStreamPortraitRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/stream-portraits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.playDomainIsSet()) {
        localVarQueryParams["play_domain"] = parameterToString(request.getPlayDomain());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.timeIsSet()) {
        localVarQueryParams["time"] = parameterToString(request.getTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowStreamPortraitResponse> localVarResult = std::make_shared<ShowStreamPortraitResponse>();

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
std::shared_ptr<ShowUpBandwidthResponse> LiveClient::showUpBandwidth(ShowUpBandwidthRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/up-bandwidth/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainsIsSet()) {
        localVarQueryParams["publish_domains"] = parameterToString(request.getPublishDomains());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.ispIsSet()) {
        localVarQueryParams["isp"] = parameterToString(request.getIsp());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ShowUpBandwidthResponse> localVarResult = std::make_shared<ShowUpBandwidthResponse>();

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
std::shared_ptr<ListSingleStreamBitrateResponse> LiveClient::listSingleStreamBitrate(ListSingleStreamBitrateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/stream/bitrate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainIsSet()) {
        localVarQueryParams["domain"] = parameterToString(request.getDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListSingleStreamBitrateResponse> localVarResult = std::make_shared<ListSingleStreamBitrateResponse>();

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
std::shared_ptr<ListSingleStreamDetailResponse> LiveClient::listSingleStreamDetail(ListSingleStreamDetailRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/stream-detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainIsSet()) {
        localVarQueryParams["publish_domain"] = parameterToString(request.getPublishDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListSingleStreamDetailResponse> localVarResult = std::make_shared<ListSingleStreamDetailResponse>();

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
std::shared_ptr<ListSingleStreamFramerateResponse> LiveClient::listSingleStreamFramerate(ListSingleStreamFramerateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/stream/framerate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainIsSet()) {
        localVarQueryParams["domain"] = parameterToString(request.getDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListSingleStreamFramerateResponse> localVarResult = std::make_shared<ListSingleStreamFramerateResponse>();

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
std::shared_ptr<ListUpStreamDetailResponse> LiveClient::listUpStreamDetail(ListUpStreamDetailRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/stats/up-stream/detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.publishDomainIsSet()) {
        localVarQueryParams["publish_domain"] = parameterToString(request.getPublishDomain());
    }
    if (request.appIsSet()) {
        localVarQueryParams["app"] = parameterToString(request.getApp());
    }
    if (request.streamIsSet()) {
        localVarQueryParams["stream"] = parameterToString(request.getStream());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<ListUpStreamDetailResponse> localVarResult = std::make_shared<ListUpStreamDetailResponse>();

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
std::string LiveClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string LiveClient::parameterToString(std::string value)
{
    return value;
}

std::string LiveClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string LiveClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string LiveClient::parameterToString(float value)
{
    return toString(value);
}

std::string LiveClient::parameterToString(double value)
{
    return toString(value);
}

std::string LiveClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string LiveClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

