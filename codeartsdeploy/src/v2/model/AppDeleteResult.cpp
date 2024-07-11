

#include "huaweicloud/codeartsdeploy/v2/model/AppDeleteResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppDeleteResult::AppDeleteResult()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorReason_ = "";
    errorReasonIsSet_ = false;
}

AppDeleteResult::~AppDeleteResult() = default;

void AppDeleteResult::validate()
{
}

web::json::value AppDeleteResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorReasonIsSet_) {
        val[utility::conversions::to_string_t("error_reason")] = ModelBase::toJson(errorReason_);
    }

    return val;
}
bool AppDeleteResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorReason(refVal);
        }
    }
    return ok;
}


std::string AppDeleteResult::getApplicationId() const
{
    return applicationId_;
}

void AppDeleteResult::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool AppDeleteResult::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void AppDeleteResult::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string AppDeleteResult::getApplicationName() const
{
    return applicationName_;
}

void AppDeleteResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool AppDeleteResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void AppDeleteResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string AppDeleteResult::getStatus() const
{
    return status_;
}

void AppDeleteResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AppDeleteResult::statusIsSet() const
{
    return statusIsSet_;
}

void AppDeleteResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AppDeleteResult::getErrorReason() const
{
    return errorReason_;
}

void AppDeleteResult::setErrorReason(const std::string& value)
{
    errorReason_ = value;
    errorReasonIsSet_ = true;
}

bool AppDeleteResult::errorReasonIsSet() const
{
    return errorReasonIsSet_;
}

void AppDeleteResult::unseterrorReason()
{
    errorReasonIsSet_ = false;
}

}
}
}
}
}


