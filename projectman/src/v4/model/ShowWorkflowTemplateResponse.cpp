

#include "huaweicloud/projectman/v4/model/ShowWorkflowTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowWorkflowTemplateResponse::ShowWorkflowTemplateResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowWorkflowTemplateResponse::~ShowWorkflowTemplateResponse() = default;

void ShowWorkflowTemplateResponse::validate()
{
}

web::json::value ShowWorkflowTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowWorkflowTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            WorkflowTemplateVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


WorkflowTemplateVO ShowWorkflowTemplateResponse::getResult() const
{
    return result_;
}

void ShowWorkflowTemplateResponse::setResult(const WorkflowTemplateVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowWorkflowTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowWorkflowTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowWorkflowTemplateResponse::getStatus() const
{
    return status_;
}

void ShowWorkflowTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowWorkflowTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowWorkflowTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowWorkflowTemplateResponse::getMessage() const
{
    return message_;
}

void ShowWorkflowTemplateResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowWorkflowTemplateResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowWorkflowTemplateResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


