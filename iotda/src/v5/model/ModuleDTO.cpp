

#include "huaweicloud/iotda/v5/model/ModuleDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ModuleDTO::ModuleDTO()
{
    moduleName_ = "";
    moduleNameIsSet_ = false;
    moduleVersion_ = "";
    moduleVersionIsSet_ = false;
}

ModuleDTO::~ModuleDTO() = default;

void ModuleDTO::validate()
{
}

web::json::value ModuleDTO::toJson() const
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
bool ModuleDTO::fromJson(const web::json::value& val)
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


std::string ModuleDTO::getModuleName() const
{
    return moduleName_;
}

void ModuleDTO::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool ModuleDTO::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void ModuleDTO::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string ModuleDTO::getModuleVersion() const
{
    return moduleVersion_;
}

void ModuleDTO::setModuleVersion(const std::string& value)
{
    moduleVersion_ = value;
    moduleVersionIsSet_ = true;
}

bool ModuleDTO::moduleVersionIsSet() const
{
    return moduleVersionIsSet_;
}

void ModuleDTO::unsetmoduleVersion()
{
    moduleVersionIsSet_ = false;
}

}
}
}
}
}


