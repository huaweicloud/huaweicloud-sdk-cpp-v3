

#include "huaweicloud/projectman/v4/model/ProjectModule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ProjectModule::ProjectModule()
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
    childrenIsSet_ = false;
}

ProjectModule::~ProjectModule() = default;

void ProjectModule::validate()
{
}

web::json::value ProjectModule::toJson() const
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
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}
bool ProjectModule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectChildModule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


int32_t ProjectModule::getModuleId() const
{
    return moduleId_;
}

void ProjectModule::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ProjectModule::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ProjectModule::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string ProjectModule::getModuleName() const
{
    return moduleName_;
}

void ProjectModule::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool ProjectModule::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void ProjectModule::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

ModuleOwner ProjectModule::getOwner() const
{
    return owner_;
}

void ProjectModule::setOwner(const ModuleOwner& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ProjectModule::ownerIsSet() const
{
    return ownerIsSet_;
}

void ProjectModule::unsetowner()
{
    ownerIsSet_ = false;
}

int32_t ProjectModule::getDeepth() const
{
    return deepth_;
}

void ProjectModule::setDeepth(int32_t value)
{
    deepth_ = value;
    deepthIsSet_ = true;
}

bool ProjectModule::deepthIsSet() const
{
    return deepthIsSet_;
}

void ProjectModule::unsetdeepth()
{
    deepthIsSet_ = false;
}

bool ProjectModule::isIsParent() const
{
    return isParent_;
}

void ProjectModule::setIsParent(bool value)
{
    isParent_ = value;
    isParentIsSet_ = true;
}

bool ProjectModule::isParentIsSet() const
{
    return isParentIsSet_;
}

void ProjectModule::unsetisParent()
{
    isParentIsSet_ = false;
}

std::vector<ProjectChildModule>& ProjectModule::getChildren()
{
    return children_;
}

void ProjectModule::setChildren(const std::vector<ProjectChildModule>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool ProjectModule::childrenIsSet() const
{
    return childrenIsSet_;
}

void ProjectModule::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


