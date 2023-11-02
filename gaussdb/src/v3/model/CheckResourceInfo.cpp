

#include "huaweicloud/gaussdb/v3/model/CheckResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckResourceInfo::CheckResourceInfo()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceNum_ = 0;
    instanceNumIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

CheckResourceInfo::~CheckResourceInfo() = default;

void CheckResourceInfo::validate()
{
}

web::json::value CheckResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool CheckResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string CheckResourceInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CheckResourceInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CheckResourceInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CheckResourceInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t CheckResourceInfo::getInstanceNum() const
{
    return instanceNum_;
}

void CheckResourceInfo::setInstanceNum(int32_t value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool CheckResourceInfo::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void CheckResourceInfo::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::string CheckResourceInfo::getMode() const
{
    return mode_;
}

void CheckResourceInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CheckResourceInfo::modeIsSet() const
{
    return modeIsSet_;
}

void CheckResourceInfo::unsetmode()
{
    modeIsSet_ = false;
}

std::string CheckResourceInfo::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void CheckResourceInfo::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool CheckResourceInfo::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void CheckResourceInfo::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

int32_t CheckResourceInfo::getNodeNum() const
{
    return nodeNum_;
}

void CheckResourceInfo::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool CheckResourceInfo::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void CheckResourceInfo::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string CheckResourceInfo::getFlavorRef() const
{
    return flavorRef_;
}

void CheckResourceInfo::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CheckResourceInfo::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CheckResourceInfo::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string CheckResourceInfo::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CheckResourceInfo::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CheckResourceInfo::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CheckResourceInfo::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CheckResourceInfo::getSubnetId() const
{
    return subnetId_;
}

void CheckResourceInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CheckResourceInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CheckResourceInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CheckResourceInfo::getInstanceId() const
{
    return instanceId_;
}

void CheckResourceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckResourceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckResourceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


