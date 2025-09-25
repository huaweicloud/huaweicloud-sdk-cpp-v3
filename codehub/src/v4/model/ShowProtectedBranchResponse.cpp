

#include "huaweicloud/codehub/v4/model/ShowProtectedBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProtectedBranchResponse::ShowProtectedBranchResponse()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

ShowProtectedBranchResponse::~ShowProtectedBranchResponse() = default;

void ShowProtectedBranchResponse::validate()
{
}

web::json::value ShowProtectedBranchResponse::toJson() const
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
bool ShowProtectedBranchResponse::fromJson(const web::json::value& val)
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
            std::vector<RepositoryProtectedActionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


int32_t ShowProtectedBranchResponse::getId() const
{
    return id_;
}

void ShowProtectedBranchResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProtectedBranchResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowProtectedBranchResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProtectedBranchResponse::getName() const
{
    return name_;
}

void ShowProtectedBranchResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProtectedBranchResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProtectedBranchResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RepositoryProtectedActionDto>& ShowProtectedBranchResponse::getActions()
{
    return actions_;
}

void ShowProtectedBranchResponse::setActions(const std::vector<RepositoryProtectedActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ShowProtectedBranchResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ShowProtectedBranchResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


