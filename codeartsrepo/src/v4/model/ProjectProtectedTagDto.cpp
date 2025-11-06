

#include "huaweicloud/codeartsrepo/v4/model/ProjectProtectedTagDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectProtectedTagDto::ProjectProtectedTagDto()
{
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

ProjectProtectedTagDto::~ProjectProtectedTagDto() = default;

void ProjectProtectedTagDto::validate()
{
}

web::json::value ProjectProtectedTagDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool ProjectProtectedTagDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectProtectedTagActionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string ProjectProtectedTagDto::getName() const
{
    return name_;
}

void ProjectProtectedTagDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectProtectedTagDto::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectProtectedTagDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedTagActionDto>& ProjectProtectedTagDto::getActions()
{
    return actions_;
}

void ProjectProtectedTagDto::setActions(const std::vector<ProjectProtectedTagActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ProjectProtectedTagDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void ProjectProtectedTagDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


