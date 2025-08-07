

#include "huaweicloud/eps/v1/model/AssociatedResourceListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




AssociatedResourceListResponse::AssociatedResourceListResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    eip_ = "";
    eipIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

AssociatedResourceListResponse::~AssociatedResourceListResponse() = default;

void AssociatedResourceListResponse::validate()
{
}

web::json::value AssociatedResourceListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool AssociatedResourceListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string AssociatedResourceListResponse::getId() const
{
    return id_;
}

void AssociatedResourceListResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssociatedResourceListResponse::idIsSet() const
{
    return idIsSet_;
}

void AssociatedResourceListResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AssociatedResourceListResponse::getName() const
{
    return name_;
}

void AssociatedResourceListResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AssociatedResourceListResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AssociatedResourceListResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AssociatedResourceListResponse::getEip() const
{
    return eip_;
}

void AssociatedResourceListResponse::setEip(const std::string& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool AssociatedResourceListResponse::eipIsSet() const
{
    return eipIsSet_;
}

void AssociatedResourceListResponse::unseteip()
{
    eipIsSet_ = false;
}

std::string AssociatedResourceListResponse::getResourceType() const
{
    return resourceType_;
}

void AssociatedResourceListResponse::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool AssociatedResourceListResponse::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void AssociatedResourceListResponse::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


