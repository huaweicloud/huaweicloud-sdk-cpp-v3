

#include "huaweicloud/projectman/v4/model/GetProjectInfoV4Result_project_creator.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




GetProjectInfoV4Result_project_creator::GetProjectInfoV4Result_project_creator()
{
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

GetProjectInfoV4Result_project_creator::~GetProjectInfoV4Result_project_creator() = default;

void GetProjectInfoV4Result_project_creator::validate()
{
}

web::json::value GetProjectInfoV4Result_project_creator::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool GetProjectInfoV4Result_project_creator::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}


int32_t GetProjectInfoV4Result_project_creator::getUserNumId() const
{
    return userNumId_;
}

void GetProjectInfoV4Result_project_creator::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project_creator::getUserId() const
{
    return userId_;
}

void GetProjectInfoV4Result_project_creator::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::userIdIsSet() const
{
    return userIdIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project_creator::getUserName() const
{
    return userName_;
}

void GetProjectInfoV4Result_project_creator::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::userNameIsSet() const
{
    return userNameIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string GetProjectInfoV4Result_project_creator::getDomainId() const
{
    return domainId_;
}

void GetProjectInfoV4Result_project_creator::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project_creator::getDomainName() const
{
    return domainName_;
}

void GetProjectInfoV4Result_project_creator::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string GetProjectInfoV4Result_project_creator::getNickName() const
{
    return nickName_;
}

void GetProjectInfoV4Result_project_creator::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool GetProjectInfoV4Result_project_creator::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void GetProjectInfoV4Result_project_creator::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


