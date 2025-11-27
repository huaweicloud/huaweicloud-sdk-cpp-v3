

#include "huaweicloud/gaussdbforopengauss/v3/model/ResourceErrorResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResourceErrorResponseBody::ResourceErrorResponseBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ResourceErrorResponseBody::~ResourceErrorResponseBody() = default;

void ResourceErrorResponseBody::validate()
{
}

web::json::value ResourceErrorResponseBody::toJson() const
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
bool ResourceErrorResponseBody::fromJson(const web::json::value& val)
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


std::string ResourceErrorResponseBody::getErrorCode() const
{
    return errorCode_;
}

void ResourceErrorResponseBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ResourceErrorResponseBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ResourceErrorResponseBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ResourceErrorResponseBody::getErrorMsg() const
{
    return errorMsg_;
}

void ResourceErrorResponseBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ResourceErrorResponseBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ResourceErrorResponseBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


