

#include "huaweicloud/geip/v3/model/ListGlobalEipDomainTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipDomainTagsResponse::ListGlobalEipDomainTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGlobalEipDomainTagsResponse::~ListGlobalEipDomainTagsResponse() = default;

void ListGlobalEipDomainTagsResponse::validate()
{
}

web::json::value ListGlobalEipDomainTagsResponse::toJson() const
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
bool ListGlobalEipDomainTagsResponse::fromJson(const web::json::value& val)
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
            std::vector<GeipTags> refVal;
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


std::string ListGlobalEipDomainTagsResponse::getRequestId() const
{
    return requestId_;
}

void ListGlobalEipDomainTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGlobalEipDomainTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGlobalEipDomainTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListGlobalEipDomainTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGlobalEipDomainTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGlobalEipDomainTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGlobalEipDomainTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<GeipTags>& ListGlobalEipDomainTagsResponse::getTags()
{
    return tags_;
}

void ListGlobalEipDomainTagsResponse::setTags(const std::vector<GeipTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGlobalEipDomainTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGlobalEipDomainTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListGlobalEipDomainTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGlobalEipDomainTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGlobalEipDomainTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGlobalEipDomainTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


