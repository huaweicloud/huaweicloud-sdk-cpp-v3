

#include "huaweicloud/eip/v3/model/ListEipBandwidthsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListEipBandwidthsResponse::ListEipBandwidthsResponse()
{
    eipBandwidthsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListEipBandwidthsResponse::~ListEipBandwidthsResponse() = default;

void ListEipBandwidthsResponse::validate()
{
}

web::json::value ListEipBandwidthsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipBandwidthsIsSet_) {
        val[utility::conversions::to_string_t("eip_bandwidths")] = ModelBase::toJson(eipBandwidths_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListEipBandwidthsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<EipBandwidthResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipBandwidths(refVal);
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


std::vector<EipBandwidthResponseBody>& ListEipBandwidthsResponse::getEipBandwidths()
{
    return eipBandwidths_;
}

void ListEipBandwidthsResponse::setEipBandwidths(const std::vector<EipBandwidthResponseBody>& value)
{
    eipBandwidths_ = value;
    eipBandwidthsIsSet_ = true;
}

bool ListEipBandwidthsResponse::eipBandwidthsIsSet() const
{
    return eipBandwidthsIsSet_;
}

void ListEipBandwidthsResponse::unseteipBandwidths()
{
    eipBandwidthsIsSet_ = false;
}

PageInfoDict ListEipBandwidthsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEipBandwidthsResponse::setPageInfo(const PageInfoDict& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEipBandwidthsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEipBandwidthsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListEipBandwidthsResponse::getRequestId() const
{
    return requestId_;
}

void ListEipBandwidthsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListEipBandwidthsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListEipBandwidthsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


