

#include "huaweicloud/rds/v3/model/DRInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DRInstance::DRInstance()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

DRInstance::~DRInstance() = default;

void DRInstance::validate()
{
}

web::json::value DRInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool DRInstance::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DRInstance::getInstanceId() const
{
    return instanceId_;
}

void DRInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DRInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DRInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DRInstance::getInstanceName() const
{
    return instanceName_;
}

void DRInstance::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DRInstance::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DRInstance::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


