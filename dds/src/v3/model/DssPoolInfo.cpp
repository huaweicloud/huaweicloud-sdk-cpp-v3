

#include "huaweicloud/dds/v3/model/DssPoolInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DssPoolInfo::DssPoolInfo()
{
    azName_ = "";
    azNameIsSet_ = false;
    freeCapacityGb_ = "";
    freeCapacityGbIsSet_ = false;
    dssPoolVolumeType_ = "";
    dssPoolVolumeTypeIsSet_ = false;
    dssPoolId_ = "";
    dssPoolIdIsSet_ = false;
    dssPoolStatus_ = "";
    dssPoolStatusIsSet_ = false;
}

DssPoolInfo::~DssPoolInfo() = default;

void DssPoolInfo::validate()
{
}

web::json::value DssPoolInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azNameIsSet_) {
        val[utility::conversions::to_string_t("az_name")] = ModelBase::toJson(azName_);
    }
    if(freeCapacityGbIsSet_) {
        val[utility::conversions::to_string_t("free_capacity_gb")] = ModelBase::toJson(freeCapacityGb_);
    }
    if(dssPoolVolumeTypeIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_volume_type")] = ModelBase::toJson(dssPoolVolumeType_);
    }
    if(dssPoolIdIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_id")] = ModelBase::toJson(dssPoolId_);
    }
    if(dssPoolStatusIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_status")] = ModelBase::toJson(dssPoolStatus_);
    }

    return val;
}
bool DssPoolInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("az_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free_capacity_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_capacity_gb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeCapacityGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dss_pool_volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dss_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dss_pool_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolStatus(refVal);
        }
    }
    return ok;
}


std::string DssPoolInfo::getAzName() const
{
    return azName_;
}

void DssPoolInfo::setAzName(const std::string& value)
{
    azName_ = value;
    azNameIsSet_ = true;
}

bool DssPoolInfo::azNameIsSet() const
{
    return azNameIsSet_;
}

void DssPoolInfo::unsetazName()
{
    azNameIsSet_ = false;
}

std::string DssPoolInfo::getFreeCapacityGb() const
{
    return freeCapacityGb_;
}

void DssPoolInfo::setFreeCapacityGb(const std::string& value)
{
    freeCapacityGb_ = value;
    freeCapacityGbIsSet_ = true;
}

bool DssPoolInfo::freeCapacityGbIsSet() const
{
    return freeCapacityGbIsSet_;
}

void DssPoolInfo::unsetfreeCapacityGb()
{
    freeCapacityGbIsSet_ = false;
}

std::string DssPoolInfo::getDssPoolVolumeType() const
{
    return dssPoolVolumeType_;
}

void DssPoolInfo::setDssPoolVolumeType(const std::string& value)
{
    dssPoolVolumeType_ = value;
    dssPoolVolumeTypeIsSet_ = true;
}

bool DssPoolInfo::dssPoolVolumeTypeIsSet() const
{
    return dssPoolVolumeTypeIsSet_;
}

void DssPoolInfo::unsetdssPoolVolumeType()
{
    dssPoolVolumeTypeIsSet_ = false;
}

std::string DssPoolInfo::getDssPoolId() const
{
    return dssPoolId_;
}

void DssPoolInfo::setDssPoolId(const std::string& value)
{
    dssPoolId_ = value;
    dssPoolIdIsSet_ = true;
}

bool DssPoolInfo::dssPoolIdIsSet() const
{
    return dssPoolIdIsSet_;
}

void DssPoolInfo::unsetdssPoolId()
{
    dssPoolIdIsSet_ = false;
}

std::string DssPoolInfo::getDssPoolStatus() const
{
    return dssPoolStatus_;
}

void DssPoolInfo::setDssPoolStatus(const std::string& value)
{
    dssPoolStatus_ = value;
    dssPoolStatusIsSet_ = true;
}

bool DssPoolInfo::dssPoolStatusIsSet() const
{
    return dssPoolStatusIsSet_;
}

void DssPoolInfo::unsetdssPoolStatus()
{
    dssPoolStatusIsSet_ = false;
}

}
}
}
}
}


