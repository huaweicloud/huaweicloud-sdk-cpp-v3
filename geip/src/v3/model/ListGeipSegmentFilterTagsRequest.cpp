

#include "huaweicloud/geip/v3/model/ListGeipSegmentFilterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipSegmentFilterTagsRequest::ListGeipSegmentFilterTagsRequest()
{
    limitIsSet_ = false;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListGeipSegmentFilterTagsRequest::~ListGeipSegmentFilterTagsRequest() = default;

void ListGeipSegmentFilterTagsRequest::validate()
{
}

web::json::value ListGeipSegmentFilterTagsRequest::toJson() const
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
bool ListGeipSegmentFilterTagsRequest::fromJson(const web::json::value& val)
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


std::vector<int32_t>& ListGeipSegmentFilterTagsRequest::getLimit()
{
    return limit_;
}

void ListGeipSegmentFilterTagsRequest::setLimit(std::vector<int32_t> value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGeipSegmentFilterTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGeipSegmentFilterTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<int32_t>& ListGeipSegmentFilterTagsRequest::getOffset()
{
    return offset_;
}

void ListGeipSegmentFilterTagsRequest::setOffset(std::vector<int32_t> value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGeipSegmentFilterTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGeipSegmentFilterTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ListResourcesByTagsRequestBody ListGeipSegmentFilterTagsRequest::getBody() const
{
    return body_;
}

void ListGeipSegmentFilterTagsRequest::setBody(const ListResourcesByTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGeipSegmentFilterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGeipSegmentFilterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


