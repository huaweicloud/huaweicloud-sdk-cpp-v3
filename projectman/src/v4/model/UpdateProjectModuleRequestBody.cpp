

#include "huaweicloud/projectman/v4/model/UpdateProjectModuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectModuleRequestBody::UpdateProjectModuleRequestBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    ownerIsSet_ = false;
}

UpdateProjectModuleRequestBody::~UpdateProjectModuleRequestBody() = default;

void UpdateProjectModuleRequestBody::validate()
{
}

web::json::value UpdateProjectModuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool UpdateProjectModuleRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            UserRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectModuleRequestBody::getDescription() const
{
    return description_;
}

void UpdateProjectModuleRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProjectModuleRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProjectModuleRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateProjectModuleRequestBody::getModuleName() const
{
    return moduleName_;
}

void UpdateProjectModuleRequestBody::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool UpdateProjectModuleRequestBody::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void UpdateProjectModuleRequestBody::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

UserRequest UpdateProjectModuleRequestBody::getOwner() const
{
    return owner_;
}

void UpdateProjectModuleRequestBody::setOwner(const UserRequest& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateProjectModuleRequestBody::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateProjectModuleRequestBody::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


