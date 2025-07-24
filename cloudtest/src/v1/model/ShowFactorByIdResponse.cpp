

#include "huaweicloud/cloudtest/v1/model/ShowFactorByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFactorByIdResponse::ShowFactorByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowFactorByIdResponse::~ShowFactorByIdResponse() = default;

void ShowFactorByIdResponse::validate()
{
}

web::json::value ShowFactorByIdResponse::toJson() const
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
bool ShowFactorByIdResponse::fromJson(const web::json::value& val)
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
            Object refVal;
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


std::string ShowFactorByIdResponse::getCode() const
{
    return code_;
}

void ShowFactorByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowFactorByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowFactorByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object ShowFactorByIdResponse::getData() const
{
    return data_;
}

void ShowFactorByIdResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFactorByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFactorByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowFactorByIdResponse::getMessage() const
{
    return message_;
}

void ShowFactorByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowFactorByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowFactorByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


