

#include "huaweicloud/rds/v3/model/DssPoolInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DssPoolInfo::DssPoolInfo()
{
    azName_ = "";
    azNameIsSet_ = false;
    freeCapacityGb_ = "";
    freeCapacityGbIsSet_ = false;
    dsspoolVolumeType_ = "";
    dsspoolVolumeTypeIsSet_ = false;
    dsspoolId_ = "";
    dsspoolIdIsSet_ = false;
    dsspoolStatus_ = "";
    dsspoolStatusIsSet_ = false;
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
    if(dsspoolVolumeTypeIsSet_) {
        val[utility::conversions::to_string_t("dsspool_volume_type")] = ModelBase::toJson(dsspoolVolumeType_);
    }
    if(dsspoolIdIsSet_) {
        val[utility::conversions::to_string_t("dsspool_id")] = ModelBase::toJson(dsspoolId_);
    }
    if(dsspoolStatusIsSet_) {
        val[utility::conversions::to_string_t("dsspool_status")] = ModelBase::toJson(dsspoolStatus_);
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
    if(val.has_field(utility::conversions::to_string_t("dsspool_volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsspool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsspool_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolStatus(refVal);
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

std::string DssPoolInfo::getDsspoolVolumeType() const
{
    return dsspoolVolumeType_;
}

void DssPoolInfo::setDsspoolVolumeType(const std::string& value)
{
    dsspoolVolumeType_ = value;
    dsspoolVolumeTypeIsSet_ = true;
}

bool DssPoolInfo::dsspoolVolumeTypeIsSet() const
{
    return dsspoolVolumeTypeIsSet_;
}

void DssPoolInfo::unsetdsspoolVolumeType()
{
    dsspoolVolumeTypeIsSet_ = false;
}

std::string DssPoolInfo::getDsspoolId() const
{
    return dsspoolId_;
}

void DssPoolInfo::setDsspoolId(const std::string& value)
{
    dsspoolId_ = value;
    dsspoolIdIsSet_ = true;
}

bool DssPoolInfo::dsspoolIdIsSet() const
{
    return dsspoolIdIsSet_;
}

void DssPoolInfo::unsetdsspoolId()
{
    dsspoolIdIsSet_ = false;
}

std::string DssPoolInfo::getDsspoolStatus() const
{
    return dsspoolStatus_;
}

void DssPoolInfo::setDsspoolStatus(const std::string& value)
{
    dsspoolStatus_ = value;
    dsspoolStatusIsSet_ = true;
}

bool DssPoolInfo::dsspoolStatusIsSet() const
{
    return dsspoolStatusIsSet_;
}

void DssPoolInfo::unsetdsspoolStatus()
{
    dsspoolStatusIsSet_ = false;
}

}
}
}
}
}


