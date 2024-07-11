

#include "huaweicloud/codeartsdeploy/v2/model/AppBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppBaseInfo::AppBaseInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    isDisable_ = false;
    isDisableIsSet_ = false;
}

AppBaseInfo::~AppBaseInfo() = default;

void AppBaseInfo::validate()
{
}

web::json::value AppBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
    }

    return val;
}
bool AppBaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisable(refVal);
        }
    }
    return ok;
}


std::string AppBaseInfo::getId() const
{
    return id_;
}

void AppBaseInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AppBaseInfo::idIsSet() const
{
    return idIsSet_;
}

void AppBaseInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AppBaseInfo::getName() const
{
    return name_;
}

void AppBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AppBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void AppBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string AppBaseInfo::getRegion() const
{
    return region_;
}

void AppBaseInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AppBaseInfo::regionIsSet() const
{
    return regionIsSet_;
}

void AppBaseInfo::unsetregion()
{
    regionIsSet_ = false;
}

bool AppBaseInfo::isIsDisable() const
{
    return isDisable_;
}

void AppBaseInfo::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool AppBaseInfo::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void AppBaseInfo::unsetisDisable()
{
    isDisableIsSet_ = false;
}

}
}
}
}
}


