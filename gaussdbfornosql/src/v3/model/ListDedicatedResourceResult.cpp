

#include "huaweicloud/gaussdbfornosql/v3/model/ListDedicatedResourceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDedicatedResourceResult::ListDedicatedResourceResult()
{
    id_ = "";
    idIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    capacityIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListDedicatedResourceResult::~ListDedicatedResourceResult() = default;

void ListDedicatedResourceResult::validate()
{
}

web::json::value ListDedicatedResourceResult::toJson() const
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
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListDedicatedResourceResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            DedicatedResourceCapacity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
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
    return ok;
}


std::string ListDedicatedResourceResult::getId() const
{
    return id_;
}

void ListDedicatedResourceResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDedicatedResourceResult::idIsSet() const
{
    return idIsSet_;
}

void ListDedicatedResourceResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListDedicatedResourceResult::getResourceName() const
{
    return resourceName_;
}

void ListDedicatedResourceResult::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListDedicatedResourceResult::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListDedicatedResourceResult::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ListDedicatedResourceResult::getEngineName() const
{
    return engineName_;
}

void ListDedicatedResourceResult::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListDedicatedResourceResult::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListDedicatedResourceResult::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListDedicatedResourceResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListDedicatedResourceResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListDedicatedResourceResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListDedicatedResourceResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListDedicatedResourceResult::getArchitecture() const
{
    return architecture_;
}

void ListDedicatedResourceResult::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool ListDedicatedResourceResult::architectureIsSet() const
{
    return architectureIsSet_;
}

void ListDedicatedResourceResult::unsetarchitecture()
{
    architectureIsSet_ = false;
}

DedicatedResourceCapacity ListDedicatedResourceResult::getCapacity() const
{
    return capacity_;
}

void ListDedicatedResourceResult::setCapacity(const DedicatedResourceCapacity& value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool ListDedicatedResourceResult::capacityIsSet() const
{
    return capacityIsSet_;
}

void ListDedicatedResourceResult::unsetcapacity()
{
    capacityIsSet_ = false;
}

std::string ListDedicatedResourceResult::getStatus() const
{
    return status_;
}

void ListDedicatedResourceResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDedicatedResourceResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListDedicatedResourceResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


