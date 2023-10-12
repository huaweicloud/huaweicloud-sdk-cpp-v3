

#include "huaweicloud/gaussdb/v3/model/DedicatedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DedicatedResource::DedicatedResource()
{
    id_ = "";
    idIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    capacityIsSet_ = false;
    availabilityZoneIsSet_ = false;
}

DedicatedResource::~DedicatedResource() = default;

void DedicatedResource::validate()
{
}

web::json::value DedicatedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool DedicatedResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchitecture(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            DedicatedResourceCapacity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string DedicatedResource::getId() const
{
    return id_;
}

void DedicatedResource::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DedicatedResource::idIsSet() const
{
    return idIsSet_;
}

void DedicatedResource::unsetid()
{
    idIsSet_ = false;
}

std::string DedicatedResource::getResourceName() const
{
    return resourceName_;
}

void DedicatedResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool DedicatedResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void DedicatedResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string DedicatedResource::getEngineName() const
{
    return engineName_;
}

void DedicatedResource::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool DedicatedResource::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void DedicatedResource::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string DedicatedResource::getArchitecture() const
{
    return architecture_;
}

void DedicatedResource::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool DedicatedResource::architectureIsSet() const
{
    return architectureIsSet_;
}

void DedicatedResource::unsetarchitecture()
{
    architectureIsSet_ = false;
}

std::string DedicatedResource::getStatus() const
{
    return status_;
}

void DedicatedResource::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DedicatedResource::statusIsSet() const
{
    return statusIsSet_;
}

void DedicatedResource::unsetstatus()
{
    statusIsSet_ = false;
}

DedicatedResourceCapacity DedicatedResource::getCapacity() const
{
    return capacity_;
}

void DedicatedResource::setCapacity(const DedicatedResourceCapacity& value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool DedicatedResource::capacityIsSet() const
{
    return capacityIsSet_;
}

void DedicatedResource::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::vector<std::string>& DedicatedResource::getAvailabilityZone()
{
    return availabilityZone_;
}

void DedicatedResource::setAvailabilityZone(const std::vector<std::string>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool DedicatedResource::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void DedicatedResource::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


