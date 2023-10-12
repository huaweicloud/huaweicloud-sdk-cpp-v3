

#include "huaweicloud/drs/v3/model/ListUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListUsersResponse::ListUsersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    isGlobalPassword_ = "";
    isGlobalPasswordIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    userListIsSet_ = false;
    rolesListIsSet_ = false;
    isSuccess_ = false;
    isSuccessIsSet_ = false;
}

ListUsersResponse::~ListUsersResponse() = default;

void ListUsersResponse::validate()
{
}

web::json::value ListUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(isGlobalPasswordIsSet_) {
        val[utility::conversions::to_string_t("is_global_password")] = ModelBase::toJson(isGlobalPassword_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(userListIsSet_) {
        val[utility::conversions::to_string_t("user_list")] = ModelBase::toJson(userList_);
    }
    if(rolesListIsSet_) {
        val[utility::conversions::to_string_t("roles_list")] = ModelBase::toJson(rolesList_);
    }
    if(isSuccessIsSet_) {
        val[utility::conversions::to_string_t("is_success")] = ModelBase::toJson(isSuccess_);
    }

    return val;
}
bool ListUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_global_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_global_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGlobalPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryUserDetailResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryRoleDetailResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRolesList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSuccess(refVal);
        }
    }
    return ok;
}


std::string ListUsersResponse::getJobId() const
{
    return jobId_;
}

void ListUsersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListUsersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListUsersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListUsersResponse::getIsGlobalPassword() const
{
    return isGlobalPassword_;
}

void ListUsersResponse::setIsGlobalPassword(const std::string& value)
{
    isGlobalPassword_ = value;
    isGlobalPasswordIsSet_ = true;
}

bool ListUsersResponse::isGlobalPasswordIsSet() const
{
    return isGlobalPasswordIsSet_;
}

void ListUsersResponse::unsetisGlobalPassword()
{
    isGlobalPasswordIsSet_ = false;
}

std::string ListUsersResponse::getMessage() const
{
    return message_;
}

void ListUsersResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListUsersResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListUsersResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<QueryUserDetailResp>& ListUsersResponse::getUserList()
{
    return userList_;
}

void ListUsersResponse::setUserList(const std::vector<QueryUserDetailResp>& value)
{
    userList_ = value;
    userListIsSet_ = true;
}

bool ListUsersResponse::userListIsSet() const
{
    return userListIsSet_;
}

void ListUsersResponse::unsetuserList()
{
    userListIsSet_ = false;
}

std::vector<QueryRoleDetailResp>& ListUsersResponse::getRolesList()
{
    return rolesList_;
}

void ListUsersResponse::setRolesList(const std::vector<QueryRoleDetailResp>& value)
{
    rolesList_ = value;
    rolesListIsSet_ = true;
}

bool ListUsersResponse::rolesListIsSet() const
{
    return rolesListIsSet_;
}

void ListUsersResponse::unsetrolesList()
{
    rolesListIsSet_ = false;
}

bool ListUsersResponse::isIsSuccess() const
{
    return isSuccess_;
}

void ListUsersResponse::setIsSuccess(bool value)
{
    isSuccess_ = value;
    isSuccessIsSet_ = true;
}

bool ListUsersResponse::isSuccessIsSet() const
{
    return isSuccessIsSet_;
}

void ListUsersResponse::unsetisSuccess()
{
    isSuccessIsSet_ = false;
}

}
}
}
}
}


