

#include "huaweicloud/codeartsrepo/v4/model/GroupBatchAddMemberDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GroupBatchAddMemberDto::GroupBatchAddMemberDto()
{
    iamId_ = "";
    iamIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    repoRoleId_ = "";
    repoRoleIdIsSet_ = false;
    reqRoleId_ = "";
    reqRoleIdIsSet_ = false;
    repoRoleName_ = "";
    repoRoleNameIsSet_ = false;
    reqRoleName_ = "";
    reqRoleNameIsSet_ = false;
}

GroupBatchAddMemberDto::~GroupBatchAddMemberDto() = default;

void GroupBatchAddMemberDto::validate()
{
}

web::json::value GroupBatchAddMemberDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(repoRoleIdIsSet_) {
        val[utility::conversions::to_string_t("repo_role_id")] = ModelBase::toJson(repoRoleId_);
    }
    if(reqRoleIdIsSet_) {
        val[utility::conversions::to_string_t("req_role_id")] = ModelBase::toJson(reqRoleId_);
    }
    if(repoRoleNameIsSet_) {
        val[utility::conversions::to_string_t("repo_role_name")] = ModelBase::toJson(repoRoleName_);
    }
    if(reqRoleNameIsSet_) {
        val[utility::conversions::to_string_t("req_role_name")] = ModelBase::toJson(reqRoleName_);
    }

    return val;
}
bool GroupBatchAddMemberDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repo_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("req_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("req_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqRoleName(refVal);
        }
    }
    return ok;
}


std::string GroupBatchAddMemberDto::getIamId() const
{
    return iamId_;
}

void GroupBatchAddMemberDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool GroupBatchAddMemberDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void GroupBatchAddMemberDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getUserId() const
{
    return userId_;
}

void GroupBatchAddMemberDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GroupBatchAddMemberDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void GroupBatchAddMemberDto::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getName() const
{
    return name_;
}

void GroupBatchAddMemberDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupBatchAddMemberDto::nameIsSet() const
{
    return nameIsSet_;
}

void GroupBatchAddMemberDto::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getNickName() const
{
    return nickName_;
}

void GroupBatchAddMemberDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool GroupBatchAddMemberDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void GroupBatchAddMemberDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getDomainName() const
{
    return domainName_;
}

void GroupBatchAddMemberDto::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool GroupBatchAddMemberDto::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void GroupBatchAddMemberDto::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getDomainId() const
{
    return domainId_;
}

void GroupBatchAddMemberDto::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool GroupBatchAddMemberDto::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void GroupBatchAddMemberDto::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getRepoRoleId() const
{
    return repoRoleId_;
}

void GroupBatchAddMemberDto::setRepoRoleId(const std::string& value)
{
    repoRoleId_ = value;
    repoRoleIdIsSet_ = true;
}

bool GroupBatchAddMemberDto::repoRoleIdIsSet() const
{
    return repoRoleIdIsSet_;
}

void GroupBatchAddMemberDto::unsetrepoRoleId()
{
    repoRoleIdIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getReqRoleId() const
{
    return reqRoleId_;
}

void GroupBatchAddMemberDto::setReqRoleId(const std::string& value)
{
    reqRoleId_ = value;
    reqRoleIdIsSet_ = true;
}

bool GroupBatchAddMemberDto::reqRoleIdIsSet() const
{
    return reqRoleIdIsSet_;
}

void GroupBatchAddMemberDto::unsetreqRoleId()
{
    reqRoleIdIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getRepoRoleName() const
{
    return repoRoleName_;
}

void GroupBatchAddMemberDto::setRepoRoleName(const std::string& value)
{
    repoRoleName_ = value;
    repoRoleNameIsSet_ = true;
}

bool GroupBatchAddMemberDto::repoRoleNameIsSet() const
{
    return repoRoleNameIsSet_;
}

void GroupBatchAddMemberDto::unsetrepoRoleName()
{
    repoRoleNameIsSet_ = false;
}

std::string GroupBatchAddMemberDto::getReqRoleName() const
{
    return reqRoleName_;
}

void GroupBatchAddMemberDto::setReqRoleName(const std::string& value)
{
    reqRoleName_ = value;
    reqRoleNameIsSet_ = true;
}

bool GroupBatchAddMemberDto::reqRoleNameIsSet() const
{
    return reqRoleNameIsSet_;
}

void GroupBatchAddMemberDto::unsetreqRoleName()
{
    reqRoleNameIsSet_ = false;
}

}
}
}
}
}


