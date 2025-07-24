

#include "huaweicloud/cloudtest/v1/model/ShowStatisticByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowStatisticByIdResponse::ShowStatisticByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowStatisticByIdResponse::~ShowStatisticByIdResponse() = default;

void ShowStatisticByIdResponse::validate()
{
}

web::json::value ShowStatisticByIdResponse::toJson() const
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
bool ShowStatisticByIdResponse::fromJson(const web::json::value& val)
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
            std::map<std::string, int32_t> refVal;
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


std::string ShowStatisticByIdResponse::getCode() const
{
    return code_;
}

void ShowStatisticByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowStatisticByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowStatisticByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::map<std::string, int32_t>& ShowStatisticByIdResponse::getData()
{
    return data_;
}

void ShowStatisticByIdResponse::setData(std::map<std::string, int32_t> value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowStatisticByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowStatisticByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowStatisticByIdResponse::getMessage() const
{
    return message_;
}

void ShowStatisticByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowStatisticByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowStatisticByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


