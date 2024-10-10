#include <huaweicloud/aad/v2/AadClient.h>
#include <huaweicloud/aad/v2/AadMeta.h>

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
namespace Aad {
namespace V2 {

using namespace HuaweiCloud::Sdk::Aad::V2::Model;

AadClient::AadClient()
{
}

AadClient::~AadClient()
{
}

ClientBuilder<AadClient> AadClient::newBuilder()
{
    return ClientBuilder<AadClient>("GlobalCredentials");
}
std::shared_ptr<CreateDomainResponse> AadClient::createDomain(CreateDomainRequest &request)
{
    std::string localVarPath = "/v2/aad/domains";

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
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForCreateDomain());

    std::shared_ptr<CreateDomainResponse> localVarResult = std::make_shared<CreateDomainResponse>();
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
std::shared_ptr<ListDDoSAttackEventResponse> AadClient::listDDoSAttackEvent(ListDDoSAttackEventRequest &request)
{
    std::string localVarPath = "/v2/aad/instances/{instance_id}/ddos-info/attack/events";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListDDoSAttackEvent());

    std::shared_ptr<ListDDoSAttackEventResponse> localVarResult = std::make_shared<ListDDoSAttackEventResponse>();
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
std::shared_ptr<ListDDoSConnectionNumberResponse> AadClient::listDDoSConnectionNumber(ListDDoSConnectionNumberRequest &request)
{
    std::string localVarPath = "/v2/aad/instances/{instance_id}/ddos-info/flow/connection-numbers";

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

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.ipIsSet()) {
        localVarQueryParams["ip"] = parameterToString(request.getIp());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListDDoSConnectionNumber());

