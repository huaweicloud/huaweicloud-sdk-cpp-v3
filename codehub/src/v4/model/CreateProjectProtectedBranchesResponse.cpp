

#include "huaweicloud/codehub/v4/model/CreateProjectProtectedBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateProjectProtectedBranchesResponse::CreateProjectProtectedBranchesResponse()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

CreateProjectProtectedBranchesResponse::~CreateProjectProtectedBranchesResponse() = default;

void CreateProjectProtectedBranchesResponse::validate()
{
}

web::json::value CreateProjectProtectedBranchesResponse::toJson() const
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
bool CreateProjectProtectedBranchesResponse::fromJson(const web::json::value& val)
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


int32_t CreateProjectProtectedBranchesResponse::getId() const
{
    return id_;
}

void CreateProjectProtectedBranchesResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateProjectProtectedBranchesResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateProjectProtectedBranchesResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateProjectProtectedBranchesResponse::getName() const
{
    return name_;
}

void CreateProjectProtectedBranchesResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProjectProtectedBranchesResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProjectProtectedBranchesResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedActionResultApiDto>& CreateProjectProtectedBranchesResponse::getActions()
{
    return actions_;
}

void CreateProjectProtectedBranchesResponse::setActions(const std::vector<ProjectProtectedActionResultApiDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateProjectProtectedBranchesResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateProjectProtectedBranchesResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


