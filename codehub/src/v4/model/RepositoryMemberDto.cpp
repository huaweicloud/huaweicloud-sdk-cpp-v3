

#include "huaweicloud/codehub/v4/model/RepositoryMemberDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepositoryMemberDto::RepositoryMemberDto()
{
    userId_ = 0;
    userIdIsSet_ = false;
    userIamId_ = "";
    userIamIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userNickName_ = "";
    userNickNameIsSet_ = false;
    tenantName_ = "";
    tenantNameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    isRepoCreator_ = 0;
    isRepoCreatorIsSet_ = false;
    isGroupCreator_ = 0;
    isGroupCreatorIsSet_ = false;
    isProjectAdmin_ = 0;
    isProjectAdminIsSet_ = false;
    projectRoleName_ = "";
    projectRoleNameIsSet_ = false;
    repositoryRoleName_ = "";
    repositoryRoleNameIsSet_ = false;
    repositoryRoleId_ = "";
    repositoryRoleIdIsSet_ = false;
    memberSource_ = "";
    memberSourceIsSet_ = false;
    memberGroupSource_ = "";
    memberGroupSourceIsSet_ = false;
    memberSourceId_ = "";
    memberSourceIdIsSet_ = false;
    serviceLicenseStatus_ = 0;
    serviceLicenseStatusIsSet_ = false;
    actionEnabled_ = false;
    actionEnabledIsSet_ = false;
}

RepositoryMemberDto::~RepositoryMemberDto() = default;

void RepositoryMemberDto::validate()
{
}

web::json::value RepositoryMemberDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userIamIdIsSet_) {
        val[utility::conversions::to_string_t("user_iam_id")] = ModelBase::toJson(userIamId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userNickNameIsSet_) {
        val[utility::conversions::to_string_t("user_nick_name")] = ModelBase::toJson(userNickName_);
    }
    if(tenantNameIsSet_) {
        val[utility::conversions::to_string_t("tenant_name")] = ModelBase::toJson(tenantName_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(isRepoCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_repo_creator")] = ModelBase::toJson(isRepoCreator_);
    }
    if(isGroupCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_group_creator")] = ModelBase::toJson(isGroupCreator_);
    }
    if(isProjectAdminIsSet_) {
        val[utility::conversions::to_string_t("is_Project_admin")] = ModelBase::toJson(isProjectAdmin_);
    }
    if(projectRoleNameIsSet_) {
        val[utility::conversions::to_string_t("project_role_name")] = ModelBase::toJson(projectRoleName_);
    }
    if(repositoryRoleNameIsSet_) {
        val[utility::conversions::to_string_t("repository_role_name")] = ModelBase::toJson(repositoryRoleName_);
    }
    if(repositoryRoleIdIsSet_) {
        val[utility::conversions::to_string_t("repository_role_Id")] = ModelBase::toJson(repositoryRoleId_);
    }
    if(memberSourceIsSet_) {
        val[utility::conversions::to_string_t("member_source")] = ModelBase::toJson(memberSource_);
    }
    if(memberGroupSourceIsSet_) {
        val[utility::conversions::to_string_t("member_group_source")] = ModelBase::toJson(memberGroupSource_);
    }
    if(memberSourceIdIsSet_) {
        val[utility::conversions::to_string_t("member_source_id")] = ModelBase::toJson(memberSourceId_);
    }
    if(serviceLicenseStatusIsSet_) {
        val[utility::conversions::to_string_t("service_license_status")] = ModelBase::toJson(serviceLicenseStatus_);
    }
    if(actionEnabledIsSet_) {
        val[utility::conversions::to_string_t("action_enabled")] = ModelBase::toJson(actionEnabled_);
    }

    return val;
}
bool RepositoryMemberDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("user_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNickName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_repo_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_repo_creator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRepoCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_group_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_group_creator"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGroupCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_Project_admin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_Project_admin"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProjectAdmin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryRoleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("member_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_group_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_group_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberGroupSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_license_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_license_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceLicenseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionEnabled(refVal);
        }
    }
    return ok;
}


int32_t RepositoryMemberDto::getUserId() const
{
    return userId_;
}

void RepositoryMemberDto::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RepositoryMemberDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void RepositoryMemberDto::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string RepositoryMemberDto::getUserIamId() const
{
    return userIamId_;
}

void RepositoryMemberDto::setUserIamId(const std::string& value)
{
    userIamId_ = value;
    userIamIdIsSet_ = true;
}

bool RepositoryMemberDto::userIamIdIsSet() const
{
    return userIamIdIsSet_;
}

void RepositoryMemberDto::unsetuserIamId()
{
    userIamIdIsSet_ = false;
}

std::string RepositoryMemberDto::getUserName() const
{
    return userName_;
}

void RepositoryMemberDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepositoryMemberDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepositoryMemberDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RepositoryMemberDto::getUserNickName() const
{
    return userNickName_;
}

void RepositoryMemberDto::setUserNickName(const std::string& value)
{
    userNickName_ = value;
    userNickNameIsSet_ = true;
}

bool RepositoryMemberDto::userNickNameIsSet() const
{
    return userNickNameIsSet_;
}

void RepositoryMemberDto::unsetuserNickName()
{
    userNickNameIsSet_ = false;
}

