

#include "huaweicloud/iotda/v5/model/DeleteDeviceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceGroupRequest::DeleteDeviceGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteDeviceGroupRequest::~DeleteDeviceGroupRequest() = default;

void DeleteDeviceGroupRequest::validate()
{
}

web::json::value DeleteDeviceGroupRequest::toJson() const
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
bool DeleteDeviceGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteDeviceGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteDeviceGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteDeviceGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


