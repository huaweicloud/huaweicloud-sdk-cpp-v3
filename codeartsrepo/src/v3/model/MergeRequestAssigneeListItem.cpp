

#include "huaweicloud/codeartsrepo/v3/model/MergeRequestAssigneeListItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeRequestAssigneeListItem::MergeRequestAssigneeListItem()
{
    id_ = 0.0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

MergeRequestAssigneeListItem::~MergeRequestAssigneeListItem() = default;

void MergeRequestAssigneeListItem::validate()
{
}

web::json::value MergeRequestAssigneeListItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool MergeRequestAssigneeListItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            double refVal;
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    return ok;
}


double MergeRequestAssigneeListItem::getId() const
{
    return id_;
}

void MergeRequestAssigneeListItem::setId(double value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestAssigneeListItem::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestAssigneeListItem::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestAssigneeListItem::getName() const
{
    return name_;
}

void MergeRequestAssigneeListItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestAssigneeListItem::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestAssigneeListItem::unsetname()
{
    nameIsSet_ = false;
}

std::string MergeRequestAssigneeListItem::getState() const
{
    return state_;
}

void MergeRequestAssigneeListItem::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestAssigneeListItem::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestAssigneeListItem::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeRequestAssigneeListItem::getUsername() const
{
    return username_;
}

void MergeRequestAssigneeListItem::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MergeRequestAssigneeListItem::usernameIsSet() const
{
    return usernameIsSet_;
}

void MergeRequestAssigneeListItem::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


