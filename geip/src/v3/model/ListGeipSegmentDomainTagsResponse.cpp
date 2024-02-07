

#include "huaweicloud/geip/v3/model/ListGeipSegmentDomainTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipSegmentDomainTagsResponse::ListGeipSegmentDomainTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGeipSegmentDomainTagsResponse::~ListGeipSegmentDomainTagsResponse() = default;

void ListGeipSegmentDomainTagsResponse::validate()
{
}

web::json::value ListGeipSegmentDomainTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGeipSegmentDomainTagsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<GetAccountTagsV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::string ListGeipSegmentDomainTagsResponse::getRequestId() const
{
    return requestId_;
}

void ListGeipSegmentDomainTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGeipSegmentDomainTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGeipSegmentDomainTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListGeipSegmentDomainTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGeipSegmentDomainTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGeipSegmentDomainTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGeipSegmentDomainTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<GetAccountTagsV2>& ListGeipSegmentDomainTagsResponse::getTags()
{
    return tags_;
}

void ListGeipSegmentDomainTagsResponse::setTags(const std::vector<GetAccountTagsV2>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGeipSegmentDomainTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGeipSegmentDomainTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListGeipSegmentDomainTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGeipSegmentDomainTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGeipSegmentDomainTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGeipSegmentDomainTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


