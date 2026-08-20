

#include "huaweicloud/projectman/v4/model/ShowIpdFieldsV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdFieldsV2Response::ShowIpdFieldsV2Response()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdFieldsV2Response::~ShowIpdFieldsV2Response() = default;

void ShowIpdFieldsV2Response::validate()
{
}

web::json::value ShowIpdFieldsV2Response::toJson() const
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
bool ShowIpdFieldsV2Response::fromJson(const web::json::value& val)
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
            std::vector<FieldVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdFieldsV2Response::getStatus() const
{
    return status_;
}

void ShowIpdFieldsV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdFieldsV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdFieldsV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdFieldsV2Response::getMessage() const
{
    return message_;
}

void ShowIpdFieldsV2Response::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdFieldsV2Response::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdFieldsV2Response::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<FieldVO>& ShowIpdFieldsV2Response::getResult()
{
    return result_;
}

void ShowIpdFieldsV2Response::setResult(const std::vector<FieldVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdFieldsV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdFieldsV2Response::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


