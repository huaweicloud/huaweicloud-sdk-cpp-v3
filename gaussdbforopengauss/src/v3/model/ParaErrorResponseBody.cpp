

#include "huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ParaErrorResponseBody::ParaErrorResponseBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ParaErrorResponseBody::~ParaErrorResponseBody() = default;

void ParaErrorResponseBody::validate()
{
}

web::json::value ParaErrorResponseBody::toJson() const
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

bool ParaErrorResponseBody::fromJson(const web::json::value& val)
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

std::string ParaErrorResponseBody::getErrorCode() const
{
    return errorCode_;
}

void ParaErrorResponseBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ParaErrorResponseBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ParaErrorResponseBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ParaErrorResponseBody::getErrorMsg() const
{
    return errorMsg_;
}

void ParaErrorResponseBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ParaErrorResponseBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ParaErrorResponseBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


