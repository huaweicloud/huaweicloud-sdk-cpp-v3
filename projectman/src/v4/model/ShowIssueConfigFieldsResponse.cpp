

#include "huaweicloud/projectman/v4/model/ShowIssueConfigFieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueConfigFieldsResponse::ShowIssueConfigFieldsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIssueConfigFieldsResponse::~ShowIssueConfigFieldsResponse() = default;

void ShowIssueConfigFieldsResponse::validate()
{
}

web::json::value ShowIssueConfigFieldsResponse::toJson() const
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
bool ShowIssueConfigFieldsResponse::fromJson(const web::json::value& val)
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
            IssueConfigFieldsResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIssueConfigFieldsResponse::getStatus() const
{
    return status_;
}

void ShowIssueConfigFieldsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIssueConfigFieldsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIssueConfigFieldsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIssueConfigFieldsResponse::getMessage() const
{
    return message_;
}

void ShowIssueConfigFieldsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIssueConfigFieldsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIssueConfigFieldsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

IssueConfigFieldsResponseBody_result ShowIssueConfigFieldsResponse::getResult() const
{
    return result_;
}

void ShowIssueConfigFieldsResponse::setResult(const IssueConfigFieldsResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIssueConfigFieldsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIssueConfigFieldsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


