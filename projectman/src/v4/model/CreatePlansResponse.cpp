

#include "huaweicloud/projectman/v4/model/CreatePlansResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreatePlansResponse::CreatePlansResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

CreatePlansResponse::~CreatePlansResponse() = default;

void CreatePlansResponse::validate()
{
}

web::json::value CreatePlansResponse::toJson() const
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
bool CreatePlansResponse::fromJson(const web::json::value& val)
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
            PlanResponseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreatePlansResponse::getStatus() const
{
    return status_;
}

void CreatePlansResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreatePlansResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreatePlansResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreatePlansResponse::getMessage() const
{
    return message_;
}

void CreatePlansResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreatePlansResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreatePlansResponse::unsetmessage()
{
    messageIsSet_ = false;
}

PlanResponseResult CreatePlansResponse::getResult() const
{
    return result_;
}

void CreatePlansResponse::setResult(const PlanResponseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreatePlansResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreatePlansResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


