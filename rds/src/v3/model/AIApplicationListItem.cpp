

#include "huaweicloud/rds/v3/model/AIApplicationListItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AIApplicationListItem::AIApplicationListItem()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    managedInstanceId_ = "";
    managedInstanceIdIsSet_ = false;
}

AIApplicationListItem::~AIApplicationListItem() = default;

void AIApplicationListItem::validate()
{
}

web::json::value AIApplicationListItem::toJson() const
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
    if(managedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("managed_instance_id")] = ModelBase::toJson(managedInstanceId_);
    }

    return val;
}
bool AIApplicationListItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("managed_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedInstanceId(refVal);
        }
    }
    return ok;
}


std::string AIApplicationListItem::getId() const
{
    return id_;
}

void AIApplicationListItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AIApplicationListItem::idIsSet() const
{
    return idIsSet_;
}

void AIApplicationListItem::unsetid()
{
    idIsSet_ = false;
}

std::string AIApplicationListItem::getName() const
{
    return name_;
}

void AIApplicationListItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AIApplicationListItem::nameIsSet() const
{
    return nameIsSet_;
}

void AIApplicationListItem::unsetname()
{
    nameIsSet_ = false;
}

std::string AIApplicationListItem::getStatus() const
{
    return status_;
}

void AIApplicationListItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AIApplicationListItem::statusIsSet() const
{
    return statusIsSet_;
}

void AIApplicationListItem::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AIApplicationListItem::getManagedInstanceId() const
{
    return managedInstanceId_;
}

void AIApplicationListItem::setManagedInstanceId(const std::string& value)
{
    managedInstanceId_ = value;
    managedInstanceIdIsSet_ = true;
}

bool AIApplicationListItem::managedInstanceIdIsSet() const
{
    return managedInstanceIdIsSet_;
}

void AIApplicationListItem::unsetmanagedInstanceId()
{
    managedInstanceIdIsSet_ = false;
}

}
}
}
}
}


