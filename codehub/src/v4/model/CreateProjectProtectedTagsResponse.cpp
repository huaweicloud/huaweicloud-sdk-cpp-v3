

#include "huaweicloud/codehub/v4/model/CreateProjectProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateProjectProtectedTagsResponse::CreateProjectProtectedTagsResponse()
{
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

CreateProjectProtectedTagsResponse::~CreateProjectProtectedTagsResponse() = default;

void CreateProjectProtectedTagsResponse::validate()
{
}

web::json::value CreateProjectProtectedTagsResponse::toJson() const
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
bool CreateProjectProtectedTagsResponse::fromJson(const web::json::value& val)
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


std::string CreateProjectProtectedTagsResponse::getName() const
{
    return name_;
}

void CreateProjectProtectedTagsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProjectProtectedTagsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProjectProtectedTagsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedTagActionDto>& CreateProjectProtectedTagsResponse::getActions()
{
    return actions_;
}

void CreateProjectProtectedTagsResponse::setActions(const std::vector<ProjectProtectedTagActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateProjectProtectedTagsResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateProjectProtectedTagsResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


