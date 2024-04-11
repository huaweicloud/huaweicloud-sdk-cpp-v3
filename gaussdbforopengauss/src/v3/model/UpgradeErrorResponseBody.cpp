

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeErrorResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeErrorResponseBody::UpgradeErrorResponseBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UpgradeErrorResponseBody::~UpgradeErrorResponseBody() = default;

void UpgradeErrorResponseBody::validate()
{
}

web::json::value UpgradeErrorResponseBody::toJson() const
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
bool UpgradeErrorResponseBody::fromJson(const web::json::value& val)
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


std::string UpgradeErrorResponseBody::getErrorCode() const
{
    return errorCode_;
}

void UpgradeErrorResponseBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpgradeErrorResponseBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpgradeErrorResponseBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpgradeErrorResponseBody::getErrorMsg() const
{
    return errorMsg_;
}

void UpgradeErrorResponseBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpgradeErrorResponseBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpgradeErrorResponseBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


