

#include "huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListReadonlyNodesResult::ListReadonlyNodesResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ListReadonlyNodesResult::~ListReadonlyNodesResult() = default;

void ListReadonlyNodesResult::validate()
{
}

web::json::value ListReadonlyNodesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ListReadonlyNodesResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string ListReadonlyNodesResult::getId() const
{
    return id_;
}

void ListReadonlyNodesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListReadonlyNodesResult::idIsSet() const
{
    return idIsSet_;
}

void ListReadonlyNodesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListReadonlyNodesResult::getName() const
{
    return name_;
}

void ListReadonlyNodesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListReadonlyNodesResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListReadonlyNodesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListReadonlyNodesResult::getStatus() const
{
    return status_;
}

void ListReadonlyNodesResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListReadonlyNodesResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListReadonlyNodesResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListReadonlyNodesResult::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListReadonlyNodesResult::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListReadonlyNodesResult::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListReadonlyNodesResult::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


