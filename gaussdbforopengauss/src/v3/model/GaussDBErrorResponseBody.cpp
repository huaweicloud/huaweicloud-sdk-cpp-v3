

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBErrorResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBErrorResponseBody::GaussDBErrorResponseBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

GaussDBErrorResponseBody::~GaussDBErrorResponseBody() = default;

void GaussDBErrorResponseBody::validate()
{
}

web::json::value GaussDBErrorResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool GaussDBErrorResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string GaussDBErrorResponseBody::getErrorCode() const
{
    return errorCode_;
}

void GaussDBErrorResponseBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool GaussDBErrorResponseBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void GaussDBErrorResponseBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string GaussDBErrorResponseBody::getErrorMsg() const
{
    return errorMsg_;
}

void GaussDBErrorResponseBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool GaussDBErrorResponseBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void GaussDBErrorResponseBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


