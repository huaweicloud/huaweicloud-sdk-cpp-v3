

#include "huaweicloud/cloudtest/v1/model/SimpleResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SimpleResourceInfo::SimpleResourceInfo()
{
    type_ = "";
    typeIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

SimpleResourceInfo::~SimpleResourceInfo() = default;

void SimpleResourceInfo::validate()
{
}

web::json::value SimpleResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool SimpleResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string SimpleResourceInfo::getType() const
{
    return type_;
}

void SimpleResourceInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SimpleResourceInfo::typeIsSet() const
{
    return typeIsSet_;
}

void SimpleResourceInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string SimpleResourceInfo::getOwner() const
{
    return owner_;
}

void SimpleResourceInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool SimpleResourceInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void SimpleResourceInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string SimpleResourceInfo::getResourceId() const
{
    return resourceId_;
}

void SimpleResourceInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool SimpleResourceInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void SimpleResourceInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


