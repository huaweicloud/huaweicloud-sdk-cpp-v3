

#include "huaweicloud/projectman/v4/model/ShowCurUserInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCurUserInfoResponse::ShowCurUserInfoResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
    gender_ = "";
    genderIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
}

ShowCurUserInfoResponse::~ShowCurUserInfoResponse() = default;

void ShowCurUserInfoResponse::validate()
{
}

web::json::value ShowCurUserInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }

    return val;
}
bool ShowCurUserInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gender"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGender(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    return ok;
}


std::string ShowCurUserInfoResponse::getDomainId() const
{
    return domainId_;
}

void ShowCurUserInfoResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowCurUserInfoResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowCurUserInfoResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getDomainName() const
{
    return domainName_;
}

void ShowCurUserInfoResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowCurUserInfoResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowCurUserInfoResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ShowCurUserInfoResponse::getUserNumId() const
{
    return userNumId_;
}

void ShowCurUserInfoResponse::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool ShowCurUserInfoResponse::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void ShowCurUserInfoResponse::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getUserId() const
{
    return userId_;
}

void ShowCurUserInfoResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowCurUserInfoResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowCurUserInfoResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getUserName() const
{
    return userName_;
}

void ShowCurUserInfoResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowCurUserInfoResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowCurUserInfoResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getNickName() const
{
    return nickName_;
}

void ShowCurUserInfoResponse::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ShowCurUserInfoResponse::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ShowCurUserInfoResponse::unsetnickName()
{
    nickNameIsSet_ = false;
}

int64_t ShowCurUserInfoResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowCurUserInfoResponse::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowCurUserInfoResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowCurUserInfoResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int64_t ShowCurUserInfoResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowCurUserInfoResponse::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowCurUserInfoResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowCurUserInfoResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getGender() const
{
    return gender_;
}

void ShowCurUserInfoResponse::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool ShowCurUserInfoResponse::genderIsSet() const
{
    return genderIsSet_;
}

void ShowCurUserInfoResponse::unsetgender()
{
    genderIsSet_ = false;
}

std::string ShowCurUserInfoResponse::getUserType() const
{
    return userType_;
}

void ShowCurUserInfoResponse::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool ShowCurUserInfoResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void ShowCurUserInfoResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

}
}
}
}
}


