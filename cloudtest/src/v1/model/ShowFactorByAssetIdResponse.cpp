

#include "huaweicloud/cloudtest/v1/model/ShowFactorByAssetIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFactorByAssetIdResponse::ShowFactorByAssetIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowFactorByAssetIdResponse::~ShowFactorByAssetIdResponse() = default;

void ShowFactorByAssetIdResponse::validate()
{
}

web::json::value ShowFactorByAssetIdResponse::toJson() const
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
bool ShowFactorByAssetIdResponse::fromJson(const web::json::value& val)
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


std::string ShowFactorByAssetIdResponse::getCode() const
{
    return code_;
}

void ShowFactorByAssetIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowFactorByAssetIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowFactorByAssetIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object ShowFactorByAssetIdResponse::getData() const
{
    return data_;
}

void ShowFactorByAssetIdResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFactorByAssetIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFactorByAssetIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowFactorByAssetIdResponse::getMessage() const
{
    return message_;
}

void ShowFactorByAssetIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowFactorByAssetIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowFactorByAssetIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


