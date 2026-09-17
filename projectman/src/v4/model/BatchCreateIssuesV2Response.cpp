

#include "huaweicloud/projectman/v4/model/BatchCreateIssuesV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIssuesV2Response::BatchCreateIssuesV2Response()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchCreateIssuesV2Response::~BatchCreateIssuesV2Response() = default;

void BatchCreateIssuesV2Response::validate()
{
}

web::json::value BatchCreateIssuesV2Response::toJson() const
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
bool BatchCreateIssuesV2Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueEntity> refVal;
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


std::vector<IssueEntity>& BatchCreateIssuesV2Response::getResult()
{
    return result_;
}

void BatchCreateIssuesV2Response::setResult(const std::vector<IssueEntity>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchCreateIssuesV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void BatchCreateIssuesV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchCreateIssuesV2Response::getStatus() const
{
    return status_;
}

void BatchCreateIssuesV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateIssuesV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateIssuesV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchCreateIssuesV2Response::getMessage() const
{
    return message_;
}

void BatchCreateIssuesV2Response::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchCreateIssuesV2Response::messageIsSet() const
{
    return messageIsSet_;
}

void BatchCreateIssuesV2Response::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


