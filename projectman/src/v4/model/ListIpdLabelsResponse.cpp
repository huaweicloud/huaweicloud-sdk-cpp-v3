

#include "huaweicloud/projectman/v4/model/ListIpdLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdLabelsResponse::ListIpdLabelsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ListIpdLabelsResponse::~ListIpdLabelsResponse() = default;

void ListIpdLabelsResponse::validate()
{
}

web::json::value ListIpdLabelsResponse::toJson() const
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
bool ListIpdLabelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            LabelListResponse refVal;
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


LabelListResponse ListIpdLabelsResponse::getResult() const
{
    return result_;
}

void ListIpdLabelsResponse::setResult(const LabelListResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIpdLabelsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIpdLabelsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListIpdLabelsResponse::getStatus() const
{
    return status_;
}

void ListIpdLabelsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIpdLabelsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIpdLabelsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIpdLabelsResponse::getMessage() const
{
    return message_;
}

void ListIpdLabelsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIpdLabelsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIpdLabelsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


