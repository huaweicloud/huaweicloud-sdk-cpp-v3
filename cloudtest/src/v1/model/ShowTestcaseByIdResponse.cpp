

#include "huaweicloud/cloudtest/v1/model/ShowTestcaseByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestcaseByIdResponse::ShowTestcaseByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowTestcaseByIdResponse::~ShowTestcaseByIdResponse() = default;

void ShowTestcaseByIdResponse::validate()
{
}

web::json::value ShowTestcaseByIdResponse::toJson() const
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
bool ShowTestcaseByIdResponse::fromJson(const web::json::value& val)
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
            TestCase refVal;
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


std::string ShowTestcaseByIdResponse::getCode() const
{
    return code_;
}

void ShowTestcaseByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowTestcaseByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowTestcaseByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

TestCase ShowTestcaseByIdResponse::getData() const
{
    return data_;
}

void ShowTestcaseByIdResponse::setData(const TestCase& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTestcaseByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTestcaseByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowTestcaseByIdResponse::getMessage() const
{
    return message_;
}

void ShowTestcaseByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTestcaseByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTestcaseByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


