

#include "huaweicloud/projectman/v4/model/BatchDeleteIpdIssueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIpdIssueResponse::BatchDeleteIpdIssueResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchDeleteIpdIssueResponse::~BatchDeleteIpdIssueResponse() = default;

void BatchDeleteIpdIssueResponse::validate()
{
}

web::json::value BatchDeleteIpdIssueResponse::toJson() const
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
bool BatchDeleteIpdIssueResponse::fromJson(const web::json::value& val)
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


std::vector<IssueBatchOperateEntitiesResult>& BatchDeleteIpdIssueResponse::getResult()
{
    return result_;
}

void BatchDeleteIpdIssueResponse::setResult(const std::vector<IssueBatchOperateEntitiesResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteIpdIssueResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteIpdIssueResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchDeleteIpdIssueResponse::getStatus() const
{
    return status_;
}

void BatchDeleteIpdIssueResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteIpdIssueResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteIpdIssueResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchDeleteIpdIssueResponse::getMessage() const
{
    return message_;
}

void BatchDeleteIpdIssueResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchDeleteIpdIssueResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchDeleteIpdIssueResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


