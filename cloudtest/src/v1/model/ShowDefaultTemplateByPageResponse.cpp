

#include "huaweicloud/cloudtest/v1/model/ShowDefaultTemplateByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowDefaultTemplateByPageResponse::ShowDefaultTemplateByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowDefaultTemplateByPageResponse::~ShowDefaultTemplateByPageResponse() = default;

void ShowDefaultTemplateByPageResponse::validate()
{
}

web::json::value ShowDefaultTemplateByPageResponse::toJson() const
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
bool ShowDefaultTemplateByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoTemplate refVal;
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


std::string ShowDefaultTemplateByPageResponse::getCode() const
{
    return code_;
}

void ShowDefaultTemplateByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowDefaultTemplateByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowDefaultTemplateByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoTemplate ShowDefaultTemplateByPageResponse::getData() const
{
    return data_;
}

void ShowDefaultTemplateByPageResponse::setData(const BasePageInfoTemplate& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowDefaultTemplateByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowDefaultTemplateByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowDefaultTemplateByPageResponse::getMessage() const
{
    return message_;
}

void ShowDefaultTemplateByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowDefaultTemplateByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowDefaultTemplateByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


