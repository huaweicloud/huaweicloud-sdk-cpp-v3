

#include "huaweicloud/codeartsrepo/v4/model/GroupMemberDetailDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GroupMemberDetailDto::GroupMemberDetailDto()
{
    id_ = 0;
    idIsSet_ = false;
    sourceId_ = 0;
    sourceIdIsSet_ = false;
    userId_ = 0;
    userIdIsSet_ = false;
    userFrom_ = "";
    userFromIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    cnRoleName_ = "";
    cnRoleNameIsSet_ = false;
    reqRoleId_ = "";
    reqRoleIdIsSet_ = false;
    reqRoleName_ = "";
    reqRoleNameIsSet_ = false;
    userGroupId_ = "";
    userGroupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    isGroupCreator_ = false;
    isGroupCreatorIsSet_ = false;
    isProjectAdmin_ = false;
    isProjectAdminIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    roleChineseName_ = "";
    roleChineseNameIsSet_ = false;
    canRemove_ = false;
    canRemoveIsSet_ = false;
    accessLevel_ = 0;
    accessLevelIsSet_ = false;
    serviceLicenseStatus_ = 0;
    serviceLicenseStatusIsSet_ = false;
    iamId_ = "";
    iamIdIsSet_ = false;
    currentGroupMember_ = false;
    currentGroupMemberIsSet_ = false;
}

GroupMemberDetailDto::~GroupMemberDetailDto() = default;

void GroupMemberDetailDto::validate()
{
}

