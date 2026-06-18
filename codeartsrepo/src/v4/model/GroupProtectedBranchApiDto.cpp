

#include "huaweicloud/codeartsrepo/v4/model/GroupProtectedBranchApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GroupProtectedBranchApiDto::GroupProtectedBranchApiDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
    namespaceId_ = 0;
    namespaceIdIsSet_ = false;
}

GroupProtectedBranchApiDto::~GroupProtectedBranchApiDto() = default;

void GroupProtectedBranchApiDto::validate()
{
}

web::json::value GroupProtectedBranchApiDto::toJson() const
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
    if(namespaceIdIsSet_) {
        val[utility::conversions::to_string_t("namespace_id")] = ModelBase::toJson(namespaceId_);
    }

    return val;
}
bool GroupProtectedBranchApiDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("namespace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaceId(refVal);
        }
    }
    return ok;
}


int32_t GroupProtectedBranchApiDto::getId() const
{
    return id_;
}

void GroupProtectedBranchApiDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupProtectedBranchApiDto::idIsSet() const
{
    return idIsSet_;
}

void GroupProtectedBranchApiDto::unsetid()
{
    idIsSet_ = false;
}

std::string GroupProtectedBranchApiDto::getName() const
{
    return name_;
}

void GroupProtectedBranchApiDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupProtectedBranchApiDto::nameIsSet() const
{
    return nameIsSet_;
}

void GroupProtectedBranchApiDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedActionResultApiDto>& GroupProtectedBranchApiDto::getActions()
{
    return actions_;
}

void GroupProtectedBranchApiDto::setActions(const std::vector<ProjectProtectedActionResultApiDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool GroupProtectedBranchApiDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void GroupProtectedBranchApiDto::unsetactions()
{
    actionsIsSet_ = false;
}

int32_t GroupProtectedBranchApiDto::getNamespaceId() const
{
    return namespaceId_;
}

void GroupProtectedBranchApiDto::setNamespaceId(int32_t value)
{
    namespaceId_ = value;
    namespaceIdIsSet_ = true;
}

bool GroupProtectedBranchApiDto::namespaceIdIsSet() const
{
    return namespaceIdIsSet_;
}

void GroupProtectedBranchApiDto::unsetnamespaceId()
{
    namespaceIdIsSet_ = false;
}

}
}
}
}
}


