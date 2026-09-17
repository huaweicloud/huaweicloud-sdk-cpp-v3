

#include "huaweicloud/projectman/v4/model/ListProjectUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectUsersResponse::ListProjectUsersResponse()
{
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListProjectUsersResponse::~ListProjectUsersResponse() = default;

void ListProjectUsersResponse::validate()
{
}

web::json::value ListProjectUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListProjectUsersResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<UserVO> refVal;
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
    return ok;
}


std::string ListProjectUsersResponse::getMessage() const
{
    return message_;
}

void ListProjectUsersResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListProjectUsersResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListProjectUsersResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<UserVO>& ListProjectUsersResponse::getResult()
{
    return result_;
}

void ListProjectUsersResponse::setResult(const std::vector<UserVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProjectUsersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProjectUsersResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListProjectUsersResponse::getStatus() const
{
    return status_;
}

void ListProjectUsersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectUsersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectUsersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


