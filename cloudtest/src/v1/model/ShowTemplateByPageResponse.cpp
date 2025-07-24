

#include "huaweicloud/cloudtest/v1/model/ShowTemplateByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTemplateByPageResponse::ShowTemplateByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowTemplateByPageResponse::~ShowTemplateByPageResponse() = default;

void ShowTemplateByPageResponse::validate()
{
}

web::json::value ShowTemplateByPageResponse::toJson() const
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
bool ShowTemplateByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoTemplateV2 refVal;
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


std::string ShowTemplateByPageResponse::getCode() const
{
    return code_;
}

void ShowTemplateByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowTemplateByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowTemplateByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoTemplateV2 ShowTemplateByPageResponse::getData() const
{
    return data_;
}

void ShowTemplateByPageResponse::setData(const BasePageInfoTemplateV2& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTemplateByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTemplateByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowTemplateByPageResponse::getMessage() const
{
    return message_;
}

void ShowTemplateByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTemplateByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTemplateByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


