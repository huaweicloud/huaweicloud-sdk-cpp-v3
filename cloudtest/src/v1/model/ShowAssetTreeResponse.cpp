

#include "huaweicloud/cloudtest/v1/model/ShowAssetTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAssetTreeResponse::ShowAssetTreeResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowAssetTreeResponse::~ShowAssetTreeResponse() = default;

void ShowAssetTreeResponse::validate()
{
}

web::json::value ShowAssetTreeResponse::toJson() const
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
bool ShowAssetTreeResponse::fromJson(const web::json::value& val)
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


std::string ShowAssetTreeResponse::getCode() const
{
    return code_;
}

void ShowAssetTreeResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowAssetTreeResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowAssetTreeResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object ShowAssetTreeResponse::getData() const
{
    return data_;
}

void ShowAssetTreeResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAssetTreeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAssetTreeResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowAssetTreeResponse::getMessage() const
{
    return message_;
}

void ShowAssetTreeResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowAssetTreeResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowAssetTreeResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


