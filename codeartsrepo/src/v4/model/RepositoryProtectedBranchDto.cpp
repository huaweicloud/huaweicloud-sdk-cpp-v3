

#include "huaweicloud/codeartsrepo/v4/model/RepositoryProtectedBranchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryProtectedBranchDto::RepositoryProtectedBranchDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

RepositoryProtectedBranchDto::~RepositoryProtectedBranchDto() = default;

void RepositoryProtectedBranchDto::validate()
{
}

web::json::value RepositoryProtectedBranchDto::toJson() const
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
bool RepositoryProtectedBranchDto::fromJson(const web::json::value& val)
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


int32_t RepositoryProtectedBranchDto::getId() const
{
    return id_;
}

void RepositoryProtectedBranchDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryProtectedBranchDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryProtectedBranchDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryProtectedBranchDto::getName() const
{
    return name_;
}

void RepositoryProtectedBranchDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryProtectedBranchDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryProtectedBranchDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RepositoryProtectedActionDto>& RepositoryProtectedBranchDto::getActions()
{
    return actions_;
}

void RepositoryProtectedBranchDto::setActions(const std::vector<RepositoryProtectedActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool RepositoryProtectedBranchDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void RepositoryProtectedBranchDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


