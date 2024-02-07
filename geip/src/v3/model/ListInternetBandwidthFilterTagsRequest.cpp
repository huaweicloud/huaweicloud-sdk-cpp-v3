

#include "huaweicloud/geip/v3/model/ListInternetBandwidthFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthFilterTagsRequest::ListInternetBandwidthFilterTagsRequest()
{
    limitIsSet_ = false;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListInternetBandwidthFilterTagsRequest::~ListInternetBandwidthFilterTagsRequest() = default;

void ListInternetBandwidthFilterTagsRequest::validate()
{
}

web::json::value ListInternetBandwidthFilterTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListInternetBandwidthFilterTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListResourcesByTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ListInternetBandwidthFilterTagsRequest::getLimit()
{
    return limit_;
}

void ListInternetBandwidthFilterTagsRequest::setLimit(std::vector<int32_t> value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInternetBandwidthFilterTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<int32_t>& ListInternetBandwidthFilterTagsRequest::getOffset()
{
    return offset_;
}

void ListInternetBandwidthFilterTagsRequest::setOffset(std::vector<int32_t> value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInternetBandwidthFilterTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ListResourcesByTagsRequestBody ListInternetBandwidthFilterTagsRequest::getBody() const
{
    return body_;
}

void ListInternetBandwidthFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInternetBandwidthFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInternetBandwidthFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


