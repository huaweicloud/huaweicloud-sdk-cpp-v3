

#include "huaweicloud/cloudtest/v1/model/ShowTestcaseByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestcaseByPageResponse::ShowTestcaseByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowTestcaseByPageResponse::~ShowTestcaseByPageResponse() = default;

void ShowTestcaseByPageResponse::validate()
{
}

web::json::value ShowTestcaseByPageResponse::toJson() const
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
bool ShowTestcaseByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoTestCase refVal;
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


std::string ShowTestcaseByPageResponse::getCode() const
{
    return code_;
}

void ShowTestcaseByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowTestcaseByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowTestcaseByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoTestCase ShowTestcaseByPageResponse::getData() const
{
    return data_;
}

void ShowTestcaseByPageResponse::setData(const BasePageInfoTestCase& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTestcaseByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTestcaseByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowTestcaseByPageResponse::getMessage() const
{
    return message_;
}

void ShowTestcaseByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTestcaseByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTestcaseByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


