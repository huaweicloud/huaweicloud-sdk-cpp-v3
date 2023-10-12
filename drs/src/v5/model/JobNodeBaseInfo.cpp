

#include "huaweicloud/drs/v5/model/JobNodeBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobNodeBaseInfo::JobNodeBaseInfo()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
}

JobNodeBaseInfo::~JobNodeBaseInfo() = default;

void JobNodeBaseInfo::validate()
{
}

web::json::value JobNodeBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool JobNodeBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}


std::string JobNodeBaseInfo::getInstanceType() const
{
    return instanceType_;
}

void JobNodeBaseInfo::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool JobNodeBaseInfo::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void JobNodeBaseInfo::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string JobNodeBaseInfo::getArch() const
{
    return arch_;
}

void JobNodeBaseInfo::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool JobNodeBaseInfo::archIsSet() const
{
    return archIsSet_;
}

void JobNodeBaseInfo::unsetarch()
{
    archIsSet_ = false;
}

std::string JobNodeBaseInfo::getAvailabilityZone() const
{
    return availabilityZone_;
}

void JobNodeBaseInfo::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool JobNodeBaseInfo::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void JobNodeBaseInfo::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string JobNodeBaseInfo::getStatus() const
{
    return status_;
}

void JobNodeBaseInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobNodeBaseInfo::statusIsSet() const
{
    return statusIsSet_;
}

void JobNodeBaseInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobNodeBaseInfo::getRole() const
{
    return role_;
}

void JobNodeBaseInfo::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool JobNodeBaseInfo::roleIsSet() const
{
    return roleIsSet_;
}

void JobNodeBaseInfo::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


