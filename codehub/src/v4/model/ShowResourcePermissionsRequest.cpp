

#include "huaweicloud/codehub/v4/model/ShowResourcePermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowResourcePermissionsRequest::ShowResourcePermissionsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    resourceId_ = 0;
    resourceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowResourcePermissionsRequest::~ShowResourcePermissionsRequest() = default;

void ShowResourcePermissionsRequest::validate()
{
}

web::json::value ShowResourcePermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowResourcePermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ShowResourcePermissionsRequest::getGroupId() const
{
    return groupId_;
}

void ShowResourcePermissionsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowResourcePermissionsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowResourcePermissionsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ShowResourcePermissionsRequest::getResourceId() const
{
    return resourceId_;
}

void ShowResourcePermissionsRequest::setResourceId(int32_t value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowResourcePermissionsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowResourcePermissionsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t ShowResourcePermissionsRequest::getOffset() const
{
    return offset_;
}

void ShowResourcePermissionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowResourcePermissionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowResourcePermissionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowResourcePermissionsRequest::getLimit() const
{
    return limit_;
}

void ShowResourcePermissionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowResourcePermissionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowResourcePermissionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


