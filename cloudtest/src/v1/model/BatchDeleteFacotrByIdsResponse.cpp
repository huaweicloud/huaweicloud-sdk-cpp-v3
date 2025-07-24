

#include "huaweicloud/cloudtest/v1/model/BatchDeleteFacotrByIdsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteFacotrByIdsResponse::BatchDeleteFacotrByIdsResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchDeleteFacotrByIdsResponse::~BatchDeleteFacotrByIdsResponse() = default;

void BatchDeleteFacotrByIdsResponse::validate()
{
}

web::json::value BatchDeleteFacotrByIdsResponse::toJson() const
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
bool BatchDeleteFacotrByIdsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteFacotrByIdsResponse::getCode() const
{
    return code_;
}

void BatchDeleteFacotrByIdsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BatchDeleteFacotrByIdsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void BatchDeleteFacotrByIdsResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object BatchDeleteFacotrByIdsResponse::getData() const
{
    return data_;
}

void BatchDeleteFacotrByIdsResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDeleteFacotrByIdsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDeleteFacotrByIdsResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string BatchDeleteFacotrByIdsResponse::getMessage() const
{
    return message_;
}

void BatchDeleteFacotrByIdsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchDeleteFacotrByIdsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchDeleteFacotrByIdsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


