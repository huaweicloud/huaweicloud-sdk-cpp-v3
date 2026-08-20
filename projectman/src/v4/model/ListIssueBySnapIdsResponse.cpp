

#include "huaweicloud/projectman/v4/model/ListIssueBySnapIdsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueBySnapIdsResponse::ListIssueBySnapIdsResponse()
{
    message_ = "";
    messageIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    issuesIsSet_ = false;
}

ListIssueBySnapIdsResponse::~ListIssueBySnapIdsResponse() = default;

void ListIssueBySnapIdsResponse::validate()
{
}

web::json::value ListIssueBySnapIdsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(issuesIsSet_) {
        val[utility::conversions::to_string_t("issues")] = ModelBase::toJson(issues_);
    }

    return val;
}
bool ListIssueBySnapIdsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssues(refVal);
        }
    }
    return ok;
}


std::string ListIssueBySnapIdsResponse::getMessage() const
{
    return message_;
}

void ListIssueBySnapIdsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIssueBySnapIdsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIssueBySnapIdsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ListIssueBySnapIdsResponse::getCode() const
{
    return code_;
}

void ListIssueBySnapIdsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListIssueBySnapIdsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListIssueBySnapIdsResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<IssueVO>& ListIssueBySnapIdsResponse::getIssues()
{
    return issues_;
}

void ListIssueBySnapIdsResponse::setIssues(const std::vector<IssueVO>& value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ListIssueBySnapIdsResponse::issuesIsSet() const
{
    return issuesIsSet_;
}

void ListIssueBySnapIdsResponse::unsetissues()
{
    issuesIsSet_ = false;
}

}
}
}
}
}


