

#include "huaweicloud/codehub/v4/model/ProjectSettingsInheritCfgDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ProjectSettingsInheritCfgDto::ProjectSettingsInheritCfgDto()
{
    name_ = "";
    nameIsSet_ = false;
    inheritMod_ = "";
    inheritModIsSet_ = false;
}

ProjectSettingsInheritCfgDto::~ProjectSettingsInheritCfgDto() = default;

void ProjectSettingsInheritCfgDto::validate()
{
}

web::json::value ProjectSettingsInheritCfgDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(inheritModIsSet_) {
        val[utility::conversions::to_string_t("inherit_mod")] = ModelBase::toJson(inheritMod_);
    }

    return val;
}
bool ProjectSettingsInheritCfgDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_mod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_mod"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritMod(refVal);
        }
    }
    return ok;
}


std::string ProjectSettingsInheritCfgDto::getName() const
{
    return name_;
}

void ProjectSettingsInheritCfgDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectSettingsInheritCfgDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectSettingsInheritCfgDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectSettingsInheritCfgDto::getInheritMod() const
{
    return inheritMod_;
}

void ProjectSettingsInheritCfgDto::setInheritMod(const std::string& value)
{
    inheritMod_ = value;
    inheritModIsSet_ = true;
}

bool ProjectSettingsInheritCfgDto::inheritModIsSet() const
{
    return inheritModIsSet_;
}

void ProjectSettingsInheritCfgDto::unsetinheritMod()
{
    inheritModIsSet_ = false;
}

}
}
}
}
}


