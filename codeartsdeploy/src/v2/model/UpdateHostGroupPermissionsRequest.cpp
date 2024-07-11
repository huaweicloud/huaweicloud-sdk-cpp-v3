

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostGroupPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostGroupPermissionsRequest::UpdateHostGroupPermissionsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHostGroupPermissionsRequest::~UpdateHostGroupPermissionsRequest() = default;

void UpdateHostGroupPermissionsRequest::validate()
{
}

web::json::value UpdateHostGroupPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHostGroupPermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PermissionUpdateV2Body refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHostGroupPermissionsRequest::getGroupId() const
{
    return groupId_;
}

void UpdateHostGroupPermissionsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateHostGroupPermissionsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateHostGroupPermissionsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

PermissionUpdateV2Body UpdateHostGroupPermissionsRequest::getBody() const
{
    return body_;
}

void UpdateHostGroupPermissionsRequest::setBody(const PermissionUpdateV2Body& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHostGroupPermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHostGroupPermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


