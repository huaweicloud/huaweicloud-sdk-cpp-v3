

#include "huaweicloud/codeartsrepo/v3/model/ApprovalMergeRequestApproversItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ApprovalMergeRequestApproversItem::ApprovalMergeRequestApproversItem()
{
    id_ = 0.0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

ApprovalMergeRequestApproversItem::~ApprovalMergeRequestApproversItem() = default;

void ApprovalMergeRequestApproversItem::validate()
{
}

web::json::value ApprovalMergeRequestApproversItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool ApprovalMergeRequestApproversItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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


double ApprovalMergeRequestApproversItem::getId() const
{
    return id_;
}

void ApprovalMergeRequestApproversItem::setId(double value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApprovalMergeRequestApproversItem::idIsSet() const
{
    return idIsSet_;
}

void ApprovalMergeRequestApproversItem::unsetid()
{
    idIsSet_ = false;
}

std::string ApprovalMergeRequestApproversItem::getName() const
{
    return name_;
}

void ApprovalMergeRequestApproversItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApprovalMergeRequestApproversItem::nameIsSet() const
{
    return nameIsSet_;
}

void ApprovalMergeRequestApproversItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ApprovalMergeRequestApproversItem::getNickName() const
{
    return nickName_;
}

void ApprovalMergeRequestApproversItem::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ApprovalMergeRequestApproversItem::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ApprovalMergeRequestApproversItem::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ApprovalMergeRequestApproversItem::getState() const
{
    return state_;
}

void ApprovalMergeRequestApproversItem::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ApprovalMergeRequestApproversItem::stateIsSet() const
{
    return stateIsSet_;
}

void ApprovalMergeRequestApproversItem::unsetstate()
{
    stateIsSet_ = false;
}

std::string ApprovalMergeRequestApproversItem::getUsername() const
{
    return username_;
}

void ApprovalMergeRequestApproversItem::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ApprovalMergeRequestApproversItem::usernameIsSet() const
{
    return usernameIsSet_;
}

void ApprovalMergeRequestApproversItem::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


