

#include "huaweicloud/modelarts/v1/model/WorkflowErrorInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowErrorInfoResp::WorkflowErrorInfoResp()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

WorkflowErrorInfoResp::~WorkflowErrorInfoResp() = default;

void WorkflowErrorInfoResp::validate()
{
}

web::json::value WorkflowErrorInfoResp::toJson() const
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
bool WorkflowErrorInfoResp::fromJson(const web::json::value& val)
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


std::string WorkflowErrorInfoResp::getErrorCode() const
{
    return errorCode_;
}

void WorkflowErrorInfoResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool WorkflowErrorInfoResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void WorkflowErrorInfoResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string WorkflowErrorInfoResp::getErrorMessage() const
{
    return errorMessage_;
}

void WorkflowErrorInfoResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool WorkflowErrorInfoResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void WorkflowErrorInfoResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


