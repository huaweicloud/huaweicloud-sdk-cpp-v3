

#include "huaweicloud/drs/v3/model/QueryUserResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryUserResp::QueryUserResp()
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

QueryUserResp::~QueryUserResp() = default;

void QueryUserResp::validate()
{
}

web::json::value QueryUserResp::toJson() const
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

bool QueryUserResp::fromJson(const web::json::value& val)
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

std::string QueryUserResp::getJobId() const
{
    return jobId_;
}

void QueryUserResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryUserResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryUserResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryUserResp::getIsGlobalPassword() const
{
    return isGlobalPassword_;
}

void QueryUserResp::setIsGlobalPassword(const std::string& value)
{
    isGlobalPassword_ = value;
    isGlobalPasswordIsSet_ = true;
}

bool QueryUserResp::isGlobalPasswordIsSet() const
{
    return isGlobalPasswordIsSet_;
}

void QueryUserResp::unsetisGlobalPassword()
{
    isGlobalPasswordIsSet_ = false;
}

std::string QueryUserResp::getMessage() const
{
    return message_;
}

void QueryUserResp::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool QueryUserResp::messageIsSet() const
{
    return messageIsSet_;
}

void QueryUserResp::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<QueryUserDetailResp>& QueryUserResp::getUserList()
{
    return userList_;
}

void QueryUserResp::setUserList(const std::vector<QueryUserDetailResp>& value)
{
    userList_ = value;
    userListIsSet_ = true;
}

bool QueryUserResp::userListIsSet() const
{
    return userListIsSet_;
}

void QueryUserResp::unsetuserList()
{
    userListIsSet_ = false;
}

std::vector<QueryRoleDetailResp>& QueryUserResp::getRolesList()
{
    return rolesList_;
}

void QueryUserResp::setRolesList(const std::vector<QueryRoleDetailResp>& value)
{
    rolesList_ = value;
    rolesListIsSet_ = true;
}

bool QueryUserResp::rolesListIsSet() const
{
    return rolesListIsSet_;
}

void QueryUserResp::unsetrolesList()
{
    rolesListIsSet_ = false;
}

bool QueryUserResp::isIsSuccess() const
{
    return isSuccess_;
}

void QueryUserResp::setIsSuccess(bool value)
{
    isSuccess_ = value;
    isSuccessIsSet_ = true;
}

bool QueryUserResp::isSuccessIsSet() const
{
    return isSuccessIsSet_;
}

void QueryUserResp::unsetisSuccess()
{
    isSuccessIsSet_ = false;
}

}
}
}
}
}


