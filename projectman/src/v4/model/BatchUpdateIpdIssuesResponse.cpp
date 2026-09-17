

#include "huaweicloud/projectman/v4/model/BatchUpdateIpdIssuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateIpdIssuesResponse::BatchUpdateIpdIssuesResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchUpdateIpdIssuesResponse::~BatchUpdateIpdIssuesResponse() = default;

void BatchUpdateIpdIssuesResponse::validate()
{
}

web::json::value BatchUpdateIpdIssuesResponse::toJson() const
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
bool BatchUpdateIpdIssuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueBatchOperateEntitiesResult> refVal;
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


std::vector<IssueBatchOperateEntitiesResult>& BatchUpdateIpdIssuesResponse::getResult()
{
    return result_;
}

void BatchUpdateIpdIssuesResponse::setResult(const std::vector<IssueBatchOperateEntitiesResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateIpdIssuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateIpdIssuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchUpdateIpdIssuesResponse::getStatus() const
{
    return status_;
}

void BatchUpdateIpdIssuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateIpdIssuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateIpdIssuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchUpdateIpdIssuesResponse::getMessage() const
{
    return message_;
}

void BatchUpdateIpdIssuesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchUpdateIpdIssuesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchUpdateIpdIssuesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


