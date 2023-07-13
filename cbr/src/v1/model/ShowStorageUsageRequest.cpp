

#include "huaweicloud/cbr/v1/model/ShowStorageUsageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowStorageUsageRequest::ShowStorageUsageRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ShowStorageUsageRequest::~ShowStorageUsageRequest() = default;

void ShowStorageUsageRequest::validate()
{
}

web::json::value ShowStorageUsageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}

bool ShowStorageUsageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}

int32_t ShowStorageUsageRequest::getLimit() const
{
    return limit_;
}

void ShowStorageUsageRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowStorageUsageRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowStorageUsageRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowStorageUsageRequest::getOffset() const
{
    return offset_;
}

void ShowStorageUsageRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowStorageUsageRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowStorageUsageRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowStorageUsageRequest::getResourceId() const
{
    return resourceId_;
}

void ShowStorageUsageRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowStorageUsageRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowStorageUsageRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ShowStorageUsageRequest::getResourceType() const
{
    return resourceType_;
}

void ShowStorageUsageRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowStorageUsageRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowStorageUsageRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


