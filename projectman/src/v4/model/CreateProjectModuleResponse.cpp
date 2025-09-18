

#include "huaweicloud/projectman/v4/model/CreateProjectModuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectModuleResponse::CreateProjectModuleResponse()
{
    description_ = "";
    descriptionIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    moduleId_ = 0;
    moduleIdIsSet_ = false;
    ownerIsSet_ = false;
}

CreateProjectModuleResponse::~CreateProjectModuleResponse() = default;

void CreateProjectModuleResponse::validate()
{
}

web::json::value CreateProjectModuleResponse::toJson() const
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
bool CreateProjectModuleResponse::fromJson(const web::json::value& val)
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


std::string CreateProjectModuleResponse::getDescription() const
{
    return description_;
}

void CreateProjectModuleResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProjectModuleResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProjectModuleResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProjectModuleResponse::getModuleName() const
{
    return moduleName_;
}

void CreateProjectModuleResponse::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool CreateProjectModuleResponse::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void CreateProjectModuleResponse::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

int32_t CreateProjectModuleResponse::getModuleId() const
{
    return moduleId_;
}

void CreateProjectModuleResponse::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool CreateProjectModuleResponse::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void CreateProjectModuleResponse::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

ModuleOwner CreateProjectModuleResponse::getOwner() const
{
    return owner_;
}

void CreateProjectModuleResponse::setOwner(const ModuleOwner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CreateProjectModuleResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void CreateProjectModuleResponse::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


