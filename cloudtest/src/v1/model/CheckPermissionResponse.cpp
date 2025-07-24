

#include "huaweicloud/cloudtest/v1/model/CheckPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CheckPermissionResponse::CheckPermissionResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CheckPermissionResponse::~CheckPermissionResponse() = default;

void CheckPermissionResponse::validate()
{
}

web::json::value CheckPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CheckPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::string CheckPermissionResponse::getCode() const
{
    return code_;
}

void CheckPermissionResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CheckPermissionResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CheckPermissionResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::map<std::string, bool>& CheckPermissionResponse::getData()
{
    return data_;
}

void CheckPermissionResponse::setData(std::map<std::string, bool> value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CheckPermissionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CheckPermissionResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string CheckPermissionResponse::getMessage() const
{
    return message_;
}

void CheckPermissionResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CheckPermissionResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CheckPermissionResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


