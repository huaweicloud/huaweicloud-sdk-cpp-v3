

#include "huaweicloud/cloudtest/v1/model/CreateTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTemplateResponse::CreateTemplateResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CreateTemplateResponse::~CreateTemplateResponse() = default;

void CreateTemplateResponse::validate()
{
}

web::json::value CreateTemplateResponse::toJson() const
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
bool CreateTemplateResponse::fromJson(const web::json::value& val)
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
            Template refVal;
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


std::string CreateTemplateResponse::getCode() const
{
    return code_;
}

void CreateTemplateResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CreateTemplateResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CreateTemplateResponse::unsetcode()
{
    codeIsSet_ = false;
}

Template CreateTemplateResponse::getData() const
{
    return data_;
}

void CreateTemplateResponse::setData(const Template& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateTemplateResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateTemplateResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string CreateTemplateResponse::getMessage() const
{
    return message_;
}

void CreateTemplateResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateTemplateResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateTemplateResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


