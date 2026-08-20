

#include "huaweicloud/projectman/v4/model/BatchBaselineIpdIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchBaselineIpdIssuesResponse::BatchBaselineIpdIssuesResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchBaselineIpdIssuesResponse::~BatchBaselineIpdIssuesResponse() = default;

void BatchBaselineIpdIssuesResponse::validate()
{
}

web::json::value BatchBaselineIpdIssuesResponse::toJson() const
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
bool BatchBaselineIpdIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchBaselineIssueResponse_result> refVal;
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


std::vector<BatchBaselineIssueResponse_result>& BatchBaselineIpdIssuesResponse::getResult()
{
    return result_;
}

void BatchBaselineIpdIssuesResponse::setResult(const std::vector<BatchBaselineIssueResponse_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchBaselineIpdIssuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchBaselineIpdIssuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchBaselineIpdIssuesResponse::getStatus() const
{
    return status_;
}

void BatchBaselineIpdIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchBaselineIpdIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchBaselineIpdIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchBaselineIpdIssuesResponse::getMessage() const
{
    return message_;
}

void BatchBaselineIpdIssuesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchBaselineIpdIssuesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchBaselineIpdIssuesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


