

#include "huaweicloud/projectman/v4/model/ProjectChildModule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProjectChildModule::ProjectChildModule()
{
    moduleId_ = 0;
    moduleIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    ownerIsSet_ = false;
    deepth_ = 0;
    deepthIsSet_ = false;
    isParent_ = false;
    isParentIsSet_ = false;
    parentModuleId_ = 0;
    parentModuleIdIsSet_ = false;
}

ProjectChildModule::~ProjectChildModule() = default;

void ProjectChildModule::validate()
{
}

web::json::value ProjectChildModule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(deepthIsSet_) {
        val[utility::conversions::to_string_t("deepth")] = ModelBase::toJson(deepth_);
    }
    if(isParentIsSet_) {
        val[utility::conversions::to_string_t("is_parent")] = ModelBase::toJson(isParent_);
    }
    if(parentModuleIdIsSet_) {
        val[utility::conversions::to_string_t("parent_module_id")] = ModelBase::toJson(parentModuleId_);
    }

    return val;
}
bool ProjectChildModule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            ModuleOwner refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deepth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deepth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_parent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_parent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsParent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentModuleId(refVal);
        }
    }
    return ok;
}


int32_t ProjectChildModule::getModuleId() const
{
    return moduleId_;
}

void ProjectChildModule::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ProjectChildModule::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ProjectChildModule::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string ProjectChildModule::getModuleName() const
{
    return moduleName_;
}

void ProjectChildModule::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool ProjectChildModule::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void ProjectChildModule::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

ModuleOwner ProjectChildModule::getOwner() const
{
    return owner_;
}

void ProjectChildModule::setOwner(const ModuleOwner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ProjectChildModule::ownerIsSet() const
{
    return ownerIsSet_;
}

void ProjectChildModule::unsetowner()
{
    ownerIsSet_ = false;
}

int32_t ProjectChildModule::getDeepth() const
{
    return deepth_;
}

void ProjectChildModule::setDeepth(int32_t value)
{
    deepth_ = value;
    deepthIsSet_ = true;
}

bool ProjectChildModule::deepthIsSet() const
{
    return deepthIsSet_;
}

void ProjectChildModule::unsetdeepth()
{
    deepthIsSet_ = false;
}

bool ProjectChildModule::isIsParent() const
{
    return isParent_;
}

void ProjectChildModule::setIsParent(bool value)
{
    isParent_ = value;
    isParentIsSet_ = true;
}

bool ProjectChildModule::isParentIsSet() const
{
    return isParentIsSet_;
}

void ProjectChildModule::unsetisParent()
{
    isParentIsSet_ = false;
}

int32_t ProjectChildModule::getParentModuleId() const
{
    return parentModuleId_;
}

void ProjectChildModule::setParentModuleId(int32_t value)
{
    parentModuleId_ = value;
    parentModuleIdIsSet_ = true;
}

bool ProjectChildModule::parentModuleIdIsSet() const
{
    return parentModuleIdIsSet_;
}

void ProjectChildModule::unsetparentModuleId()
{
    parentModuleIdIsSet_ = false;
}

}
}
}
}
}


