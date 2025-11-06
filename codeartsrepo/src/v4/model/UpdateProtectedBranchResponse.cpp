

#include "huaweicloud/codeartsrepo/v4/model/UpdateProtectedBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProtectedBranchResponse::UpdateProtectedBranchResponse()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

UpdateProtectedBranchResponse::~UpdateProtectedBranchResponse() = default;

void UpdateProtectedBranchResponse::validate()
{
}

web::json::value UpdateProtectedBranchResponse::toJson() const
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
bool UpdateProtectedBranchResponse::fromJson(const web::json::value& val)
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


int32_t UpdateProtectedBranchResponse::getId() const
{
    return id_;
}

void UpdateProtectedBranchResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProtectedBranchResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateProtectedBranchResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateProtectedBranchResponse::getName() const
{
    return name_;
}

void UpdateProtectedBranchResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProtectedBranchResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProtectedBranchResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RepositoryProtectedActionDto>& UpdateProtectedBranchResponse::getActions()
{
    return actions_;
}

void UpdateProtectedBranchResponse::setActions(const std::vector<RepositoryProtectedActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool UpdateProtectedBranchResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void UpdateProtectedBranchResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


