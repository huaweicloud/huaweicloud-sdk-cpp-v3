

#include "huaweicloud/iotda/v5/model/CreateOrDeleteDeviceInGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOrDeleteDeviceInGroupRequest::CreateOrDeleteDeviceInGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

CreateOrDeleteDeviceInGroupRequest::~CreateOrDeleteDeviceInGroupRequest() = default;

void CreateOrDeleteDeviceInGroupRequest::validate()
{
}

web::json::value CreateOrDeleteDeviceInGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }

    return val;
}
bool CreateOrDeleteDeviceInGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    return ok;
}


std::string CreateOrDeleteDeviceInGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateOrDeleteDeviceInGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateOrDeleteDeviceInGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateOrDeleteDeviceInGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateOrDeleteDeviceInGroupRequest::getGroupId() const
{
    return groupId_;
}

void CreateOrDeleteDeviceInGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateOrDeleteDeviceInGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateOrDeleteDeviceInGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateOrDeleteDeviceInGroupRequest::getActionId() const
{
    return actionId_;
}

void CreateOrDeleteDeviceInGroupRequest::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool CreateOrDeleteDeviceInGroupRequest::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void CreateOrDeleteDeviceInGroupRequest::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string CreateOrDeleteDeviceInGroupRequest::getDeviceId() const
{
    return deviceId_;
}

void CreateOrDeleteDeviceInGroupRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CreateOrDeleteDeviceInGroupRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CreateOrDeleteDeviceInGroupRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


