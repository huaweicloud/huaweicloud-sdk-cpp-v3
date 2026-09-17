

#include "huaweicloud/projectman/v4/model/ChangePlanStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ChangePlanStatusResponse::ChangePlanStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ChangePlanStatusResponse::~ChangePlanStatusResponse() = default;

void ChangePlanStatusResponse::validate()
{
}

web::json::value ChangePlanStatusResponse::toJson() const
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
bool ChangePlanStatusResponse::fromJson(const web::json::value& val)
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
            StatusChangeResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ChangePlanStatusResponse::getStatus() const
{
    return status_;
}

void ChangePlanStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangePlanStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ChangePlanStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChangePlanStatusResponse::getMessage() const
{
    return message_;
}

void ChangePlanStatusResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ChangePlanStatusResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ChangePlanStatusResponse::unsetmessage()
{
    messageIsSet_ = false;
}

StatusChangeResult ChangePlanStatusResponse::getResult() const
{
    return result_;
}

void ChangePlanStatusResponse::setResult(const StatusChangeResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ChangePlanStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ChangePlanStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


