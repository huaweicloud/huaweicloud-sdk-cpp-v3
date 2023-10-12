

#include "huaweicloud/eip/v3/model/ListBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListBandwidthResponse::ListBandwidthResponse()
{
    eipBandwidthsIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListBandwidthResponse::~ListBandwidthResponse() = default;

void ListBandwidthResponse::validate()
{
}

web::json::value ListBandwidthResponse::toJson() const
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
bool ListBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<BandwidthResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipBandwidths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoOption refVal;
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


std::vector<BandwidthResponseBody>& ListBandwidthResponse::getEipBandwidths()
{
    return eipBandwidths_;
}

void ListBandwidthResponse::setEipBandwidths(const std::vector<BandwidthResponseBody>& value)
{
    eipBandwidths_ = value;
    eipBandwidthsIsSet_ = true;
}

bool ListBandwidthResponse::eipBandwidthsIsSet() const
{
    return eipBandwidthsIsSet_;
}

void ListBandwidthResponse::unseteipBandwidths()
{
    eipBandwidthsIsSet_ = false;
}

PageInfoOption ListBandwidthResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListBandwidthResponse::setPageInfo(const PageInfoOption& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListBandwidthResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListBandwidthResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void ListBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


