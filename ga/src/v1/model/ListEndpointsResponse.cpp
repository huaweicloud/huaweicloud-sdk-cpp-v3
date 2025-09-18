

#include "huaweicloud/ga/v1/model/ListEndpointsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListEndpointsResponse::ListEndpointsResponse()
{
    endpointsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListEndpointsResponse::~ListEndpointsResponse() = default;

void ListEndpointsResponse::validate()
{
}

web::json::value ListEndpointsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListEndpointsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<EndpointDetail>& ListEndpointsResponse::getEndpoints()
{
    return endpoints_;
}

void ListEndpointsResponse::setEndpoints(const std::vector<EndpointDetail>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ListEndpointsResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ListEndpointsResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

PageInfo ListEndpointsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEndpointsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEndpointsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEndpointsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListEndpointsResponse::getRequestId() const
{
    return requestId_;
}

void ListEndpointsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListEndpointsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListEndpointsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


