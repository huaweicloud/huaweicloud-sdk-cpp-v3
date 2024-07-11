

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppToGroupResult::MoveAppToGroupResult()
{
    code_ = "";
    codeIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

MoveAppToGroupResult::~MoveAppToGroupResult() = default;

void MoveAppToGroupResult::validate()
{
}

web::json::value MoveAppToGroupResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool MoveAppToGroupResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string MoveAppToGroupResult::getCode() const
{
    return code_;
}

void MoveAppToGroupResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool MoveAppToGroupResult::codeIsSet() const
{
    return codeIsSet_;
}

void MoveAppToGroupResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string MoveAppToGroupResult::getApplicationId() const
{
    return applicationId_;
}

void MoveAppToGroupResult::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool MoveAppToGroupResult::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void MoveAppToGroupResult::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string MoveAppToGroupResult::getApplicationName() const
{
    return applicationName_;
}

void MoveAppToGroupResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool MoveAppToGroupResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void MoveAppToGroupResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string MoveAppToGroupResult::getErrorCode() const
{
    return errorCode_;
}

void MoveAppToGroupResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool MoveAppToGroupResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void MoveAppToGroupResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string MoveAppToGroupResult::getErrorMsg() const
{
    return errorMsg_;
}

void MoveAppToGroupResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool MoveAppToGroupResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void MoveAppToGroupResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


