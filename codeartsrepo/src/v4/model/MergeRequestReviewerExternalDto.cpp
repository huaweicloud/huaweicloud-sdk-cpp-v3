

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestReviewerExternalDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestReviewerExternalDto::MergeRequestReviewerExternalDto()
{
    id_ = 0;
    idIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    state_ = false;
    stateIsSet_ = false;
    score_ = 0;
    scoreIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
}

MergeRequestReviewerExternalDto::~MergeRequestReviewerExternalDto() = default;

void MergeRequestReviewerExternalDto::validate()
{
}

web::json::value MergeRequestReviewerExternalDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
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
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }

    return val;
}
bool MergeRequestReviewerExternalDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestReviewerExternalDto::getId() const
{
    return id_;
}

void MergeRequestReviewerExternalDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestReviewerExternalDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestReviewerExternalDto::getUsername() const
{
    return username_;
}

void MergeRequestReviewerExternalDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void MergeRequestReviewerExternalDto::unsetusername()
{
    usernameIsSet_ = false;
}

std::string MergeRequestReviewerExternalDto::getName() const
{
    return name_;
}

void MergeRequestReviewerExternalDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::nameIsSet() const
{
    return nameIsSet_;
}

void MergeRequestReviewerExternalDto::unsetname()
{
    nameIsSet_ = false;
}

std::string MergeRequestReviewerExternalDto::getNickName() const
{
    return nickName_;
}

void MergeRequestReviewerExternalDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void MergeRequestReviewerExternalDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

bool MergeRequestReviewerExternalDto::isState() const
{
    return state_;
}

void MergeRequestReviewerExternalDto::setState(bool value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestReviewerExternalDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MergeRequestReviewerExternalDto::getScore() const
{
    return score_;
}

void MergeRequestReviewerExternalDto::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::scoreIsSet() const
{
    return scoreIsSet_;
}

void MergeRequestReviewerExternalDto::unsetscore()
{
    scoreIsSet_ = false;
}

std::string MergeRequestReviewerExternalDto::getTenantName() const
{
    return tenantName_;
}

void MergeRequestReviewerExternalDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool MergeRequestReviewerExternalDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void MergeRequestReviewerExternalDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

}
}
}
}
}


