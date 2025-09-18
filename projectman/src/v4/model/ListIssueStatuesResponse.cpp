

#include "huaweicloud/projectman/v4/model/ListIssueStatuesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueStatuesResponse::ListIssueStatuesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ListIssueStatuesResponse::~ListIssueStatuesResponse() = default;

void ListIssueStatuesResponse::validate()
{
}

web::json::value ListIssueStatuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
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
bool ListIssueStatuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<IPDStatusVO> refVal;
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


int32_t ListIssueStatuesResponse::getTotal() const
{
    return total_;
}

void ListIssueStatuesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssueStatuesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssueStatuesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<IPDStatusVO>& ListIssueStatuesResponse::getResult()
{
    return result_;
}

void ListIssueStatuesResponse::setResult(const std::vector<IPDStatusVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIssueStatuesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIssueStatuesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListIssueStatuesResponse::getStatus() const
{
    return status_;
}

void ListIssueStatuesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIssueStatuesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIssueStatuesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIssueStatuesResponse::getMessage() const
{
    return message_;
}

void ListIssueStatuesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIssueStatuesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIssueStatuesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


