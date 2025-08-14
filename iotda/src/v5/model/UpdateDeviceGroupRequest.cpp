

#include "huaweicloud/iotda/v5/model/UpdateDeviceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceGroupRequest::UpdateDeviceGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceGroupRequest::~UpdateDeviceGroupRequest() = default;

void UpdateDeviceGroupRequest::validate()
{
}

web::json::value UpdateDeviceGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeviceGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
            UpdateDeviceGroupDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceGroupRequest::getGroupId() const
{
    return groupId_;
}

void UpdateDeviceGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateDeviceGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateDeviceGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

UpdateDeviceGroupDTO UpdateDeviceGroupRequest::getBody() const
{
    return body_;
}

void UpdateDeviceGroupRequest::setBody(const UpdateDeviceGroupDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


