

#include "huaweicloud/projectman/v4/model/ShowTenantIssueListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowTenantIssueListResponse::ShowTenantIssueListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowTenantIssueListResponse::~ShowTenantIssueListResponse() = default;

void ShowTenantIssueListResponse::validate()
{
}

web::json::value ShowTenantIssueListResponse::toJson() const
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
bool ShowTenantIssueListResponse::fromJson(const web::json::value& val)
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
            std::vector<IssueDetailsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowTenantIssueListResponse::getStatus() const
{
    return status_;
}

void ShowTenantIssueListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTenantIssueListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTenantIssueListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowTenantIssueListResponse::getMessage() const
{
    return message_;
}

void ShowTenantIssueListResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTenantIssueListResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTenantIssueListResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<IssueDetailsResponse>& ShowTenantIssueListResponse::getResult()
{
    return result_;
}

void ShowTenantIssueListResponse::setResult(const std::vector<IssueDetailsResponse>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTenantIssueListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTenantIssueListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


