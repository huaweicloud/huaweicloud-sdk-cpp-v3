

#include "huaweicloud/iotda/v5/model/ShowDeviceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceGroupRequest::ShowDeviceGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

ShowDeviceGroupRequest::~ShowDeviceGroupRequest() = default;

void ShowDeviceGroupRequest::validate()
{
}

web::json::value ShowDeviceGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowDeviceGroupRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceGroupRequest::getGroupId() const
{
    return groupId_;
}

void ShowDeviceGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowDeviceGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowDeviceGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


