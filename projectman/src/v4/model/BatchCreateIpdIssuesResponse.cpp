

#include "huaweicloud/projectman/v4/model/BatchCreateIpdIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIpdIssuesResponse::BatchCreateIpdIssuesResponse()
{
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BatchCreateIpdIssuesResponse::~BatchCreateIpdIssuesResponse() = default;

void BatchCreateIpdIssuesResponse::validate()
{
}

web::json::value BatchCreateIpdIssuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchCreateIpdIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<Object> refVal;
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
    return ok;
}


std::string BatchCreateIpdIssuesResponse::getMessage() const
{
    return message_;
}

void BatchCreateIpdIssuesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchCreateIpdIssuesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchCreateIpdIssuesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<Object>& BatchCreateIpdIssuesResponse::getResult()
{
    return result_;
}

void BatchCreateIpdIssuesResponse::setResult(const std::vector<Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchCreateIpdIssuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchCreateIpdIssuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchCreateIpdIssuesResponse::getStatus() const
{
    return status_;
}

void BatchCreateIpdIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateIpdIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateIpdIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


