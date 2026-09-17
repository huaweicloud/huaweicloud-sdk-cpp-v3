

#include "huaweicloud/projectman/v4/model/GetModelConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




GetModelConfigResponse::GetModelConfigResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

GetModelConfigResponse::~GetModelConfigResponse() = default;

void GetModelConfigResponse::validate()
{
}

web::json::value GetModelConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool GetModelConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ModelConfigDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::string GetModelConfigResponse::getStatus() const
{
    return status_;
}

void GetModelConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetModelConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetModelConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ModelConfigDTO GetModelConfigResponse::getResult() const
{
    return result_;
}

void GetModelConfigResponse::setResult(const ModelConfigDTO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool GetModelConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void GetModelConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string GetModelConfigResponse::getMessage() const
{
    return message_;
}

void GetModelConfigResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool GetModelConfigResponse::messageIsSet() const
{
    return messageIsSet_;
}

void GetModelConfigResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


