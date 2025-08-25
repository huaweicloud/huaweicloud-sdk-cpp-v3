

#include "huaweicloud/cpcs/v1/model/ShowAvailableAzResponsebody_availability_zone.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAvailableAzResponsebody_availability_zone::ShowAvailableAzResponsebody_availability_zone()
{
    id_ = "";
    idIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    localesIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowAvailableAzResponsebody_availability_zone::~ShowAvailableAzResponsebody_availability_zone() = default;

void ShowAvailableAzResponsebody_availability_zone::validate()
{
}

web::json::value ShowAvailableAzResponsebody_availability_zone::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(localesIsSet_) {
        val[utility::conversions::to_string_t("locales")] = ModelBase::toJson(locales_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowAvailableAzResponsebody_availability_zone::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locales"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locales"));
        if(!fieldValue.is_null())
        {
            ShowAvailableAzResponsebody_locales refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocales(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
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


std::string ShowAvailableAzResponsebody_availability_zone::getId() const
{
    return id_;
}

void ShowAvailableAzResponsebody_availability_zone::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::idIsSet() const
{
    return idIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAvailableAzResponsebody_availability_zone::getDisplayName() const
{
    return displayName_;
}

void ShowAvailableAzResponsebody_availability_zone::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

ShowAvailableAzResponsebody_locales ShowAvailableAzResponsebody_availability_zone::getLocales() const
{
    return locales_;
}

void ShowAvailableAzResponsebody_availability_zone::setLocales(const ShowAvailableAzResponsebody_locales& value)
{
    locales_ = value;
    localesIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::localesIsSet() const
{
    return localesIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsetlocales()
{
    localesIsSet_ = false;
}

std::string ShowAvailableAzResponsebody_availability_zone::getType() const
{
    return type_;
}

void ShowAvailableAzResponsebody_availability_zone::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowAvailableAzResponsebody_availability_zone::getRegionId() const
{
    return regionId_;
}

void ShowAvailableAzResponsebody_availability_zone::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ShowAvailableAzResponsebody_availability_zone::getStatus() const
{
    return status_;
}

void ShowAvailableAzResponsebody_availability_zone::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAvailableAzResponsebody_availability_zone::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAvailableAzResponsebody_availability_zone::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


