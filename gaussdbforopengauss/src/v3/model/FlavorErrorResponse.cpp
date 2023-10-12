

#include "huaweicloud/gaussdbforopengauss/v3/model/FlavorErrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FlavorErrorResponse::FlavorErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

FlavorErrorResponse::~FlavorErrorResponse() = default;

void FlavorErrorResponse::validate()
{
}

web::json::value FlavorErrorResponse::toJson() const
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
bool FlavorErrorResponse::fromJson(const web::json::value& val)
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


std::string FlavorErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void FlavorErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool FlavorErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void FlavorErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string FlavorErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void FlavorErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool FlavorErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void FlavorErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


