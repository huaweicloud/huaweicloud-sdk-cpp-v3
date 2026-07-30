

#include "huaweicloud/modelarts/v1/model/WorkflowErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowErrorInfo::WorkflowErrorInfo()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

WorkflowErrorInfo::~WorkflowErrorInfo() = default;

void WorkflowErrorInfo::validate()
{
}

web::json::value WorkflowErrorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool WorkflowErrorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string WorkflowErrorInfo::getErrorCode() const
{
    return errorCode_;
}

void WorkflowErrorInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool WorkflowErrorInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void WorkflowErrorInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string WorkflowErrorInfo::getErrorMessage() const
{
    return errorMessage_;
}

void WorkflowErrorInfo::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool WorkflowErrorInfo::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void WorkflowErrorInfo::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


