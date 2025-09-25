

#include "huaweicloud/codehub/v4/model/CreateRepositoryMemberDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateRepositoryMemberDto::CreateRepositoryMemberDto()
{
    userIamId_ = "";
    userIamIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    repositoryRoleId_ = "";
    repositoryRoleIdIsSet_ = false;
}

CreateRepositoryMemberDto::~CreateRepositoryMemberDto() = default;

void CreateRepositoryMemberDto::validate()
{
}

web::json::value CreateRepositoryMemberDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIamIdIsSet_) {
        val[utility::conversions::to_string_t("user_iam_id")] = ModelBase::toJson(userIamId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(repositoryRoleIdIsSet_) {
        val[utility::conversions::to_string_t("repository_role_Id")] = ModelBase::toJson(repositoryRoleId_);
    }

    return val;
}
bool CreateRepositoryMemberDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIamId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_role_Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_role_Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryRoleId(refVal);
        }
    }
    return ok;
}


std::string CreateRepositoryMemberDto::getUserIamId() const
{
    return userIamId_;
}

void CreateRepositoryMemberDto::setUserIamId(const std::string& value)
{
    userIamId_ = value;
    userIamIdIsSet_ = true;
}

bool CreateRepositoryMemberDto::userIamIdIsSet() const
{
    return userIamIdIsSet_;
}

void CreateRepositoryMemberDto::unsetuserIamId()
{
    userIamIdIsSet_ = false;
}

std::string CreateRepositoryMemberDto::getUserName() const
{
    return userName_;
}

void CreateRepositoryMemberDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateRepositoryMemberDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateRepositoryMemberDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateRepositoryMemberDto::getTenantName() const
{
    return tenantName_;
}

void CreateRepositoryMemberDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool CreateRepositoryMemberDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void CreateRepositoryMemberDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string CreateRepositoryMemberDto::getTenantId() const
{
    return tenantId_;
}

void CreateRepositoryMemberDto::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateRepositoryMemberDto::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateRepositoryMemberDto::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string CreateRepositoryMemberDto::getRepositoryRoleId() const
{
    return repositoryRoleId_;
}

void CreateRepositoryMemberDto::setRepositoryRoleId(const std::string& value)
{
    repositoryRoleId_ = value;
    repositoryRoleIdIsSet_ = true;
}

bool CreateRepositoryMemberDto::repositoryRoleIdIsSet() const
{
    return repositoryRoleIdIsSet_;
}

void CreateRepositoryMemberDto::unsetrepositoryRoleId()
{
    repositoryRoleIdIsSet_ = false;
}

}
}
}
}
}


