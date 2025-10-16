

#include "huaweicloud/iotda/v5/model/ModuleSearchDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ModuleSearchDTO::ModuleSearchDTO()
{
    moduleName_ = "";
    moduleNameIsSet_ = false;
    moduleVersion_ = "";
    moduleVersionIsSet_ = false;
}

ModuleSearchDTO::~ModuleSearchDTO() = default;

void ModuleSearchDTO::validate()
{
}

web::json::value ModuleSearchDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(moduleVersionIsSet_) {
        val[utility::conversions::to_string_t("module_version")] = ModelBase::toJson(moduleVersion_);
    }

    return val;
}
bool ModuleSearchDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleVersion(refVal);
        }
    }
    return ok;
}


std::string ModuleSearchDTO::getModuleName() const
{
    return moduleName_;
}

void ModuleSearchDTO::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool ModuleSearchDTO::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void ModuleSearchDTO::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string ModuleSearchDTO::getModuleVersion() const
{
    return moduleVersion_;
}

void ModuleSearchDTO::setModuleVersion(const std::string& value)
{
    moduleVersion_ = value;
    moduleVersionIsSet_ = true;
}

bool ModuleSearchDTO::moduleVersionIsSet() const
{
    return moduleVersionIsSet_;
}

void ModuleSearchDTO::unsetmoduleVersion()
{
    moduleVersionIsSet_ = false;
}

}
}
}
}
}


