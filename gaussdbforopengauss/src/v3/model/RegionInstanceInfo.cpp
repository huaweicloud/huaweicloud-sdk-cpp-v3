

#include "huaweicloud/gaussdbforopengauss/v3/model/RegionInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RegionInstanceInfo::RegionInstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    regionCode_ = "";
    regionCodeIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

RegionInstanceInfo::~RegionInstanceInfo() = default;

void RegionInstanceInfo::validate()
{
}

web::json::value RegionInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(regionCodeIsSet_) {
        val[utility::conversions::to_string_t("region_code")] = ModelBase::toJson(regionCode_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}
bool RegionInstanceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}


std::string RegionInstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void RegionInstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RegionInstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RegionInstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RegionInstanceInfo::getProjectId() const
{
    return projectId_;
}

void RegionInstanceInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RegionInstanceInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RegionInstanceInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RegionInstanceInfo::getProjectName() const
{
    return projectName_;
}

void RegionInstanceInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RegionInstanceInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RegionInstanceInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string RegionInstanceInfo::getRegionCode() const
{
    return regionCode_;
}

void RegionInstanceInfo::setRegionCode(const std::string& value)
{
    regionCode_ = value;
    regionCodeIsSet_ = true;
}

bool RegionInstanceInfo::regionCodeIsSet() const
{
    return regionCodeIsSet_;
}

void RegionInstanceInfo::unsetregionCode()
{
    regionCodeIsSet_ = false;
}

std::string RegionInstanceInfo::getIpAddress() const
{
    return ipAddress_;
}

void RegionInstanceInfo::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool RegionInstanceInfo::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void RegionInstanceInfo::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


