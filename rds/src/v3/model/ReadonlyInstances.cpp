

#include "huaweicloud/rds/v3/model/ReadonlyInstances.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReadonlyInstances::ReadonlyInstances()
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
    cpuNum_ = 0;
    cpuNumIsSet_ = false;
}

ReadonlyInstances::~ReadonlyInstances() = default;

void ReadonlyInstances::validate()
{
}

web::json::value ReadonlyInstances::toJson() const
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
    if(cpuNumIsSet_) {
        val[utility::conversions::to_string_t("cpu_num")] = ModelBase::toJson(cpuNum_);
    }

    return val;
}

bool ReadonlyInstances::fromJson(const web::json::value& val)
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
            std::vector<AvailableZone> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableZones(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuNum(refVal);
        }
    }
    return ok;
}

std::string ReadonlyInstances::getId() const
{
    return id_;
}

void ReadonlyInstances::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReadonlyInstances::idIsSet() const
{
    return idIsSet_;
}

void ReadonlyInstances::unsetid()
{
    idIsSet_ = false;
}

std::string ReadonlyInstances::getStatus() const
{
    return status_;
}

void ReadonlyInstances::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReadonlyInstances::statusIsSet() const
{
    return statusIsSet_;
}

void ReadonlyInstances::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReadonlyInstances::getName() const
{
    return name_;
}

void ReadonlyInstances::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReadonlyInstances::nameIsSet() const
{
    return nameIsSet_;
}

void ReadonlyInstances::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReadonlyInstances::getWeight() const
{
    return weight_;
}

void ReadonlyInstances::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ReadonlyInstances::weightIsSet() const
{
    return weightIsSet_;
}

void ReadonlyInstances::unsetweight()
{
    weightIsSet_ = false;
}

std::vector<AvailableZone>& ReadonlyInstances::getAvailableZones()
{
    return availableZones_;
}

void ReadonlyInstances::setAvailableZones(const std::vector<AvailableZone>& value)
{
    availableZones_ = value;
    availableZonesIsSet_ = true;
}

bool ReadonlyInstances::availableZonesIsSet() const
{
    return availableZonesIsSet_;
}

void ReadonlyInstances::unsetavailableZones()
{
    availableZonesIsSet_ = false;
}

int32_t ReadonlyInstances::getCpuNum() const
{
    return cpuNum_;
}

void ReadonlyInstances::setCpuNum(int32_t value)
{
    cpuNum_ = value;
    cpuNumIsSet_ = true;
}

bool ReadonlyInstances::cpuNumIsSet() const
{
    return cpuNumIsSet_;
}

void ReadonlyInstances::unsetcpuNum()
{
    cpuNumIsSet_ = false;
}

}
}
}
}
}


