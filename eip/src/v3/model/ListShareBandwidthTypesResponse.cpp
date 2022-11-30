

#include "huaweicloud/eip/v3/model/ListShareBandwidthTypesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListShareBandwidthTypesResponse::ListShareBandwidthTypesResponse()
{
    shareBandwidthTypesIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListShareBandwidthTypesResponse::~ListShareBandwidthTypesResponse() = default;

void ListShareBandwidthTypesResponse::validate()
{
}

web::json::value ListShareBandwidthTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shareBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("share_bandwidth_types")] = ModelBase::toJson(shareBandwidthTypes_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListShareBandwidthTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("share_bandwidth_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_bandwidth_types"));
        if(!fieldValue.is_null())
        {
            std::vector<ShareBandwidthTypeShowResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareBandwidthTypes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ShareBandwidthTypeShowResp>& ListShareBandwidthTypesResponse::getShareBandwidthTypes()
{
    return shareBandwidthTypes_;
}

void ListShareBandwidthTypesResponse::setShareBandwidthTypes(const std::vector<ShareBandwidthTypeShowResp>& value)
{
    shareBandwidthTypes_ = value;
    shareBandwidthTypesIsSet_ = true;
}

bool ListShareBandwidthTypesResponse::shareBandwidthTypesIsSet() const
{
    return shareBandwidthTypesIsSet_;
}

void ListShareBandwidthTypesResponse::unsetshareBandwidthTypes()
{
    shareBandwidthTypesIsSet_ = false;
}

std::string ListShareBandwidthTypesResponse::getRequestId() const
{
    return requestId_;
}

void ListShareBandwidthTypesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListShareBandwidthTypesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListShareBandwidthTypesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

PageInfoOption ListShareBandwidthTypesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListShareBandwidthTypesResponse::setPageInfo(const PageInfoOption& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListShareBandwidthTypesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListShareBandwidthTypesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