std::string RepositoryMemberDto::getTenantName() const
{
    return tenantName_;
}

void RepositoryMemberDto::setTenantName(const std::string& value)
{
    tenantName_ = value;
    tenantNameIsSet_ = true;
}

bool RepositoryMemberDto::tenantNameIsSet() const
{
    return tenantNameIsSet_;
}

void RepositoryMemberDto::unsettenantName()
{
    tenantNameIsSet_ = false;
}

std::string RepositoryMemberDto::getTenantId() const
{
    return tenantId_;
}

void RepositoryMemberDto::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool RepositoryMemberDto::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void RepositoryMemberDto::unsettenantId()
{
    tenantIdIsSet_ = false;
}

int32_t RepositoryMemberDto::getIsRepoCreator() const
{
    return isRepoCreator_;
}

void RepositoryMemberDto::setIsRepoCreator(int32_t value)
{
    isRepoCreator_ = value;
    isRepoCreatorIsSet_ = true;
}

bool RepositoryMemberDto::isRepoCreatorIsSet() const
{
    return isRepoCreatorIsSet_;
}

void RepositoryMemberDto::unsetisRepoCreator()
{
    isRepoCreatorIsSet_ = false;
}

int32_t RepositoryMemberDto::getIsGroupCreator() const
{
    return isGroupCreator_;
}

void RepositoryMemberDto::setIsGroupCreator(int32_t value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool RepositoryMemberDto::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void RepositoryMemberDto::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

int32_t RepositoryMemberDto::getIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void RepositoryMemberDto::setIsProjectAdmin(int32_t value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool RepositoryMemberDto::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void RepositoryMemberDto::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

std::string RepositoryMemberDto::getProjectRoleName() const
{
    return projectRoleName_;
}

void RepositoryMemberDto::setProjectRoleName(const std::string& value)
{
    projectRoleName_ = value;
    projectRoleNameIsSet_ = true;
}

bool RepositoryMemberDto::projectRoleNameIsSet() const
{
    return projectRoleNameIsSet_;
}

void RepositoryMemberDto::unsetprojectRoleName()
{
    projectRoleNameIsSet_ = false;
}

std::string RepositoryMemberDto::getRepositoryRoleName() const
{
    return repositoryRoleName_;
}

void RepositoryMemberDto::setRepositoryRoleName(const std::string& value)
{
    repositoryRoleName_ = value;
    repositoryRoleNameIsSet_ = true;
}

bool RepositoryMemberDto::repositoryRoleNameIsSet() const
{
    return repositoryRoleNameIsSet_;
}

void RepositoryMemberDto::unsetrepositoryRoleName()
{
    repositoryRoleNameIsSet_ = false;
}

std::string RepositoryMemberDto::getRepositoryRoleId() const
{
    return repositoryRoleId_;
}

void RepositoryMemberDto::setRepositoryRoleId(const std::string& value)
{
    repositoryRoleId_ = value;
    repositoryRoleIdIsSet_ = true;
}

bool RepositoryMemberDto::repositoryRoleIdIsSet() const
{
    return repositoryRoleIdIsSet_;
}

void RepositoryMemberDto::unsetrepositoryRoleId()
{
    repositoryRoleIdIsSet_ = false;
}

std::string RepositoryMemberDto::getMemberSource() const
{
    return memberSource_;
}

void RepositoryMemberDto::setMemberSource(const std::string& value)
{
    memberSource_ = value;
    memberSourceIsSet_ = true;
}

bool RepositoryMemberDto::memberSourceIsSet() const
{
    return memberSourceIsSet_;
}

void RepositoryMemberDto::unsetmemberSource()
{
    memberSourceIsSet_ = false;
}

std::string RepositoryMemberDto::getMemberGroupSource() const
{
    return memberGroupSource_;
}

void RepositoryMemberDto::setMemberGroupSource(const std::string& value)
{
    memberGroupSource_ = value;
    memberGroupSourceIsSet_ = true;
}

bool RepositoryMemberDto::memberGroupSourceIsSet() const
{
    return memberGroupSourceIsSet_;
}

void RepositoryMemberDto::unsetmemberGroupSource()
{
    memberGroupSourceIsSet_ = false;
}

std::string RepositoryMemberDto::getMemberSourceId() const
{
    return memberSourceId_;
}

void RepositoryMemberDto::setMemberSourceId(const std::string& value)
{
    memberSourceId_ = value;
    memberSourceIdIsSet_ = true;
}

bool RepositoryMemberDto::memberSourceIdIsSet() const
{
    return memberSourceIdIsSet_;
}

void RepositoryMemberDto::unsetmemberSourceId()
{
    memberSourceIdIsSet_ = false;
}

int32_t RepositoryMemberDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void RepositoryMemberDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool RepositoryMemberDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void RepositoryMemberDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

bool RepositoryMemberDto::isActionEnabled() const
{
    return actionEnabled_;
}

void RepositoryMemberDto::setActionEnabled(bool value)
{
    actionEnabled_ = value;
    actionEnabledIsSet_ = true;
}

bool RepositoryMemberDto::actionEnabledIsSet() const
{
    return actionEnabledIsSet_;
}

void RepositoryMemberDto::unsetactionEnabled()
{
    actionEnabledIsSet_ = false;
}

}
}
}
}
}


