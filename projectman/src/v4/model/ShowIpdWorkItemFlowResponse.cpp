

#include "huaweicloud/projectman/v4/model/ShowIpdWorkItemFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdWorkItemFlowResponse::ShowIpdWorkItemFlowResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdWorkItemFlowResponse::~ShowIpdWorkItemFlowResponse() = default;

void ShowIpdWorkItemFlowResponse::validate()
{
}

web::json::value ShowIpdWorkItemFlowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowIpdWorkItemFlowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowInfoVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdWorkItemFlowResponse::getStatus() const
{
    return status_;
}

void ShowIpdWorkItemFlowResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdWorkItemFlowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdWorkItemFlowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdWorkItemFlowResponse::getMessage() const
{
    return message_;
}

void ShowIpdWorkItemFlowResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdWorkItemFlowResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdWorkItemFlowResponse::unsetmessage()
{
    messageIsSet_ = false;
}

WorkItemFlowInfoVO ShowIpdWorkItemFlowResponse::getResult() const
{
    return result_;
}

void ShowIpdWorkItemFlowResponse::setResult(const WorkItemFlowInfoVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdWorkItemFlowResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdWorkItemFlowResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


