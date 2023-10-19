

#include "huaweicloud/gaussdb/v3/model/ApplicableInstances.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ApplicableInstances::ApplicableInstances()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

ApplicableInstances::~ApplicableInstances() = default;

void ApplicableInstances::validate()
{
}

web::json::value ApplicableInstances::toJson() const
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
bool ApplicableInstances::fromJson(const web::json::value& val)
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


std::string ApplicableInstances::getInstanceId() const
{
    return instanceId_;
}

void ApplicableInstances::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ApplicableInstances::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ApplicableInstances::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ApplicableInstances::getInstanceName() const
{
    return instanceName_;
}

void ApplicableInstances::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ApplicableInstances::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ApplicableInstances::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


