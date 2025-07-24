

#include "huaweicloud/cloudtest/v1/model/ShowTestpointByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestpointByPageResponse::ShowTestpointByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowTestpointByPageResponse::~ShowTestpointByPageResponse() = default;

void ShowTestpointByPageResponse::validate()
{
}

web::json::value ShowTestpointByPageResponse::toJson() const
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
bool ShowTestpointByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoTestPoint refVal;
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


std::string ShowTestpointByPageResponse::getCode() const
{
    return code_;
}

void ShowTestpointByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowTestpointByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowTestpointByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoTestPoint ShowTestpointByPageResponse::getData() const
{
    return data_;
}

void ShowTestpointByPageResponse::setData(const BasePageInfoTestPoint& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTestpointByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTestpointByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowTestpointByPageResponse::getMessage() const
{
    return message_;
}

void ShowTestpointByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTestpointByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTestpointByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


