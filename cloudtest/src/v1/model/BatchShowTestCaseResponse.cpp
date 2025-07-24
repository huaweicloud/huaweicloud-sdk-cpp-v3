

#include "huaweicloud/cloudtest/v1/model/BatchShowTestCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchShowTestCaseResponse::BatchShowTestCaseResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchShowTestCaseResponse::~BatchShowTestCaseResponse() = default;

void BatchShowTestCaseResponse::validate()
{
}

web::json::value BatchShowTestCaseResponse::toJson() const
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
bool BatchShowTestCaseResponse::fromJson(const web::json::value& val)
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


std::string BatchShowTestCaseResponse::getCode() const
{
    return code_;
}

void BatchShowTestCaseResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BatchShowTestCaseResponse::codeIsSet() const
{
    return codeIsSet_;
}

void BatchShowTestCaseResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object BatchShowTestCaseResponse::getData() const
{
    return data_;
}

void BatchShowTestCaseResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchShowTestCaseResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchShowTestCaseResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string BatchShowTestCaseResponse::getMessage() const
{
    return message_;
}

void BatchShowTestCaseResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchShowTestCaseResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchShowTestCaseResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


