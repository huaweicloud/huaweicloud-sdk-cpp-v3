

#include "huaweicloud/projectman/v4/model/CreateProjectModuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectModuleRequestBody::CreateProjectModuleRequestBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    parentModuleId_ = 0;
    parentModuleIdIsSet_ = false;
    ownerIsSet_ = false;
}

CreateProjectModuleRequestBody::~CreateProjectModuleRequestBody() = default;

void CreateProjectModuleRequestBody::validate()
{
}

web::json::value CreateProjectModuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(parentModuleIdIsSet_) {
        val[utility::conversions::to_string_t("parent_module_id")] = ModelBase::toJson(parentModuleId_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool CreateProjectModuleRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentModuleId(refVal);
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


std::string CreateProjectModuleRequestBody::getDescription() const
{
    return description_;
}

void CreateProjectModuleRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProjectModuleRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProjectModuleRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProjectModuleRequestBody::getModuleName() const
{
    return moduleName_;
}

void CreateProjectModuleRequestBody::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool CreateProjectModuleRequestBody::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void CreateProjectModuleRequestBody::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

int32_t CreateProjectModuleRequestBody::getParentModuleId() const
{
    return parentModuleId_;
}

void CreateProjectModuleRequestBody::setParentModuleId(int32_t value)
{
    parentModuleId_ = value;
    parentModuleIdIsSet_ = true;
}

bool CreateProjectModuleRequestBody::parentModuleIdIsSet() const
{
    return parentModuleIdIsSet_;
}

void CreateProjectModuleRequestBody::unsetparentModuleId()
{
    parentModuleIdIsSet_ = false;
}

UserRequest CreateProjectModuleRequestBody::getOwner() const
{
    return owner_;
}

void CreateProjectModuleRequestBody::setOwner(const UserRequest& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CreateProjectModuleRequestBody::ownerIsSet() const
{
    return ownerIsSet_;
}

void CreateProjectModuleRequestBody::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


