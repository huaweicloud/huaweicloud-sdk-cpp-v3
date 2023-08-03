

#include "huaweicloud/rds/v3/model/MasterInstance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MasterInstance::MasterInstance()
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

MasterInstance::~MasterInstance() = default;

void MasterInstance::validate()
{
}

web::json::value MasterInstance::toJson() const
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

bool MasterInstance::fromJson(const web::json::value& val)
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

std::string MasterInstance::getId() const
{
    return id_;
}

void MasterInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MasterInstance::idIsSet() const
{
    return idIsSet_;
}

void MasterInstance::unsetid()
{
    idIsSet_ = false;
}

std::string MasterInstance::getStatus() const
{
    return status_;
}

void MasterInstance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MasterInstance::statusIsSet() const
{
    return statusIsSet_;
}

void MasterInstance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MasterInstance::getName() const
{
    return name_;
}

void MasterInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MasterInstance::nameIsSet() const
{
    return nameIsSet_;
}

void MasterInstance::unsetname()
{
    nameIsSet_ = false;
}

int32_t MasterInstance::getWeight() const
{
    return weight_;
}

void MasterInstance::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool MasterInstance::weightIsSet() const
{
    return weightIsSet_;
}

void MasterInstance::unsetweight()
{
    weightIsSet_ = false;
}

std::vector<AvailableZone>& MasterInstance::getAvailableZones()
{
    return availableZones_;
}

void MasterInstance::setAvailableZones(const std::vector<AvailableZone>& value)
{
    availableZones_ = value;
    availableZonesIsSet_ = true;
}

bool MasterInstance::availableZonesIsSet() const
{
    return availableZonesIsSet_;
}

void MasterInstance::unsetavailableZones()
{
    availableZonesIsSet_ = false;
}

int32_t MasterInstance::getCpuNum() const
{
    return cpuNum_;
}

void MasterInstance::setCpuNum(int32_t value)
{
    cpuNum_ = value;
    cpuNumIsSet_ = true;
}

bool MasterInstance::cpuNumIsSet() const
{
    return cpuNumIsSet_;
}

void MasterInstance::unsetcpuNum()
{
    cpuNumIsSet_ = false;
}

}
}
}
}
}


