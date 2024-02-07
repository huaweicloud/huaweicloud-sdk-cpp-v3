

#include "huaweicloud/geip/v3/model/ListInternetBandwidthsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthsResponse::ListInternetBandwidthsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInternetBandwidthsResponse::~ListInternetBandwidthsResponse() = default;

void ListInternetBandwidthsResponse::validate()
{
}

web::json::value ListInternetBandwidthsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(internetBandwidthsIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidths")] = ModelBase::toJson(internetBandwidths_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListInternetBandwidthsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInternetBandwidths> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListGlobalEipsResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListInternetBandwidthsResponse::getRequestId() const
{
    return requestId_;
}

void ListInternetBandwidthsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListInternetBandwidthsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListInternetBandwidthsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListInternetBandwidths>& ListInternetBandwidthsResponse::getInternetBandwidths()
{
    return internetBandwidths_;
}

void ListInternetBandwidthsResponse::setInternetBandwidths(const std::vector<ListInternetBandwidths>& value)
{
    internetBandwidths_ = value;
    internetBandwidthsIsSet_ = true;
}

bool ListInternetBandwidthsResponse::internetBandwidthsIsSet() const
{
    return internetBandwidthsIsSet_;
}

void ListInternetBandwidthsResponse::unsetinternetBandwidths()
{
    internetBandwidthsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListInternetBandwidthsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListInternetBandwidthsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListInternetBandwidthsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListInternetBandwidthsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListInternetBandwidthsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInternetBandwidthsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInternetBandwidthsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInternetBandwidthsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


