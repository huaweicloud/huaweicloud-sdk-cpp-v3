

#include "huaweicloud/cloudtest/v1/model/ShowSystemConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowSystemConfigsResponse::ShowSystemConfigsResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowSystemConfigsResponse::~ShowSystemConfigsResponse() = default;

void ShowSystemConfigsResponse::validate()
{
}

web::json::value ShowSystemConfigsResponse::toJson() const
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
bool ShowSystemConfigsResponse::fromJson(const web::json::value& val)
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
            std::vector<SystemConfig> refVal;
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


std::string ShowSystemConfigsResponse::getCode() const
{
    return code_;
}

void ShowSystemConfigsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowSystemConfigsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowSystemConfigsResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<SystemConfig>& ShowSystemConfigsResponse::getData()
{
    return data_;
}

void ShowSystemConfigsResponse::setData(const std::vector<SystemConfig>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowSystemConfigsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowSystemConfigsResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowSystemConfigsResponse::getMessage() const
{
    return message_;
}

void ShowSystemConfigsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowSystemConfigsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowSystemConfigsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


