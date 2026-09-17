

#include "huaweicloud/projectman/v4/model/ShowIpdIssueRelationsConfigByProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdIssueRelationsConfigByProjectResponse::ShowIpdIssueRelationsConfigByProjectResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdIssueRelationsConfigByProjectResponse::~ShowIpdIssueRelationsConfigByProjectResponse() = default;

void ShowIpdIssueRelationsConfigByProjectResponse::validate()
{
}

web::json::value ShowIpdIssueRelationsConfigByProjectResponse::toJson() const
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
bool ShowIpdIssueRelationsConfigByProjectResponse::fromJson(const web::json::value& val)
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
            RelationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdIssueRelationsConfigByProjectResponse::getStatus() const
{
    return status_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdIssueRelationsConfigByProjectResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdIssueRelationsConfigByProjectResponse::getMessage() const
{
    return message_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdIssueRelationsConfigByProjectResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::unsetmessage()
{
    messageIsSet_ = false;
}

RelationConfig ShowIpdIssueRelationsConfigByProjectResponse::getResult() const
{
    return result_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::setResult(const RelationConfig& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdIssueRelationsConfigByProjectResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdIssueRelationsConfigByProjectResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


