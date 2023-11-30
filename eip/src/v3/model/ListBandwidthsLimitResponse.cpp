

#include "huaweicloud/eip/v3/model/ListBandwidthsLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListBandwidthsLimitResponse::ListBandwidthsLimitResponse()
{
    eipBandwidthLimitsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListBandwidthsLimitResponse::~ListBandwidthsLimitResponse() = default;

void ListBandwidthsLimitResponse::validate()
{
}

web::json::value ListBandwidthsLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipBandwidthLimitsIsSet_) {
        val[utility::conversions::to_string_t("eip_bandwidth_limits")] = ModelBase::toJson(eipBandwidthLimits_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListBandwidthsLimitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_bandwidth_limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_bandwidth_limits"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowTenantDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipBandwidthLimits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDict refVal;
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


std::vector<ShowTenantDict>& ListBandwidthsLimitResponse::getEipBandwidthLimits()
{
    return eipBandwidthLimits_;
}

void ListBandwidthsLimitResponse::setEipBandwidthLimits(const std::vector<ShowTenantDict>& value)
{
    eipBandwidthLimits_ = value;
    eipBandwidthLimitsIsSet_ = true;
}

bool ListBandwidthsLimitResponse::eipBandwidthLimitsIsSet() const
{
    return eipBandwidthLimitsIsSet_;
}

void ListBandwidthsLimitResponse::unseteipBandwidthLimits()
{
    eipBandwidthLimitsIsSet_ = false;
}

PageInfoDict ListBandwidthsLimitResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListBandwidthsLimitResponse::setPageInfo(const PageInfoDict& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListBandwidthsLimitResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListBandwidthsLimitResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListBandwidthsLimitResponse::getRequestId() const
{
    return requestId_;
}

void ListBandwidthsLimitResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListBandwidthsLimitResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListBandwidthsLimitResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