web::json::value GroupMemberDetailDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userFromIsSet_) {
        val[utility::conversions::to_string_t("user_from")] = ModelBase::toJson(userFrom_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(cnRoleNameIsSet_) {
        val[utility::conversions::to_string_t("cn_role_name")] = ModelBase::toJson(cnRoleName_);
    }
    if(reqRoleIdIsSet_) {
        val[utility::conversions::to_string_t("req_role_id")] = ModelBase::toJson(reqRoleId_);
    }
    if(reqRoleNameIsSet_) {
        val[utility::conversions::to_string_t("req_role_name")] = ModelBase::toJson(reqRoleName_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
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
    if(isGroupCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_group_creator")] = ModelBase::toJson(isGroupCreator_);
    }
    if(isProjectAdminIsSet_) {
        val[utility::conversions::to_string_t("is_project_admin")] = ModelBase::toJson(isProjectAdmin_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(roleChineseNameIsSet_) {
        val[utility::conversions::to_string_t("role_chinese_name")] = ModelBase::toJson(roleChineseName_);
    }
    if(canRemoveIsSet_) {
        val[utility::conversions::to_string_t("can_remove")] = ModelBase::toJson(canRemove_);
    }
    if(accessLevelIsSet_) {
        val[utility::conversions::to_string_t("access_level")] = ModelBase::toJson(accessLevel_);
    }
    if(serviceLicenseStatusIsSet_) {
        val[utility::conversions::to_string_t("service_license_status")] = ModelBase::toJson(serviceLicenseStatus_);
    }
    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(currentGroupMemberIsSet_) {
        val[utility::conversions::to_string_t("current_group_member")] = ModelBase::toJson(currentGroupMember_);
    }

    return val;
}
bool GroupMemberDetailDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cn_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnRoleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("req_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReqRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_group_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_group_creator"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGroupCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_project_admin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_project_admin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProjectAdmin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_chinese_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_chinese_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleChineseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_remove"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_remove"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanRemove(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_group_member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_group_member"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentGroupMember(refVal);
        }
    }
    return ok;
}


int32_t GroupMemberDetailDto::getId() const
{
    return id_;
}

void GroupMemberDetailDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupMemberDetailDto::idIsSet() const
{
    return idIsSet_;
}

void GroupMemberDetailDto::unsetid()
{
    idIsSet_ = false;
}

int32_t GroupMemberDetailDto::getSourceId() const
{
    return sourceId_;
}

void GroupMemberDetailDto::setSourceId(int32_t value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool GroupMemberDetailDto::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void GroupMemberDetailDto::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

int32_t GroupMemberDetailDto::getUserId() const
{
    return userId_;
}

void GroupMemberDetailDto::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool GroupMemberDetailDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void GroupMemberDetailDto::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string GroupMemberDetailDto::getUserFrom() const
{
    return userFrom_;
}

void GroupMemberDetailDto::setUserFrom(const std::string& value)
{
    userFrom_ = value;
    userFromIsSet_ = true;
}

bool GroupMemberDetailDto::userFromIsSet() const
{
    return userFromIsSet_;
}

void GroupMemberDetailDto::unsetuserFrom()
{
    userFromIsSet_ = false;
}

std::string GroupMemberDetailDto::getRoleId() const
{
    return roleId_;
}

void GroupMemberDetailDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool GroupMemberDetailDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void GroupMemberDetailDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string GroupMemberDetailDto::getRoleName() const
{
    return roleName_;
}

void GroupMemberDetailDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool GroupMemberDetailDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void GroupMemberDetailDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getCnRoleName() const
{
    return cnRoleName_;
}

void GroupMemberDetailDto::setCnRoleName(const std::string& value)
{
    cnRoleName_ = value;
    cnRoleNameIsSet_ = true;
}

bool GroupMemberDetailDto::cnRoleNameIsSet() const
{
    return cnRoleNameIsSet_;
}

void GroupMemberDetailDto::unsetcnRoleName()
{
    cnRoleNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getReqRoleId() const
{
    return reqRoleId_;
}

void GroupMemberDetailDto::setReqRoleId(const std::string& value)
{
    reqRoleId_ = value;
    reqRoleIdIsSet_ = true;
}

bool GroupMemberDetailDto::reqRoleIdIsSet() const
{
    return reqRoleIdIsSet_;
}

void GroupMemberDetailDto::unsetreqRoleId()
{
    reqRoleIdIsSet_ = false;
}

std::string GroupMemberDetailDto::getReqRoleName() const
{
    return reqRoleName_;
}

void GroupMemberDetailDto::setReqRoleName(const std::string& value)
{
    reqRoleName_ = value;
    reqRoleNameIsSet_ = true;
}

bool GroupMemberDetailDto::reqRoleNameIsSet() const
{
    return reqRoleNameIsSet_;
}

void GroupMemberDetailDto::unsetreqRoleName()
{
    reqRoleNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getUserGroupId() const
{
    return userGroupId_;
}

void GroupMemberDetailDto::setUserGroupId(const std::string& value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool GroupMemberDetailDto::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void GroupMemberDetailDto::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

std::string GroupMemberDetailDto::getGroupName() const
{
    return groupName_;
}

void GroupMemberDetailDto::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool GroupMemberDetailDto::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void GroupMemberDetailDto::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getUserName() const
{
    return userName_;
}

void GroupMemberDetailDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool GroupMemberDetailDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void GroupMemberDetailDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getDomainId() const
{
    return domainId_;
}

void GroupMemberDetailDto::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool GroupMemberDetailDto::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void GroupMemberDetailDto::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string GroupMemberDetailDto::getDomainName() const
{
    return domainName_;
}

void GroupMemberDetailDto::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool GroupMemberDetailDto::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void GroupMemberDetailDto::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string GroupMemberDetailDto::getNickName() const
{
    return nickName_;
}

void GroupMemberDetailDto::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool GroupMemberDetailDto::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void GroupMemberDetailDto::unsetnickName()
{
    nickNameIsSet_ = false;
}

bool GroupMemberDetailDto::isIsGroupCreator() const
{
    return isGroupCreator_;
}

void GroupMemberDetailDto::setIsGroupCreator(bool value)
{
    isGroupCreator_ = value;
    isGroupCreatorIsSet_ = true;
}

bool GroupMemberDetailDto::isGroupCreatorIsSet() const
{
    return isGroupCreatorIsSet_;
}

void GroupMemberDetailDto::unsetisGroupCreator()
{
    isGroupCreatorIsSet_ = false;
}

bool GroupMemberDetailDto::isIsProjectAdmin() const
{
    return isProjectAdmin_;
}

void GroupMemberDetailDto::setIsProjectAdmin(bool value)
{
    isProjectAdmin_ = value;
    isProjectAdminIsSet_ = true;
}

bool GroupMemberDetailDto::isProjectAdminIsSet() const
{
    return isProjectAdminIsSet_;
}

void GroupMemberDetailDto::unsetisProjectAdmin()
{
    isProjectAdminIsSet_ = false;
}

std::string GroupMemberDetailDto::getPath() const
{
    return path_;
}

void GroupMemberDetailDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool GroupMemberDetailDto::pathIsSet() const
{
    return pathIsSet_;
}

void GroupMemberDetailDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string GroupMemberDetailDto::getRoleChineseName() const
{
    return roleChineseName_;
}

void GroupMemberDetailDto::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool GroupMemberDetailDto::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void GroupMemberDetailDto::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

bool GroupMemberDetailDto::isCanRemove() const
{
    return canRemove_;
}

void GroupMemberDetailDto::setCanRemove(bool value)
{
    canRemove_ = value;
    canRemoveIsSet_ = true;
}

bool GroupMemberDetailDto::canRemoveIsSet() const
{
    return canRemoveIsSet_;
}

void GroupMemberDetailDto::unsetcanRemove()
{
    canRemoveIsSet_ = false;
}

int32_t GroupMemberDetailDto::getAccessLevel() const
{
    return accessLevel_;
}

void GroupMemberDetailDto::setAccessLevel(int32_t value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool GroupMemberDetailDto::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void GroupMemberDetailDto::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

int32_t GroupMemberDetailDto::getServiceLicenseStatus() const
{
    return serviceLicenseStatus_;
}

void GroupMemberDetailDto::setServiceLicenseStatus(int32_t value)
{
    serviceLicenseStatus_ = value;
    serviceLicenseStatusIsSet_ = true;
}

bool GroupMemberDetailDto::serviceLicenseStatusIsSet() const
{
    return serviceLicenseStatusIsSet_;
}

void GroupMemberDetailDto::unsetserviceLicenseStatus()
{
    serviceLicenseStatusIsSet_ = false;
}

std::string GroupMemberDetailDto::getIamId() const
{
    return iamId_;
}

void GroupMemberDetailDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool GroupMemberDetailDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void GroupMemberDetailDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

bool GroupMemberDetailDto::isCurrentGroupMember() const
{
    return currentGroupMember_;
}

void GroupMemberDetailDto::setCurrentGroupMember(bool value)
{
    currentGroupMember_ = value;
    currentGroupMemberIsSet_ = true;
}

bool GroupMemberDetailDto::currentGroupMemberIsSet() const
{
    return currentGroupMemberIsSet_;
}

void GroupMemberDetailDto::unsetcurrentGroupMember()
{
    currentGroupMemberIsSet_ = false;
}

}
}
}
}
}


