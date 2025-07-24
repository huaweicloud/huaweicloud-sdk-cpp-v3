

#include "huaweicloud/cloudtest/v1/model/DeleteAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteAssetResponse::DeleteAssetResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteAssetResponse::~DeleteAssetResponse() = default;

void DeleteAssetResponse::validate()
{
}

web::json::value DeleteAssetResponse::toJson() const
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
bool DeleteAssetResponse::fromJson(const web::json::value& val)
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


std::string DeleteAssetResponse::getCode() const
{
    return code_;
}

void DeleteAssetResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteAssetResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteAssetResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object DeleteAssetResponse::getData() const
{
    return data_;
}

void DeleteAssetResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAssetResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAssetResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string DeleteAssetResponse::getMessage() const
{
    return message_;
}

void DeleteAssetResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteAssetResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteAssetResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


