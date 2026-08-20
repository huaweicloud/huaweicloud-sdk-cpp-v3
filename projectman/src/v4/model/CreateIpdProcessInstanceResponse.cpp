

#include "huaweicloud/projectman/v4/model/CreateIpdProcessInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProcessInstanceResponse::CreateIpdProcessInstanceResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

CreateIpdProcessInstanceResponse::~CreateIpdProcessInstanceResponse() = default;

void CreateIpdProcessInstanceResponse::validate()
{
}

web::json::value CreateIpdProcessInstanceResponse::toJson() const
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
bool CreateIpdProcessInstanceResponse::fromJson(const web::json::value& val)
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
            ProcessInstanceResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateIpdProcessInstanceResponse::getStatus() const
{
    return status_;
}

void CreateIpdProcessInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateIpdProcessInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateIpdProcessInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateIpdProcessInstanceResponse::getMessage() const
{
    return message_;
}

void CreateIpdProcessInstanceResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateIpdProcessInstanceResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateIpdProcessInstanceResponse::unsetmessage()
{
    messageIsSet_ = false;
}

ProcessInstanceResponse_result CreateIpdProcessInstanceResponse::getResult() const
{
    return result_;
}

void CreateIpdProcessInstanceResponse::setResult(const ProcessInstanceResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateIpdProcessInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateIpdProcessInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


