

#include "huaweicloud/projectman/v4/model/UpdateProjectModuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectModuleResponse::UpdateProjectModuleResponse()
{
    description_ = "";
    descriptionIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    moduleId_ = 0;
    moduleIdIsSet_ = false;
    ownerIsSet_ = false;
}

UpdateProjectModuleResponse::~UpdateProjectModuleResponse() = default;

void UpdateProjectModuleResponse::validate()
{
}

web::json::value UpdateProjectModuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool UpdateProjectModuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            ModuleOwner refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectModuleResponse::getDescription() const
{
    return description_;
}

void UpdateProjectModuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProjectModuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProjectModuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateProjectModuleResponse::getModuleName() const
{
    return moduleName_;
}

void UpdateProjectModuleResponse::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool UpdateProjectModuleResponse::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void UpdateProjectModuleResponse::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

int32_t UpdateProjectModuleResponse::getModuleId() const
{
    return moduleId_;
}

void UpdateProjectModuleResponse::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool UpdateProjectModuleResponse::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void UpdateProjectModuleResponse::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

ModuleOwner UpdateProjectModuleResponse::getOwner() const
{
    return owner_;
}

void UpdateProjectModuleResponse::setOwner(const ModuleOwner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateProjectModuleResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateProjectModuleResponse::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


