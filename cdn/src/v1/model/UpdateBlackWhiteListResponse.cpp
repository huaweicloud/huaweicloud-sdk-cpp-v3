

#include "huaweicloud/cdn/v1/model/UpdateBlackWhiteListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateBlackWhiteListResponse::UpdateBlackWhiteListResponse()
{
    code_ = "";
    codeIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateBlackWhiteListResponse::~UpdateBlackWhiteListResponse() = default;

void UpdateBlackWhiteListResponse::validate()
{
}

web::json::value UpdateBlackWhiteListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateBlackWhiteListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateBlackWhiteListResponse::getCode() const
{
    return code_;
}

void UpdateBlackWhiteListResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool UpdateBlackWhiteListResponse::codeIsSet() const
{
    return codeIsSet_;
}

void UpdateBlackWhiteListResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string UpdateBlackWhiteListResponse::getResult() const
{
    return result_;
}

void UpdateBlackWhiteListResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBlackWhiteListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBlackWhiteListResponse::unsetresult()
{
    resultIsSet_ = false;
}

Object UpdateBlackWhiteListResponse::getData() const
{
    return data_;
}

void UpdateBlackWhiteListResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateBlackWhiteListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateBlackWhiteListResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string UpdateBlackWhiteListResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateBlackWhiteListResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateBlackWhiteListResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateBlackWhiteListResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


