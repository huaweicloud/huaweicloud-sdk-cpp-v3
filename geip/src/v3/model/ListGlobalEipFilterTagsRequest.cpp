

#include "huaweicloud/geip/v3/model/ListGlobalEipFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipFilterTagsRequest::ListGlobalEipFilterTagsRequest()
{
    limitIsSet_ = false;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListGlobalEipFilterTagsRequest::~ListGlobalEipFilterTagsRequest() = default;

void ListGlobalEipFilterTagsRequest::validate()
{
}

web::json::value ListGlobalEipFilterTagsRequest::toJson() const
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
bool ListGlobalEipFilterTagsRequest::fromJson(const web::json::value& val)
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


std::vector<int32_t>& ListGlobalEipFilterTagsRequest::getLimit()
{
    return limit_;
}

void ListGlobalEipFilterTagsRequest::setLimit(std::vector<int32_t> value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGlobalEipFilterTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGlobalEipFilterTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<int32_t>& ListGlobalEipFilterTagsRequest::getOffset()
{
    return offset_;
}

void ListGlobalEipFilterTagsRequest::setOffset(std::vector<int32_t> value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGlobalEipFilterTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGlobalEipFilterTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ListResourcesByTagsRequestBody ListGlobalEipFilterTagsRequest::getBody() const
{
    return body_;
}

void ListGlobalEipFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGlobalEipFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGlobalEipFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


