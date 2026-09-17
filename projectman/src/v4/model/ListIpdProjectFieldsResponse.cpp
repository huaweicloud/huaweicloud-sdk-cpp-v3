

#include "huaweicloud/projectman/v4/model/ListIpdProjectFieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdProjectFieldsResponse::ListIpdProjectFieldsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ListIpdProjectFieldsResponse::~ListIpdProjectFieldsResponse() = default;

void ListIpdProjectFieldsResponse::validate()
{
}

web::json::value ListIpdProjectFieldsResponse::toJson() const
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
bool ListIpdProjectFieldsResponse::fromJson(const web::json::value& val)
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
            FieldListResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListIpdProjectFieldsResponse::getStatus() const
{
    return status_;
}

void ListIpdProjectFieldsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIpdProjectFieldsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIpdProjectFieldsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIpdProjectFieldsResponse::getMessage() const
{
    return message_;
}

void ListIpdProjectFieldsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIpdProjectFieldsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIpdProjectFieldsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

FieldListResult ListIpdProjectFieldsResponse::getResult() const
{
    return result_;
}

void ListIpdProjectFieldsResponse::setResult(const FieldListResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIpdProjectFieldsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIpdProjectFieldsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


