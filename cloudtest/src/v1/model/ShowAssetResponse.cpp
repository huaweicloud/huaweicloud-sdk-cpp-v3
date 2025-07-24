

#include "huaweicloud/cloudtest/v1/model/ShowAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAssetResponse::ShowAssetResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowAssetResponse::~ShowAssetResponse() = default;

void ShowAssetResponse::validate()
{
}

web::json::value ShowAssetResponse::toJson() const
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
bool ShowAssetResponse::fromJson(const web::json::value& val)
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
            std::vector<Asset> refVal;
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


std::string ShowAssetResponse::getCode() const
{
    return code_;
}

void ShowAssetResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowAssetResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowAssetResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<Asset>& ShowAssetResponse::getData()
{
    return data_;
}

void ShowAssetResponse::setData(const std::vector<Asset>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAssetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAssetResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowAssetResponse::getMessage() const
{
    return message_;
}

void ShowAssetResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowAssetResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowAssetResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


