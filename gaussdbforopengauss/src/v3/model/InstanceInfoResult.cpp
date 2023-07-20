

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceInfoResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceInfoResult::InstanceInfoResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
}

InstanceInfoResult::~InstanceInfoResult() = default;

void InstanceInfoResult::validate()
{
}

web::json::value InstanceInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }

    return val;
}

bool InstanceInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    return ok;
}

std::string InstanceInfoResult::getInstanceId() const
{
    return instanceId_;
}

void InstanceInfoResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceInfoResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceInfoResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceInfoResult::getInstanceName() const
{
    return instanceName_;
}

void InstanceInfoResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceInfoResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceInfoResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string InstanceInfoResult::getInstanceStatus() const
{
    return instanceStatus_;
}

void InstanceInfoResult::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool InstanceInfoResult::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void InstanceInfoResult::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

}
}
}
}
}


