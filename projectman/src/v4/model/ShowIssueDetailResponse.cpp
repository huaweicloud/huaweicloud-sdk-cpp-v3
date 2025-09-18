

#include "huaweicloud/projectman/v4/model/ShowIssueDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueDetailResponse::ShowIssueDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIssueDetailResponse::~ShowIssueDetailResponse() = default;

void ShowIssueDetailResponse::validate()
{
}

web::json::value ShowIssueDetailResponse::toJson() const
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
bool ShowIssueDetailResponse::fromJson(const web::json::value& val)
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
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIssueDetailResponse::getStatus() const
{
    return status_;
}

void ShowIssueDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIssueDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIssueDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIssueDetailResponse::getMessage() const
{
    return message_;
}

void ShowIssueDetailResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIssueDetailResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIssueDetailResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& ShowIssueDetailResponse::getResult()
{
    return result_;
}

void ShowIssueDetailResponse::setResult(const std::vector<std::map<std::string, Object>>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIssueDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIssueDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


