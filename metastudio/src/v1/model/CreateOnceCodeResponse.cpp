

#include "huaweicloud/metastudio/v1/model/CreateOnceCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateOnceCodeResponse::CreateOnceCodeResponse()
{
    onceCode_ = "";
    onceCodeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateOnceCodeResponse::~CreateOnceCodeResponse() = default;

void CreateOnceCodeResponse::validate()
{
}

web::json::value CreateOnceCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onceCodeIsSet_) {
        val[utility::conversions::to_string_t("once_code")] = ModelBase::toJson(onceCode_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateOnceCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("once_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("once_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnceCode(refVal);
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


std::string CreateOnceCodeResponse::getOnceCode() const
{
    return onceCode_;
}

void CreateOnceCodeResponse::setOnceCode(const std::string& value)
{
    onceCode_ = value;
    onceCodeIsSet_ = true;
}

bool CreateOnceCodeResponse::onceCodeIsSet() const
{
    return onceCodeIsSet_;
}

void CreateOnceCodeResponse::unsetonceCode()
{
    onceCodeIsSet_ = false;
}

std::string CreateOnceCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateOnceCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateOnceCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateOnceCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


