

#include "huaweicloud/rds/v3/model/InstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceInfo::InstanceInfo()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    availableZonesIsSet_ = false;
}

InstanceInfo::~InstanceInfo() = default;

void InstanceInfo::validate()
{
}

web::json::value InstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(availableZonesIsSet_) {
        val[utility::conversions::to_string_t("available_zones")] = ModelBase::toJson(availableZones_);
    }

    return val;
}
bool InstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_zones"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlAvailableZoneInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableZones(refVal);
        }
    }
    return ok;
}


std::string InstanceInfo::getId() const
{
    return id_;
}

void InstanceInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceInfo::idIsSet() const
{
    return idIsSet_;
}

void InstanceInfo::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceInfo::getStatus() const
{
    return status_;
}

void InstanceInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceInfo::getName() const
{
    return name_;
}

void InstanceInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceInfo::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t InstanceInfo::getWeight() const
{
    return weight_;
}

void InstanceInfo::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool InstanceInfo::weightIsSet() const
{
    return weightIsSet_;
}

void InstanceInfo::unsetweight()
{
    weightIsSet_ = false;
}

std::vector<MysqlAvailableZoneInfo>& InstanceInfo::getAvailableZones()
{
    return availableZones_;
}

void InstanceInfo::setAvailableZones(const std::vector<MysqlAvailableZoneInfo>& value)
{
    availableZones_ = value;
    availableZonesIsSet_ = true;
}

bool InstanceInfo::availableZonesIsSet() const
{
    return availableZonesIsSet_;
}

void InstanceInfo::unsetavailableZones()
{
    availableZonesIsSet_ = false;
}

}
}
}
}
}


