

#include "huaweicloud/codeartsrepo/v4/model/ProjectProtectedBranchApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectProtectedBranchApiDto::ProjectProtectedBranchApiDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

ProjectProtectedBranchApiDto::~ProjectProtectedBranchApiDto() = default;

void ProjectProtectedBranchApiDto::validate()
{
}

web::json::value ProjectProtectedBranchApiDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool ProjectProtectedBranchApiDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectProtectedActionResultApiDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


int32_t ProjectProtectedBranchApiDto::getId() const
{
    return id_;
}

void ProjectProtectedBranchApiDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectProtectedBranchApiDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectProtectedBranchApiDto::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectProtectedBranchApiDto::getName() const
{
    return name_;
}

void ProjectProtectedBranchApiDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectProtectedBranchApiDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectProtectedBranchApiDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedActionResultApiDto>& ProjectProtectedBranchApiDto::getActions()
{
    return actions_;
}

void ProjectProtectedBranchApiDto::setActions(const std::vector<ProjectProtectedActionResultApiDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ProjectProtectedBranchApiDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void ProjectProtectedBranchApiDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