    std::shared_ptr<ListDDoSConnectionNumberResponse> localVarResult = std::make_shared<ListDDoSConnectionNumberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDDoSFlowResponse> AadClient::listDDoSFlow(ListDDoSFlowRequest &request)
{
    std::string localVarPath = "/v2/aad/instances/{instance_id}/ddos-info/flow";

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

    if (request.ipIsSet()) {
        localVarQueryParams["ip"] = parameterToString(request.getIp());
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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListDDoSFlow());

    std::shared_ptr<ListDDoSFlowResponse> localVarResult = std::make_shared<ListDDoSFlowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFrequencyControlRuleResponse> AadClient::listFrequencyControlRule(ListFrequencyControlRuleRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/waf/frequency-control-rule";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListFrequencyControlRule());

    std::shared_ptr<ListFrequencyControlRuleResponse> localVarResult = std::make_shared<ListFrequencyControlRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListInstanceDomainsResponse> AadClient::listInstanceDomains(ListInstanceDomainsRequest &request)
{
    std::string localVarPath = "/v2/aad/instances/{instance_id}/domains";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListInstanceDomains());

    std::shared_ptr<ListInstanceDomainsResponse> localVarResult = std::make_shared<ListInstanceDomainsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafAttackEventResponse> AadClient::listWafAttackEvent(ListWafAttackEventRequest &request)
{
    std::string localVarPath = "/v2/aad/domains/waf-info/attack/event";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainsIsSet()) {
        localVarQueryParams["domains"] = parameterToString(request.getDomains());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.recentIsSet()) {
        localVarQueryParams["recent"] = parameterToString(request.getRecent());
    }
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }
    if (request.sipIsSet()) {
        localVarQueryParams["sip"] = parameterToString(request.getSip());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafAttackEvent());

    std::shared_ptr<ListWafAttackEventResponse> localVarResult = std::make_shared<ListWafAttackEventResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafBandwidthResponse> AadClient::listWafBandwidth(ListWafBandwidthRequest &request)
{
    std::string localVarPath = "/v2/aad/domains/waf-info/flow/bandwidth";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainsIsSet()) {
        localVarQueryParams["domains"] = parameterToString(request.getDomains());
    }
    if (request.valueTypeIsSet()) {
        localVarQueryParams["value_type"] = parameterToString(request.getValueType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.recentIsSet()) {
        localVarQueryParams["recent"] = parameterToString(request.getRecent());
    }
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafBandwidth());

    std::shared_ptr<ListWafBandwidthResponse> localVarResult = std::make_shared<ListWafBandwidthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafCustomRuleResponse> AadClient::listWafCustomRule(ListWafCustomRuleRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/waf/custom-rule";

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
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafCustomRule());

    std::shared_ptr<ListWafCustomRuleResponse> localVarResult = std::make_shared<ListWafCustomRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafGeoIpRuleResponse> AadClient::listWafGeoIpRule(ListWafGeoIpRuleRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/waf/geoip-rule";

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
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafGeoIpRule());

    std::shared_ptr<ListWafGeoIpRuleResponse> localVarResult = std::make_shared<ListWafGeoIpRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafQpsResponse> AadClient::listWafQps(ListWafQpsRequest &request)
{
    std::string localVarPath = "/v2/aad/domains/waf-info/flow/qps";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.domainsIsSet()) {
        localVarQueryParams["domains"] = parameterToString(request.getDomains());
    }
    if (request.valueTypeIsSet()) {
        localVarQueryParams["value_type"] = parameterToString(request.getValueType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.recentIsSet()) {
        localVarQueryParams["recent"] = parameterToString(request.getRecent());
    }
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafQps());

    std::shared_ptr<ListWafQpsResponse> localVarResult = std::make_shared<ListWafQpsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWafWhiteIpRuleResponse> AadClient::listWafWhiteIpRule(ListWafWhiteIpRuleRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/waf/blackwhite-list";

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
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWafWhiteIpRule());

    std::shared_ptr<ListWafWhiteIpRuleResponse> localVarResult = std::make_shared<ListWafWhiteIpRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWhiteBlackIpRuleResponse> AadClient::listWhiteBlackIpRule(ListWhiteBlackIpRuleRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/ddos/blackwhite-list";

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
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForListWhiteBlackIpRule());

    std::shared_ptr<ListWhiteBlackIpRuleResponse> localVarResult = std::make_shared<ListWhiteBlackIpRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainCertificateResponse> AadClient::showDomainCertificate(ShowDomainCertificateRequest &request)
{
    std::string localVarPath = "/v2/aad/domains/{domain_id}/certificate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["domain_id"] = parameterToString(request.getDomainId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForShowDomainCertificate());

    std::shared_ptr<ShowDomainCertificateResponse> localVarResult = std::make_shared<ShowDomainCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFlowBlockResponse> AadClient::showFlowBlock(ShowFlowBlockRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/ddos/flow-block";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForShowFlowBlock());

    std::shared_ptr<ShowFlowBlockResponse> localVarResult = std::make_shared<ShowFlowBlockResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWafPolicyResponse> AadClient::showWafPolicy(ShowWafPolicyRequest &request)
{
    std::string localVarPath = "/v2/aad/policies/waf";

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
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForShowWafPolicy());

    std::shared_ptr<ShowWafPolicyResponse> localVarResult = std::make_shared<ShowWafPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWafQpsResponse> AadClient::showWafQps(ShowWafQpsRequest &request)
{
    std::string localVarPath = "/v2/aad/domains/waf-info/flow/request/peak";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.recentIsSet()) {
        localVarQueryParams["recent"] = parameterToString(request.getRecent());
    }
    if (request.domainsIsSet()) {
        localVarQueryParams["domains"] = parameterToString(request.getDomains());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.overseasTypeIsSet()) {
        localVarQueryParams["overseas_type"] = parameterToString(request.getOverseasType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForShowWafQps());

    std::shared_ptr<ShowWafQpsResponse> localVarResult = std::make_shared<ShowWafQpsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpgradeInstanceSpecResponse> AadClient::upgradeInstanceSpec(UpgradeInstanceSpecRequest &request)
{
    std::string localVarPath = "/v2/aad/instance";

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
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForUpgradeInstanceSpec());

    std::shared_ptr<UpgradeInstanceSpecResponse> localVarResult = std::make_shared<UpgradeInstanceSpecResponse>();
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
std::shared_ptr<DeleteDomainResponse> AadClient::deleteDomain(DeleteDomainRequest &request)
{
    std::string localVarPath = "/v2/aad/domains";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, AadMeta::genRequestDefForDeleteDomain());

    std::shared_ptr<DeleteDomainResponse> localVarResult = std::make_shared<DeleteDomainResponse>();
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
std::string AadClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string AadClient::parameterToString(std::string value)
{
    return value;
}

std::string AadClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string AadClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string AadClient::parameterToString(float value)
{
    return toString(value);
}

std::string AadClient::parameterToString(double value)
{
    return toString(value);
}

std::string AadClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string AadClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

