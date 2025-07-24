

#include "huaweicloud/cloudtest/v1/model/DeleteAssetTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteAssetTreeResponse::DeleteAssetTreeResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteAssetTreeResponse::~DeleteAssetTreeResponse() = default;

void DeleteAssetTreeResponse::validate()
{
}

web::json::value DeleteAssetTreeResponse::toJson() const
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
bool DeleteAssetTreeResponse::fromJson(const web::json::value& val)
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


std::string DeleteAssetTreeResponse::getCode() const
{
    return code_;
}

void DeleteAssetTreeResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteAssetTreeResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteAssetTreeResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object DeleteAssetTreeResponse::getData() const
{
    return data_;
}

void DeleteAssetTreeResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteAssetTreeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteAssetTreeResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string DeleteAssetTreeResponse::getMessage() const
{
    return message_;
}

void DeleteAssetTreeResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteAssetTreeResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteAssetTreeResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


