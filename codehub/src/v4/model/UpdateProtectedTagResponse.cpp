

#include "huaweicloud/codehub/v4/model/UpdateProtectedTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProtectedTagResponse::UpdateProtectedTagResponse()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

UpdateProtectedTagResponse::~UpdateProtectedTagResponse() = default;

void UpdateProtectedTagResponse::validate()
{
}

web::json::value UpdateProtectedTagResponse::toJson() const
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
bool UpdateProtectedTagResponse::fromJson(const web::json::value& val)
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


int32_t UpdateProtectedTagResponse::getId() const
{
    return id_;
}

void UpdateProtectedTagResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProtectedTagResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateProtectedTagResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateProtectedTagResponse::getName() const
{
    return name_;
}

void UpdateProtectedTagResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProtectedTagResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProtectedTagResponse::unsetname()
{
    nameIsSet_ = false;
}

std::vector<RepositoryProtectedActionDto>& UpdateProtectedTagResponse::getActions()
{
    return actions_;
}

void UpdateProtectedTagResponse::setActions(const std::vector<RepositoryProtectedActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool UpdateProtectedTagResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void UpdateProtectedTagResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


