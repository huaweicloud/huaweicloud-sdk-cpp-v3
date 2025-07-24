

#include "huaweicloud/cloudtest/v1/model/ShowTemplateByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTemplateByIdResponse::ShowTemplateByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowTemplateByIdResponse::~ShowTemplateByIdResponse() = default;

void ShowTemplateByIdResponse::validate()
{
}

web::json::value ShowTemplateByIdResponse::toJson() const
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
bool ShowTemplateByIdResponse::fromJson(const web::json::value& val)
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


std::string ShowTemplateByIdResponse::getCode() const
{
    return code_;
}

void ShowTemplateByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowTemplateByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowTemplateByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object ShowTemplateByIdResponse::getData() const
{
    return data_;
}

void ShowTemplateByIdResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTemplateByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTemplateByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowTemplateByIdResponse::getMessage() const
{
    return message_;
}

void ShowTemplateByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTemplateByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTemplateByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


