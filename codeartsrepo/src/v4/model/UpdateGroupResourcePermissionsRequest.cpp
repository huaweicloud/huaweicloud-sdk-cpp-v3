

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupResourcePermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupResourcePermissionsRequest::UpdateGroupResourcePermissionsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    resourceId_ = 0;
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupResourcePermissionsRequest::~UpdateGroupResourcePermissionsRequest() = default;

void UpdateGroupResourcePermissionsRequest::validate()
{
}

web::json::value UpdateGroupResourcePermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGroupResourcePermissionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePermissionBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupResourcePermissionsRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupResourcePermissionsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupResourcePermissionsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupResourcePermissionsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t UpdateGroupResourcePermissionsRequest::getResourceId() const
{
    return resourceId_;
}

void UpdateGroupResourcePermissionsRequest::setResourceId(int32_t value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool UpdateGroupResourcePermissionsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void UpdateGroupResourcePermissionsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

UpdatePermissionBodyDto UpdateGroupResourcePermissionsRequest::getBody() const
{
    return body_;
}

void UpdateGroupResourcePermissionsRequest::setBody(const UpdatePermissionBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupResourcePermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupResourcePermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


